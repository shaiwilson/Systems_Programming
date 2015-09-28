#include <stdio.h>
/*
* This program takes input from the user
* Then iterates through each character
* Finally, printing out each index
* Author: Shai
*/

#define MAXOP 100

int main()
{

char input [MAXOP]; /* user input string */
int i; /* counter */
char *c;

c = input;

/* save user input */
printf ("Enter a string of characters: \n");
scanf ( "%[^\n]", input);
printf ("The string you entered is: %s\n", input);

/* loop until NULL is found */
for (i = 0; c[i]; i++)
{
	printf("%c\n",c[i]);
}
	
return 0;

}