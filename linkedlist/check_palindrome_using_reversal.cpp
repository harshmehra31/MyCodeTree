#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct node
{
    int data;
    struct node* next;
};

/* Function to reverse the linked list */
struct node *reverse(struct node* headr)
{
 node *tail,*prev=NULL;
 tail=headr;

 while(tail->next){
tail=tail->next;
 }
 while(headr!=tail){
		tail->next=headr;
		headr=headr->next;
		tail->next->next=prev;
		prev=tail->next;
 }
 return headr;
}
bool checkPalindromeUsingReversal(struct node *head,struct node *reversenode){

	//if(head)
	//return 1;
	if(head){
    if(head->data==reversenode->data && head->next)
		return (1 && checkPalindromeUsingReversal(head->next,reversenode->next));
	else
		return 0;
		}
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
	int temp_data;
     push(&head, 1);
     push(&head, 2);
     push(&head, 3);
     push(&head, 2);
	 push(&head, 1);
     //push(&head, 20);
     //push(&head, 23);
     printList(head);
     struct node *node1=reverse(head);
     printf("\n Reversed Linked list \n");
     printList(node1);
     
     printf("\nThe list is a palindrome(1=yes/0=No) %d",checkPalindromeUsingReversal(head,node1));
     getchar();
}
