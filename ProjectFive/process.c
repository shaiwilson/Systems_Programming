/*********************************************************************************
This function takes the valid quote as parameter and do the following steps to insert the quote to the linked list:
1. malloc the struct node to make sure sufficient space is available or return -1
2. malloc the char* quote using the strlen(quote) to make sure sufficient space is available or return -1
3. count the number of words of the quote 
4. assign the count and the quote the the allocated memory
5. use the count to iterate the linked list to find its proper location
6. insert the quote into the identified location.
7. return 1 to indicte the procedure is successful.
**********************************************************************************/

#include "header.h"
 
/* Link list node */
struct node
{ 
    char *quote;
    int count;
    struct node* next;
};

struct node* head = NULL; 
 
int word_count(char* s)
{
    int count = 0;
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int process_quotes(char* s)
{
    int len=strlen(s);
    struct node* newNode = (struct node*) malloc(sizeof(struct node)); //to point to new node

    int value = word_count(s);

    //allocate new node and store count/quote there
    newNode->quote = (char *) malloc(sizeof (char)* (len+1));
    newNode->count = (int)malloc(sizeof(int));   

    strcpy(newNode->quote, s);
    newNode->count  = value;
    newNode->next = NULL;

   struct node* current = NULL; //to move through the list
    if((head == NULL) || ((*head).count >= newNode->count))
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        /* locate the node before insertion */
        current = head;
        while(current->next != NULL &&
              current->next->count < newNode->count)
        {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;
    }
    
    return 1; //success

}
 
