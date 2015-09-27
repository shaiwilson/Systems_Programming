
#include <stdio.h>

int main()
{

char name [50];

printf ("Enter a Name\n");

scanf ( "%[^\n]", name);

printf ("User Name is: %s \n", name);

return 0;

}