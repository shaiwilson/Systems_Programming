#include <stdio.h>
#include <ctype.h>
#include <String.h>
#include <stdlib.h>
#define LENGTH 13
int main() {

  int n; // month
  char line[50];
  int day;
  int year; 
  char monthname[10]; 

  printf("Enter date: \n");

  if(fgets(line, 50, stdin) != NULL)
  {
    if((line[1] == '-' && line[3] == '-') || (line[1] == '-' && line[4] == '-') || (line[2] == '-' && line[4] == '-') || (line[2] == '-' && line[5] == '-' )) 
    {
      sscanf(line, "%d-%d-%d", &n, &day, &year);  
    }
    else if ((line[1] == '/' && line[3] == '/') || (line[1] == '/' && line[4] == '/') || (line[2] == '/' && line[4] == '/') || (line[2] == '/' && line[5] == '/') ) 
    {
      sscanf(line, "%d/%d/%d", &n, &day, &year);
    }
    else{
        printf("Invalid form\n");
        return 1;
    }

    switch(n)
   {
  case 1:
         strcpy(monthname, "January");
         break;
  case 2:
         strcpy(monthname, "February");
         break;
  case 3:
         strcpy(monthname, "March");
         break;
  case 4:
         strcpy(monthname, "April");
         break;
  case 5:
         strcpy(monthname, "May");
         break;
  case 6:
         strcpy(monthname, "June");
         break;
  case 7:
         strcpy(monthname, "July");
         break;
  case 8:
         strcpy(monthname, "August");
         break;
  case 9:
         strcpy(monthname, "September");
         break;
  case 10:
         strcpy(monthname, "October");
         break;
  case 11:
         strcpy(monthname, "November");
         break;
  case 12:
         strcpy(monthname, "December");
         break;
      }
  }  


      printf("%s %d, %d\n", monthname, day, year);
  return 0;
}
