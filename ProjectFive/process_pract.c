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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Link list node */
struct node{
  char *quote;
  int count;
  struct node *next;
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

struct node *newNode(int value)
{
    /* allocate node */
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));
 

    char *str1 = malloc(value * sizeof(char));
       /* put in the data  */
       new_node->count  = value;
       //strcpy(new_node->quote, str1);
       new_node->next =  NULL;

    return new_node;
}

void printList(struct node *head)
{
  struct node *temp = head;
  while(temp != NULL)
  {
    printf("%d\n", temp->count);
    temp = temp->next;
  }
}


void sortedInsert(struct node** head, struct node* new_node)
{
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
    
}

/*

int main(){
   /* Start with the empty list 
    struct node* head = NULL;
    struct node *new_node = newNode(5);
    sortedInsert(&head, new_node);
    new_node = newNode(10);
    sortedInsert(&head, new_node);
    new_node = newNode(7);
    sortedInsert(&head, new_node);
    new_node = newNode(3);
    sortedInsert(&head, new_node);
    new_node = newNode(1);
    sortedInsert(&head, new_node);
    new_node = newNode(9);
    sortedInsert(&head, new_node);
    printf("\n Created Linked List\n");
    printList(head);

    return 0;
    
}
*/