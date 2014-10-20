#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct node
{
    int data;
    struct node* next;
};

/* Function to reverse the linked list */
struct node *reverselist(struct node *head){
	if(head==NULL)
	    return NULL;

	node *first_part,*second_part;

	first_part=head;
	if(!head->next)
	    return head;

	second_part=first_part->next;
	second_part=reverselist(second_part);

	second_part->next=first_part;
	first_part->next=NULL;

	head=second_part;

	return head;
}

/* Function to push a node */
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

/* Function to print linked list */
void printList(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}

/* Drier program to test above function*/
int main()
{
    /* Start with the empty list */
    struct node* head = NULL;

     push(&head, 20);
     push(&head, 4);
     push(&head, 15);
     push(&head, 85);
     push(&head, 812);
     
     printList(head);
     struct node *node1=reverselist(head);
     printf("\n Reversed Linked list \n");
     printList(node1);
     getchar();
}
