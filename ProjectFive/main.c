#include "header.h"

/**********************************************************************************************
The main function calls read_quotes function to read a series of quotes.
If the function reads 1 or more quotes, which have been processed successfully,
the print_result function reports the sorted quotes.
*************************************************************************************************/

int main()
{
  if(read_quotes() == 1 ) //success
      print_result();

  return 0;
}
