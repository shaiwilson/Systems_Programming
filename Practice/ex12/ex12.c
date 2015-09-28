#include <stdio.h>

int main()
{
	int a, b, c;
	printf("enter a starting value: \n");
	scanf("%d", &a);

	printf("enter an end value: \n");
	scanf("%d", &b);

	printf("enter an increment value: \n");
	scanf("%d", &c);

	printf("F Degrees to Celius Table\n");

	while (a <= b)
	{
		printf("%4d degrees F = %4d degrees C\n", a, (a - 32) * 5 / 9);
		a = a + c;
	}

	return 0;
}