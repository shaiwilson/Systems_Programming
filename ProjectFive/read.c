/********************************************************************************
The function reads one quote at a time from the user and does the following validation:
-The length of the quote is less than 100
-The quote does not exist in the linked list
If the quote passes the two valiation, it calls the process_quotes function to insert 
it into a linked list in sorted order.
The loop continues until users entered Q.
The function returns 1 if the process success. 
Otherwise it returns -1 (most likely due to heap exhausted)
****************************************************************/

#include "header.h"
#include "process.c"
#define MAXLEN 100 /* max char of quote */
#define MAXENTRY 50 /* max num of quote */


int read_quotes() 
{
	int length;
	int quoteNo = 0;
	char buffer[MAXLEN];
	length = strlen(buffer);

	do
	{
		printf("Enter your quote or Q to quit.\n");
		fgets(buffer, MAXLEN, stdin);

		if ((buffer[0] != 'Q') && length < MAXLEN && ++quoteNo < MAXENTRY)
		{
			process_quotes(buffer);
			++quoteNo;
		}
		else
		{
			return -1;
			break;
		}

	} while (length < MAXLEN);

  return 1; //success
}

