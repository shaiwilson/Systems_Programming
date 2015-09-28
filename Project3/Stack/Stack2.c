#include <stdio.h>


#define MAXOP 100 /* max size of line */
#define MAXVAL 100 /* max depth of value stack */

/* DECLARE FUNCTIONS */
int gettop(char []);
void push(char);
char pop(void);
int match(char, char);

int sp = 0; /* stores value of next free stack position */
double val[MAXVAL]; /* stores max value of stack */

int main()
{

	char input [MAXOP]; /* user input string */
	int i; /* counter */
	char *c; /* pointer to input string */
	char out; /* looks for second symbol, temp holding */
	int valid = 1; /* boolean for matches */

	c = input;

	printf ("Enter your input that contains parenthesis or Q to quit: \n");
	scanf ( "%[^\n]", input);
	/* printf ("The string you entered is: %s\n", input); */

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
				
				// pop element from stack
				out = pop(); // hold onto pop value
				valid = match(out, c[i]);
				if (!valid) 
				{
					valid = 0; 
				}
				else 
					valid = 1;
		}	
		else; 
	}
	
	if (valid)
	{
		printf("The input is balanced\n");
	}
	else
	{
		printf("The input is not balanced\n");
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

