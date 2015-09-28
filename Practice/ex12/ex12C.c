#include <stdio.h>

int main()
{
	float a, b, c;
	printf("enter a starting value: \n");
	scanf("%f", &a);

	printf("enter an end value: \n");
	scanf("%f", &b);

	printf("enter an increment value: \n");
	scanf("%f", &c);

	printf("F Degrees to Celius Table\n");

	while (a <= b)
	{

		if ((a > 98.6) && (b < 98.6))
		{
			printf("%6.2f degrees F = %6.2f degrees C\n", 98.6, (98.6 - 32.0) * 5.0 / 9.0);
		}

		printf("%6.2f degrees F = %6.2f degrees C\n", a, (a - 32.0) * 5.0 / 9.0);
		a = a + c;
	}

	return 0;
}