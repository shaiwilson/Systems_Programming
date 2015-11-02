
#include <stdio.h>
#include <stdlib.h>
 
/* Link list entry */
struct entry
{
    char *quote;
    int count;
    struct entry* next;
};
 
struct entry* head = NULL;

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

void sortedInsert(struct entry** head, struct entry* new_entry)
{
    struct entry* current;
    /* Special case for the head end */
    if (*head == NULL || (*head)->count >= new_entry->count)
    {
        new_entry->next = *head;
        *head = new_entry;
    }
    else
    {
        /* Locate the entry before the point of insertion */
        current = *head;
        while (current->next!=NULL &&
               current->next->count < new_entry->count)
        {
            current = current->next;
        }
        new_entry->next = current->next;
        current->next = new_entry;
    }
}
 
/* BELOW FUNCTIONS ARE JUST UTILITY TO TEST sortedInsert */
 
/* A utility function to create a new entry */
struct entry *newentry(int new_count)
{
    /* allocate entry */
    struct entry* new_entry =
        (struct entry*) malloc(sizeof(struct entry));
 
    /* put in the count  */
    new_entry->count  = new_count;
    new_entry->next =  NULL;
 
    return new_entry;
}
 
/* Function to print linked list */
void printList(struct entry *head)
{
    struct entry *temp = head;
    while(temp != NULL)
    {
        printf("%d  ", temp->count);
        temp = temp->next;
    }
}
 
/* Drier program to test count function*/
int main()
{
    /* Start with the empty list */
    
    struct entry *new_entry = newentry(5);
    sortedInsert(&head, new_entry);
    new_entry = newentry(10);
    sortedInsert(&head, new_entry);
    new_entry = newentry(7);
    sortedInsert(&head, new_entry);
    new_entry = newentry(3);
    sortedInsert(&head, new_entry);
    new_entry = newentry(1);
    sortedInsert(&head, new_entry);
    new_entry = newentry(9);
    sortedInsert(&head, new_entry);
    printf("\n Created Linked List\n");
    printList(head);
 
    getchar();
    return 0;
}