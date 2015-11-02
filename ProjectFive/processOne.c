/*********************************************************************************
This function takes the valid quote as parameter and do the following steps to insert the quote to the linked list:
1. malloc the struct node to make sure sufficient space is available or reutnr -1
2. malloc the char* quote using the strlen(quote) to make sure sufficient space is available or return -1
3. count the number of words of the quote 
4. assign the count and the quote the the allocated memory
5. use the count to iterate the linked list to find its proper location
6. insert the quote into the identified location.
7. return 1 to indicte the procedure is successful.
**********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    
    int len = strlen(s);
    char* result;
    
    /* allocate node */
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    
    if (new_node == NULL)
        return NULL; // heap exhausted

    //result = (char *quote) malloc(sizeof (char)* (len+1));
    result->quote = (char *) malloc(len * sizeof char);
    strcpy(result->quote, node.quote->quote);
    if(result == NULL)
        return NULL; // heap exhausted
    
    result = word_count(s);
    
    new_node->count  = result;
    new_node->quote = s;
    new_node->next =  NULL;
    
    struct node* current;
    if((*head == NULL) || ((*head)->count >= new_node->count))
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        /* locate the node before insertion */
        current = *head;
        while(current->next != NULL &&
              current->next->count < new_node->count)
        {
            current = current->next;
        }

        new_node->next = current->next;
        current->next = new_node;
    }
    
    return 1; //success
}





