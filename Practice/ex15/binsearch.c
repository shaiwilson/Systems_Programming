/*	Author: Shai Wilson
*	
*
*/

#include <string.h>

enum months {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
/* FEB is 2, MAR is 3, etc. */






/* binary search: find x in v[0] <= v[1] .. <= v[n-1] */

int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else /* found match */
			return mid;
	}

	return -1; /* no match */
}


/* increment and decrement operators */
void squeeze(char s[], char c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i]; // each time a non-c occurs it is copied into the current j position
		s[j] = '\0';
}

/* post fix operators
*	if (c == '\n')
*	{
*		s[i] = c;
*		i++;
*	}
*	
*	if (c == '\n')
*		s[i++] == c;
*/

/* strcat: concatenate t to end of s; s must be big enough */
void strcat(char [], char t[])
{
	int i, j;

	i = j = 0;
	while(s[i] != '\0') /* find end os s */
		i++;
	while((s[i++] = t[j++]) != '\0'); /* copy t */
}

/* exercise 2-4; write an version of squeeze(s1, s2) that deletes each character in s1 that matches any character in string s2
*	exercise 2-5; write the function any(s1, s2) which returns the first location in the string s1 where any character from s2 occurs
*	return -1 if s1 contains no characters from s2
*/

/* bitcount: count 1 bits in x */
int bitcount(unsigned x)
{
	int b;

	for(b = 0; x != 0; x >>= 1)
		if (x & 01)
			b++;
	return b;
}

/*
*	if (a > b)
*		z = a;
*	else
*		z = b;
*
*	z = (a > b) ? a : b; /* z = max(a, b) 
*
*/

/* this loop prints n elements of an array, 10 per line
* with each column seperated by one blank, 
* and with each line (including the last) terminiated by a new line
*/

for (i = 0l i < n; i++)
	printf("%6d%c\n", a[i], (i % 10 == 9 || i == n-1) ? '\n' : ' ' );

printf("You have %d items%s.\n", n, n == 1 ? " " : "s" );

/*
*	char: a gingle byte, capabl of holding one character in the local character set
*	int: an integer, typically reflecting the natural size of integers on the host machine
*	float: single - precision floating point
*	double: double - precision folating pint
*
*	QUALIFIERS
*	short in sh; --> 16 bits
*	long int counter; --> 32 bits
* 	chars --> 8 bits
*	unsigned: always positive or zero, obey the laws of arithmetic module 2^n where n is the number of bits in the type
*	a leading 0 on an integer constant means octal
* 	a leading 0x or OX means hexadecimal
* 	character constant: an integer written as one character within single quotes, such a 'x'
* 	the value of a character constant is the numeric value of the character in the machine's character set
*/	

/* strlen: return length of s */
int strlen(char s[])
{
	int i;

	i = 0;
	while (s[i] != '\0')
		++i;
	return i;
}

/* strlen declared in standard header <string.h> */

/*	enumeration constat 
*	enum boolean { NO, YES }
*	the first name in an enum has value 0, the next 1
*/	

/*
*	Whether to use a while or for loop
*	the for loop is preferable when there is a simple initialization and increment
*	since it keeps the loop control statements close together and visible at the top of the loop
*/

/* reverse: reverse string s in place */
void reverse(char s[])
{
	int c, i, j;

	for(i = 0, j = strlen(s) - 1; i < jl i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

/* trim: remove trailing blanks, tabs, newlines */
int trim(char s[])
{
	int n;

	for (n = strlen(s) - 1; n >= 0; n--)
	{
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;
	}

	s[n+1] = '\0';
	return n;
}

/* Goto and labels 
*
*
*/

/* version 1 */
for (i = 0; i < n; i++)
{
	for (j = 0; j < m; j++)
	{
		if(a[i] == b[j])
			goto found;
	}
}
/* didn't find any common elements */

found:
	/* go to one: a[i] == b[j] */

found = 0;
for (i = 0; i < n && !found; i++)
{
	for (j = 0; j < m && !found; j++)
	{
		if(a[i] == b[j])
		{
			found = 1;
		}
	}
}

if (found)
	/* got one */
else
	/*didn't find any commone elements



























