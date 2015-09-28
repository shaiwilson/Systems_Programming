#include <stdio.h>

void ascending(int n);
int min(int a[], int start, int end);
int mul(int a, int b);
int count(char s[], char c);

int main()
{

	/* TESTING */
	int a[] = { 1, 2, 6, 7, 5, 4, 7, 2, 7, 5 }; 
	printf("%d \n", min(a, 2, 8));
	return 0;

}

void ascending(int n)
{
	if (n > 1)
        ascending(n - 1);
    printf ("%d", n);
}

int mul(int a, int b)
{
	int result;
	if (b == 1) 
	{
		result = a; // base case
	}
	else
	{
		result = a + mul(a, b - 1);
	}
	return result;
}

int min(int a[], int start, int end)
{

	if (start < end) {
		if (a[start] < a[end])
		{
			end --;
			return min(a, start, end);
		}
		else
		{
			start++;
			return min(a, start, end);
		}
	}

	return a[end];
}


int count(char s[], char c)
{
	
   if(s[0] == '\0'){
   		return 0;
   	}
   	else if (s[0] == c)
   	{
   		return 1 + count(++s, c);
   	}	
   	else
   	{
		return count(++s, c);
   	}	
}




