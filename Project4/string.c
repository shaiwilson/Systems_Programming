#include <stdio.h>
#include <String.h>
#include <stdlib.h>

char *reverse(char *s);
char *twice(const char *s);
char *drop(char* s, char c);

int main()
{
	char s[] = "quick";
	printf("%s\n", twice(s));
	char u[] = "jumps over";
	printf("%s\n", reverse(u));
	char v[] = "lazy dog";
	printf("%s\n", drop(v, 'o'));

}

/*
*	This function returns a string that contains two copies of the input string
*/ 

char *twice(const char *s) {
	char *result;
	result = malloc(2*strlen(s)*sizeof(char));
	int index = 0;
	int i;

	if(result == NULL)
		return NULL; // heap exausted

	for (i=0; i<strlen(s); i++) {
		result[index] = s[i];
		index++;
	}
	for (i=0; i<strlen(s); i++) {
		result[index] = s[i];
		index++;
	}

	free(result);
	return result;
} // end twice

/*
*	This function returns the reverse of the input string
*/

char *reverse(char *string) 
{
   int length, c;
   char *begin, *end, temp;
   char *result;
   result = malloc(2*strlen(string)*sizeof(char));
 
   length = strlen(string);
   begin  = string;
   end    = string;

   if(result == NULL)
		return NULL; // heap exausted
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
   
   return string;
} // end reverse

char *drop(char *s, char c) {
	char *result;
	result = malloc(2*strlen(s)*sizeof(char));
    char *source = s;
    char *dest = s;

    if(result == NULL) 
    	return NULL; // heap exhausted

    while(*source) {
        if(*source == c) {
            source++;
            result++;
        } else {
            *dest++ = *source++;
        }
    }

    *dest = 0;
    result = s;
    return result;
}



