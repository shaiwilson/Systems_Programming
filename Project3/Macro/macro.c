#include <stdio.h>

#define swap_m(t, x, y) {t tmp = x; x = y; y = tmp;}
#define swap_f(int x, int y);

/* define in limits.h */
#define INT_MAX 1000;

int main()
{

	char x,y;
    x = 'a';
    y = 'b';

    /* MACRO SWAP */
    printf(" x = %c y = %c\n", x, y);
    swap_m(char, x, y);
    printf(" x = %c y = %c\n", x, y);

    //swap_f(x, y);
    printf(" x = %c y = %c\n", x, y);

}

swap_f(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

