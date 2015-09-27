#include <stdio.h>


#define MAXOP 100 /* max size of line */
#define MAXVAL 100 /* max depth of value stack */


int main()
{

char input [MAXOP]; /* user input string */
int i; /* counter */
char *c;

c = input;

/*
* unused values
* 
* int val[MAXVAL]; value stack 
  char out; // looks for second symbol, temp holding */

/* save user input */
printf ("Enter a string of characters: \n");
scanf ( "%[^\n]", input);
printf ("The string you entered is: %s\n", input);

/* loop until NULL is found */
for (i = 0; c[i]; i++)
{
	if (c[i] == '(' || c[i] == '[' || c[i] == '{' || c[i] == '<')
		{ 
			//push element to stack
			//push(atof(s));


			/* TESTING 
			*printf("we found a left bracket!\n");
			*printf("%c\n",c[i]);
			*/
		}
	else if (c[i] == ')' || c[i] == ']' || c[i] == '}' || c[i] == '>')
	{
			
			/* TESTING 
			*printf("we found a right bracket!\n");
			*printf("%c\n",c[i]);
			*/
	}	
}
	

return 0;

}