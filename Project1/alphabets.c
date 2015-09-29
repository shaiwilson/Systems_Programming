// Alphabets Counting
// Counts the number of occurences of the 26 alpha

#include <stdio.h>
#include <string.h>

#define N 100

int main()
{
   char string[N]; // maximum length 
   int c = 0, count[26] = {0};
 
   printf("Enter a string: \n");
   scanf ("%[^\n]", string);
 
   while (string[c] != '\0' && string[c] != '\n')
   {
 
      if (string[c]>='a'&& string[c]<='z') 
         count[string[c]-'a']++;
      else if ((string[c]>='A' && string[c]<='Z'))
      {
         count[string[c]-'A']++;
      }
      c++;
   }
 
   for (c = 0; c < 26; c++)
   {
      printf("%d",count[c]);
   }
   printf("\n");
   return 0;
}