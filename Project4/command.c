#include <stdio.h>
#include <String.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
 int result;
 int c = 0;
 int i;
 int d;
 int subtract, add, multiply;
 subtract = add = multiply = 0;

    while (--argc > 0 && (*++argv)[0] == '-')
    {
    	 c = *++argv[0];
               switch (c) {
               case 'a':
                   add = 1;
                   break;
               case 's':
                   subtract = 1;
                   break;
               case 'm':
                   multiply = 1;
                   break;
               default:
                   printf("find: illegal option\n");
                   argc = 0;
                   break;
               }

           }

        result = atoi(argv[0]);
		for (i=1; i< argc; i++) {
			d = atoi(argv[i]);
			if (add == 1)
				{
				result = result + d;
				}
				else if(subtract == 1)
				{	
				result = result - d;
				}
				else if(multiply == 1)
				{
				result = result * d;
				}
			}

 		printf("result = %d\n", result);

} // end main
