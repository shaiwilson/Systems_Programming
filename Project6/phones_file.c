#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LENGTH 13


int main(int argc, char *argv[]) {
  FILE *fp; // file pointer
  fp = fopen (argv[1], "r");

  int phone[LENGTH];
  

    /* read line from file */
    while (getline(fp, str))
    {
        printf("(");
        int count = 0, i;
        for (i = 0; i < 4; i ++)
        {
          if(str[i]-'0' >= 0 && str[i] - '0' <= 9)
          {
            count++;
            printf("%c\n", str[i]);
          }
        }

        if(count == 3)
          break; // after three digits leave the loop
    }

   printf(") "); //to print ) after that
   for(;;i++){
   if(str[i]-'0' >=0 && str[i]-'0'<=9){ //to print next 3 digits
       count++;
       printf("%c",str[i]);
    }

    if(count == 6)
      break;

    printf("-"); //to print - after that
   for( ;i<str.length();i++){
   if(str[i]-'0' >=0 && str[i]-'0'<=9){ //to print next 4 digits
       count++;
       printf("%c",str[i]);
    }

    if (count==10) 
      break; //when count is equal to 10, exit the for loop

  }

    printf("\n"); //go to new line

} //go to the begining of while to process next line
  fclose(fp);
   return 0;
}
