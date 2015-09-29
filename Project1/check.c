#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
   char string[MAX];
   int i;
   int verify = 1;
   char *c;
   c = string;

   /* save user input */
   printf("Enter a number in the form (XXX)XXX-XXXX\n");
   scanf ( "%s", string);
   /* printf ("The string you entered is: %s\n", string); */
   if (c[0] == ' ') 
   {
         verify = 0;
   } else if (c[0] == '(')
   {
      c[0] = ' ';
   }
   
for (i = 1; i <= MAX && verify == 1; i++){
   
      if (c[i] != '\0') // check the length of the input
      {
      if ((c[i] == '-') || (c[i] == ')'))
      {
         if (((c[i] == '-') && (i == 8)) || ((c[i] == ')') && (i == 4)))
         {
            string[i] = '.';
         }
         else
         {
            verify = 0;
         }
      }

      if (((c[i] >='a') && (c[i] <='z')) || ((c[i] >='A') && (c[i] <='Z')))
      {
         //anytime a letter occurs the string is invalid
         verify = 0;
      } 

      if (c[i] >= 14)
      {
         verify = 0;
      } 
    }  
   }
   
   if (verify) {
      printf("Phone number is: %s\n", string);
   }
   else {
      printf("The phone number is invalid\n");
   }

	return 0;

}
