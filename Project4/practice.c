#include <stdio.h>
   #include <string.h>
   #define MAXLINE 1000

   int getline(char *line, int max);

   /* find: print lines that match pattern from 1st arg */
   main(int argc, char *argv[])
   {
       char line[MAXLINE];
       long lineno = 0;
       int c, except = 0, number = 0, found = 0;

       while (--argc > 0 && (*++argv)[0] == '-')
           while (c = *++argv[0])
               switch (c) {
               case '-a':
                   add = 1;
                   break;
               case '-s':
                   subtract = 1;
                   break;
               default:
                   printf("find: illegal option %c\n", c);
                   argc = 0;
                   found = -1;
                   break;
               }
       if (argc != 1)
           printf("Usage: find -x -n pattern\n");
       else
           while (getline(line, MAXLINE) > 0) {
               lineno++;
               if ((strstr(line, *argv) != NULL) != except) {
                   if (number)
                       printf("%ld:", lineno);
                   printf("%s", line);
                   found++;
               }
           }
       return found;
   }

   /*

 for (i = 2; i < argc; i++)
 {
  if (strcmp(argv[1], "-a") == 0) {
          add = 1;
          result += atoi(argv[i]);
       } else if (strcmp(argv[1], "-s") == 0) {
          subtract = 1;
          result = result - (atoi(argv[i]));
       } else if (strcmp(argv[1], "-m") == 0) {
          result = 10 * (atoi(argv[i]));
          multiply = 1;
       } else {
          printf("Error: unknown flag\n");
       }


  if (add)
  {
    
    printf("%d\n", result);
  }
  else if(subtract)
  {
    printf("%d\n", result);
  }
  else if(multiply)
  {
    
    printf("%d\n", result);
  }
 }
*/