/* Character Arrays
* while (there's another line)
* 	if (it's longer han the previous longest
*		(save it)
*		(save its length)
*	print longest line
*
*/

#include <stdio.h>
#define MAXLINE 1000 /* max input line length */

/* declare functions */
int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */

int main()
{
	int len;
	int max,
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max) 
		{
			max = len;
			copy(longest, line);
		}
		if (max > 0) /* there was a new line */
		{
			printf("%s", longest);
			return 0;
		}

		/* get line: read a line into s, return length */
		int getline(chars[], int lim)
		{
			int c, i;

			for (i = 0; i < lim-1 && (c = getchar()) != EOF && c!= '\n'; ++i)
				s[i] = c;
			if (c == '\n')
			{
				s[i] = c;
				++i;
			}

			s[i] = '\0';
			return i;
		}

		void copy(char to[], char from[])
		{

			int i;

			i = 0;
			while ((to[i] = from[i]) != '\0')
				++i;


		}
}
