#include <stdio.h>

void asterick(int);
void half_pyramid(int);
void triangle(char);

int main()
{
	int rows;
	//char input;
	printf("Enter the number of rows: \n");
	scanf("%d", &rows);
	//printf("Enter uppercase character: \n");
	//scanf("%c", &input);
	asterick(rows);
	half_pyramid(rows);
	//triangle(input);
	

	return 0;
}

void asterick(rows)
{
	int i, j;
	for(i=1; i<=rows; ++i)
	{
		for(j=1; j<=i;++j)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void half_pyramid(rows)
{
	int i, j;
	for(i = 1; i <= rows; ++i)
	{
		for(j=1; j<=i;++j)
		{
			printf("%d", j);
		}

		printf("\n");
	}
}

/*
void triangle(input)
{
	int i, j;
	char temp = 'A';
	for (i=1; i<(input-'A' + 1); ++i)
	{
		for(j=1; j<=i;++j)
		{
			printf("%c", temp);
		}

		++temp;
		printf("\n");
	}

}
*/
