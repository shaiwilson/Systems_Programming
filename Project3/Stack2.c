#include <stdio.h>


#define MAXOP 100 /* max size of line */
#define MAXVAL 100 /* max depth of value stack */

/* DECLARE FUNCTIONS */
int gettop(char []);
void push(char);
char pop(void);
int match(char, char);

int sp = 0; /* stores value of next free stack position */
double val[MAXVAL];

int main()
{

	char input [MAXOP]; /* user input string */
	int i; /* counter */
	char *c; /* pointer to input string */
	char out; /* looks for second symbol, temp holding */
	int valid = 1; /* boolean for matches */

	c = input;

	/*
	* unused values
	* 
	* int val[MAXVAL]; value stack 
	* save user input */


	printf ("Enter a string of characters: \n");
	scanf ( "%[^\n]", input);
	printf ("The string you entered is: %s\n", input);

	/* loop until NULL is found */
	for (i = 0; c[i]; i++)
	{
		if (c[i] == '(' || c[i] == '[' || c[i] == '{' || c[i] == '<')
			{ 
				
				//push element to stack
				push(c[i]);

				/* TESTING 
				*printf("we found a left bracket!\n");
				*printf("%c\n",c[i]);
				*/
			}
		else if (c[i] == ')' || c[i] == ']' || c[i] == '}' || c[i] == '>')
		{
				// TODO
				// pop element from stack
				// if there is a match
				// print it matched
				out = pop(); // hold onto pop value
				valid = match(out, c[i]);
				if (!valid) 
				{
					printf("Syntax error\n");
					return 1; // end program
				}
				else 
				{
					printf("There is a match\n");
					printf("%c %c\n",out, c[i]);
				}

		}	
		else 
		{
			// skip over a string
		}
	}
	
	return 0;

}



/* FUNCTIONS */

/* PUSH FUNCTION : push f onto value stack */
void push(char f)
 {
	 if (sp < MAXVAL)
	 	val[sp++] = f;
	 else
	 	printf("error: stack full, can't push %c\n", f);
 }


/* POP FUNCTION : pop and return top value from stack */
char pop(void)
{
	if (sp > 0)
		return val[--sp];
	else 
	{
		printf("error: stack empty\n");
		return 0;
	}
}


int match(char left, char right)
{
	if (left == '{' && right == '}') 
	{
		return 1;
	}
	else if (left == '(' && right == ')')
	{
		return 1;
	}
	else if (left == '[' && right == ']')
	{
		return 1;
	}
	else if(left == '<' && right == '>')
	{
		return 1;
	}
	else
		return 0;
}












