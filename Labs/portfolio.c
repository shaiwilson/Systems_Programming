#include <stdio.h>

int main()
{
   char str1[20], str2[30];

   /* I cannot use convention with scanf *shrugs* &str1 */
   printf("Enter name: ");
   scanf("%s", str1);
   printf("Enter the course you are in: ");
   scanf("%s", str2);

   printf("Hi, %s\n", str1);
   printf("You've taken: %s\n", str2);
   
   return(0);
}

/*shellsort */

void shellsort(int v[], int n)
{
	int gap, i, j, temp:

	for (gap = n/2; gap > 0; gap /=2)
		for(i = gap; i < n; i++)
			for(j=i-gap; j>=0 && v[j] > v[j+gap;]; j-=gap)
			{
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
}