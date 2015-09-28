#include <stdio.h>

void print_array(char a[])
{
    if(a[0] == '\0')
          return;
      else
            {
                    printf("%c ", a[0]);
                          print_array(a++);
                              }
}

int main(void)
{
    char a[] = "Hello";
      print_array(a);
        return 0;
}
