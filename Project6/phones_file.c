#include <stdio.h>
#include <ctype.h>
#include <String.h>
#define LENGTH 14 // maximum length of the phone number


int main(int argc, char *argv[]) {
  FILE *fp; // input file pointer
  FILE *outfile; // output file pointer
  const char *filename = argv[1];
  char *filename2; // assign after validating command line arguments
  int i;  // index of the phonenumbre
  int count; // trackthe phonenumbers without syntax
  char phone[LENGTH];

/* 
*   Handle argument exceptions, 
*   print an error message and exit the program.
*/

  if( argc == 3 )
   {
      printf("The arguments supplied are %s and %s\n", argv[1], argv[2]);
      filename2 = argv[2];

   }
   else if( argc == 2 )
   {
      printf("We are creating your output file as output.txt.\n");
      filename2 = "output.txt";

   } 
   else if ( argc < 2 )
   {
      printf("Two few arguments supplied. Exiting..\n");
      return 1;
   }

   fp = fopen(filename, "r");
   outfile = fopen(filename2, "w");

/* 
*   If the input file can not be opened, print an error message
*   and exit the program.
*/

  if (fp == NULL)
  {
    printf("The input file cannot be opened. Exiting..\n");  
    return 1; 
  }

    /* read line from file */
    while (fgets(phone, sizeof(phone), fp))
    {

        //printf("%s\n", phone); 
        
        fprintf(outfile, "(");
       // printf("(");
        count = 0;
        for (i = 0;; i ++)
        {
          if(phone[i] - '0' >= 0 && phone[i] - '0' <= 9)
          {
            count++;
            fprintf(outfile, "%c", phone[i]);
            //printf("%c", phone[i]);
          }

          if(count == 3)
            break; // after three digits leave the loop
        }


   fprintf(outfile, ") "); //to print ) after that

  
   for(i = count + 1;;i++){
   if(phone[i] - '0' >= 0 && phone[i] - '0' <= 9)
   { 
       count++;
       fprintf(outfile, "%c", phone[i]);
    }

    if(count == 6)
      break;
  }

   fprintf(outfile, "-"); //to print - after that

   for(i = count +1; strlen(phone); i++){
   if(phone[i]-'0' >=0 && phone[i]-'0'<=9){ //to print next 4 digits
       count++;
       fprintf(outfile, "%c", phone[i]);
    }

    if (count == 10) 
      break; //when count is equal to 10, exit the for loop

  }

    fprintf(outfile, "\n"); 
    }
  
 //go to the begining of while to process next line
  fclose(fp);
  fclose(outfile);
  return 0;
}
