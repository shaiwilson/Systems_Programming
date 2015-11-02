#include <stdio.h>
#include <String.h>
#include <stdlib.h>

char *reverse(const char *s);
char *twice(const char *s);
char *drop(const char* s, char c);

/* -------------------------------------------- */

int main(void)
{
	char s[] = "quick";
  char* resultTwice = twice(s);
  if(resultTwice != NULL)
  {
    printf("%s\n", resultTwice);
    free(resultTwice);
  }

	char u[] = "jumps over";
  char* resultReverse = reverse(u);
  if(resultReverse != NULL)
  {
    printf("%s\n", resultReverse);
    free(resultReverse);
  }
	
	char v[] = "lazy dog";
  char* resultDrop = drop(v, 'o');
  if(resultDrop != NULL)
  {
    printf("%s\n", resultDrop);
    free(resultDrop);
  }
	
  return 0;

} /* end main() */

/*
*	This function returns a string that contains two copies of the input string
*/ 

char *twice(const char *s) {
  int len = strlen(s);

	char *result;
	result = (char *) malloc(sizeof(char)* (len*2+1));
	int i;

	if(result == NULL)
		return NULL; // heap exausted

	for (i=0; i< len; i++) {
		  *(result+i) = *(s+i);
      *(result+len+i) = *(s+i);
	}

	*(result+len+i)='\0';
	return result;

} /* end twice() */

/*
*	This function returns the reverse of the input string
*/

char *reverse(const char *s) 
{

   int len = strlen(s);

   char *result;
   result = (char *) malloc(sizeof (char)* (len+1));

   if(result == NULL)
		return NULL; // heap exausted
 
   int i;
   for (i = 0; i < len; i++)
   {
        *(result+i) = *(s+len-1-i);
   }

   *(result+i)='\0';
  return result;

} /* end reverse() */


char *drop(const char *s, char c) {

  int len = 0;
  for(int i = 0; *(s+i) != '\0'; i++)
    if(*(s+i) != 'c')
      len++;

	char *result;
	result = (char *) malloc(sizeof (char)* (len+1));

  if(result == NULL) 
      return NULL; // heap exhausted

  char* a = result;
  while (*s != '\0')
  {
    if(*s == c)
      s++;
    else
    {
      *a = *s;
      a++;
      s++;

    }
  }

  *(result + len) = '\0';
  return result;
  
} /* end drop() */



