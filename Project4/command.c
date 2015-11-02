#include <stdio.h>
#include <String.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
 int result = 0;
 int i;
 int subtract, add, multiply;
 subtract = add = multiply = 0;

 /* check for empty arguments */
 if (argc == 1) 
  return 0;

  /*
  * Version 2
  * Flag can be in any position
  */

  for(i = 0; i < argc; i++)
    {
      if (strcmp(argv[i], "-a") == 0)
      {
        add = 1;
      }
      if (strcmp(argv[i], "-s") == 0)
      {
        subtract = 1;
      }
      if (strcmp(argv[i], "-m") == 0)
      {
        multiply = 1;
      }
      
    }

    printf("The result is: ");

    for (i = 1; i < argc; i++)
    {
      if(argv[i][0] !='-')
      {
        if(subtract == 1)
        {
          result = (result - atoi(argv[i]));
        }
        if(add == 1)
        {
          result = (result + atoi(argv[i]));
        }
        if(multiply == 1)
        {
          result = (result * atoi(argv[i]));
        }

      }
    }

      printf("%d\n", result);

  return 0;

} // end main


/*
*   Version 1
*   Flag can only be in position argv[1]
*
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

    */

