#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct node
{
  int data;
  struct node* next;
};

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

int detectloop(struct node *head){
	node *fast,*slow=head;
	fast=head;
	while(slow!=NULL && fast!=NULL && fast!=slow && !fast->next){
		fast=fast->next->next;
		slow=slow->next;
	}
	if(fast==slow && !fast)
		return 1;

	return 0;
}
/* Drier program to test above function*/
int main()
{int v;
  /* Start with the empty list */
  struct node* head = NULL;

  push(&head, 20);
  push(&head, 4);
  push(&head, 15);
  push(&head, 10);

  /* Create a loop for testing */
  //head->next->next->next->next = head;
	v=detectloop(head);

  	if(v)
		printf("Yeah it exists");
	else
		printf("No loop is there.");
	
  getchar();
  return 0;
}
