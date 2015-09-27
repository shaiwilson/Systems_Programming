#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main ()
{
	int c, n1, nw, nc, state;

	state = OUT;

	n1 = nw = nc = 0;
	c = getchar();

	while(c != EOF)
	{
		++nc;
		if (c == '\n')
			++n1;
		if ((c == ' ') || (c == '\n') || (c = '\t'))
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", n1, nw, nc);
}