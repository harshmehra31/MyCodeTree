#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct node
{
  int data;
  struct node* next;
};

/* Function to get the nth node from the last of a linked list*/
void printNthFromLast(struct node *head, int n)
{int i;
	node *temp=head,*temp2=head;
	for(i=1;i<n;i++)
	    temp=temp->next;
	while(temp->next){
        temp=temp->next;
        temp2=temp2->next;
	}
	printf("\nNth node value from end is %d",temp2->data);
}

void push(struct node** head_ref, int new_data)
{
  /* allocate node */
  struct node* new_node =
          (struct node*) malloc(sizeof(struct node));

  /* put in the data  */
  new_node->data  = new_data;

  /* link the old list off the new node */
  new_node->next = (*head_ref);

  /* move the head to point to the new node */
  (*head_ref)    = new_node;
}

/* Drier program to test above function*/
int main()
{
  /* Start with the empty list */
  struct node* head = NULL;
  push(&head, 20);
  push(&head, 4);
  push(&head, 15);
  push(&head, 33);
  push(&head, 213);
  push(&head, 90);
  printNthFromLast(head, 4);
  getchar();
}
