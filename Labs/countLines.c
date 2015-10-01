#include <stdio.h>

/* count lines in input */

int main()

{
	int c;
	int n1;
	int n2;
	int n3;
	n1 = 0; //count new lines
	n2 = 0; //count tabs
	n3 = 0; //count blanks

	while((c == getchar()) != EOF)
		if (c == '\n')
			++n1;
		else if(c == '\t')
			++n2;
		else if(c == ' ')
			++n3;

	printf("New lines %d\n", n1);
	printf("Tabs %d\n", n2);
	printf("Blanks %d\n", n3);
}