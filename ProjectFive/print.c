/******************************************************************
This funciton prints the quotes stored in linked list.
Once it is done, it frees the linked list memory.
*/

#include "header.h"

void free_mem(struct node* a)
{
  if(a == NULL) 
    return;
  else
    {
      free_mem(a->next);
      free(a->next);
    }
  return;
}

void print_result()
{
  struct node *temp = head;
  while(temp != NULL)
  {
    printf("%s\n", temp->quote);
    temp = temp->next;
  }
  free_mem(head);
  printf("\n");
     
}
