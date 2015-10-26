#include <ctype.h>
#include <stdio.h>


int main()
{
	int v[] = {4, 65, 2, -31, 0, 99, 2, 83, 782, 1};
	int n = sizeof v / sizeof v[0];
	int i;

	for (i = 0; i < n; i++)
        printf("%d%s", v[i], i == n - 1 ? "\n" : " ");
    shellsort(a, n);
    for (i = 0; i < n; i++)
        printf("%d%s", v[i], i == n - 1 ? "\n" : " ");
    return 0;

}

/* a toi: convert s to integer */
int atoi(char s[])
{

	int i, n, sign;

	for(i = 0; isspace(s[i]); i++); //skip whitespace
	sign = (s[i] == '-') ? -1 : 1;

	if(s[i] == '+' || s[i] == '-') /* skip sign */
		i++;
	for (n = 0; isdigit(s[i]); i++)
		n = 10 * n + (s[i] - '0');
}

/* shell sort : sort v[0] ... v[n-1] */
void shellsort(int v[], int n)
{

		int gap, i, j, temp;

		for(gap = n/2; gap > 0; gap /= 2) // controls size of gap
		{
			for (i = gap; i < n; i++)
			{
				for(j=i-gap; j>= 0 && v[j] > v[j+gap]; j-=gap)
				{
					temp = v[j];
					printf("temp = %d\n", temp );
					printf("v[%d]\n", v[j]);
					printf("v[%d]\n", v[j + gap]);
					v[j] = v[j + gap];

					v[j + gap] = temp
				}
			}
		}
}