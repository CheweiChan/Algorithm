#include"stdio.h"
#include"stdlib.h"

struct Node{
	int data;
	int idx;
	struct Node *next;	
};
typedef struct Node Node;

Node* GetNode(void)
{
	Node *node = (Node*)malloc(sizeof(Node));
	if(node == NULL)
		return NULL;
	return node;	
}

Node* FindNode(Node* node,int idx)
{
    while( node->next != NULL && node->idx != idx )
    {
        node = node->next;
    }
    return node;	
}

Node* DeleteNode(Node *head,Node *node)
{
	Node *TempNode =head;
	if(node == head)
	{
		head = head->next;
	}
	else
	{
		while(TempNode->next != node)
			TempNode = TempNode->next;
		if(node->next == NULL)
			TempNode->next = NULL;
		else
			TempNode->next = node->next;
	}
	free(node);
	return head;
}

/*insert new node after (Node *node)*/
Node* InsertNode(Node *head,Node *node,int idx,int data)
{
	Node *NewNode =GetNode();
	NewNode->idx= idx;
	NewNode->data =data;
	if(node == NULL)
	{
		NewNode->next= head;
		head = NewNode;
	}
	else if(node->next == NULL)
	{
		node->next = NewNode;
	}
	else
	{
		NewNode->next = node->next;
		node->next=NewNode;
	}
	return head;
}

void PrintList(Node *head,int len)
{
	Node *current = head;
	int i;
    for(i=0;i<len;i++)
	{
		printf("\n%d:%d",current->idx,current->data);
		current= current->next;
		
	}	
}


int main(void)
{	
	int i=0;
	printf("\nlink list");
	Node *current;
	Node *head;
	head=GetNode();
	head->data=123;
	head->idx=0;
	current = head;
	for(i=1;i<10;i++)
	{
		current->next = GetNode();
		current= current->next;
		current->idx=i;
		current->data= i*100;
	}	
	PrintList(head,10);

	current=FindNode(head,5);
	printf("\nFind index5=%d",current->data);
	
	printf("\n---delete index 5");
	DeleteNode(head,current);
	PrintList(head,9);
	
	printf("\n---insert index 15 after idx 7");
	current=FindNode(head,7);
	InsertNode(head,current,15,456);
	PrintList(head,10);
	return 0;
}
