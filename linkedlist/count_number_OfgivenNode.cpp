#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct node
{
    int data;
    struct node* next;
};

/* Given a reference (pointer to pointer) to the head
  of a list and an int, push a new node on the front
  of the list. */
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

/* Counts the no. of occurences of a node
   (search_for) in a linked list (head)*/
int count(struct node *head,int num){
	int count=0;
	node *temp=head;
	while(temp){
		if(temp->data==num)
		    count++;
		temp=temp->next;
	}
	return count;
}
/* Drier program to test count function*/
int main()
{
    /* Start with the empty list */
    struct node* head = NULL;

    /* Use push() to construct below list
     1->2->1->3->1  */
    push(&head, 1);
    push(&head, 32);
    push(&head, 1);
    push(&head, 2);
    push(&head, 4);
    push(&head, 1);
    push(&head, 9);
    push(&head, 1);
    push(&head, 1);
    push(&head, 1);
    
    /* Check the count function */
    printf("The integer 1 is appearing for %d times",count(head,1));
    getchar();
}
