#include <stdio.h>
#include <ctype.h>
#include <String.h>
#define LENGTH 14


int main(int argc, char *argv[]) {
  FILE *fp; // file pointer
  FILE *outfile;
  const char *filename = argv[1];
  const char *filename2 = argv[2];
  int i;
  int j;
  int count;
  char phone[LENGTH];

  /* 
  *   if no file name is provided, 
  *   print an error message and exit the program.
  */

  if( argc == 3 )
   {
      printf("The arguments supplied are %s and %s\n", argv[1], argv[2]);
   }
   else if( argc < 2 )
   {
      printf("We are creating your output file.\n");
      
   }

   /* 
   *   
   *
   */

  fp = fopen (filename, "r");
  if (fp == NULL)
  {
    return 1;
  }

  outfile = fopen(filename2, "w");
  if (outfile == NULL)
  {
   // Error("Unable to open file.");
    // return 1;
  }
    /* read line from file */
    while (fgets(phone, sizeof(phone), fp))
    {

        //printf("%s\n", phone); 
        
        
        printf("(");
        count = 0;
        for (i = 0;; i ++)
        {
          if(phone[i] - '0' >= 0 && phone[i] - '0' <= 9)
          {
            count++;
            printf("%c", phone[i]);
          }

          if(count == 3)
            break; // after three digits leave the loop
        }


   printf(") "); //to print ) after that

  
   for(i = count + 1;;i++){
   if(phone[i] - '0' >= 0 && phone[i] - '0' <= 9)
   { 
       count++;
       printf("%c",phone[i]);
    }

    if(count == 6)
      break;
  }

   printf("-"); //to print - after that

   for(i = count +1; strlen(phone); i++){
   if(phone[i]-'0' >=0 && phone[i]-'0'<=9){ //to print next 4 digits
       count++;
       printf("%c", phone[i]);
    }

    if (count == 10) 
      break; //when count is equal to 10, exit the for loop

  }

    printf("\n"); //go to new line
    }
  
 //go to the begining of while to process next line
  fclose(fp);
  fclose(outfile);
  return 0;
}
