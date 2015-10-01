#include<stdio.h>
/************************************************************
This function take one integer argument n and 
prints the numbers 1 · · · n in ascending order.
 */

void ascending(int);
void descending(int);
int gcd(int, int);

int main()
{

/*
	printf("numbers in descending order:\n");
	descending(5);
	printf("numbers in ascending order:\n");
	ascending(5);
	printf("gratest commond divisor\n");
	int result = gcd(12, 64);
	printf("%d\n", result);
*/

	int row = 3;
	int col = 3;
	int i, j;
	int value = 1;
	int table[3][3];

	for (i=0; i < row; i++)
		for(j = 0; j < col; j++)
			table[i][j] = value++;
			printf("%d %d\n", row[i], col[j] );
	return 0;
}


void ascending(int n)
{

  if(n == 1)    //base case
    printf("%d\n",1);
  else
    {
      ascending(n-1);
      printf("%d\n",n);
    }
}

void descending(int n)
{
	if (n > 0)
	{
		printf("%d\n",n);
		descending(n - 1);
	} //base case
}

int gcd(int a, int b)
{
	if(b ==0)
		return a;
	else
		return gcd(b, a%b);
}