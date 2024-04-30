#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
void insert_rear(int);
void delete_front();
void display();

NODE *head=NULL;

int main()
{
	int item,choice;
	while(1)
	{
		printf("\nmenu\n1.insert\n2.delete\n3.diplay\n4.exit\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the element to insert\n ");
					scanf("%d",&item);
					insert_rear(item);
					break;
			case 2: delete_front();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default: printf("invalid choice\n");
						
		}
	
	}
	
}


void insert_rear(int item)
{
	NODE *temp,*cur;
	temp=(NODE* )malloc(sizeof(NODE));
	temp->data=item;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		cur=head;
		while(cur->next!=NULL)
		{
			cur=cur->next;
		}	
		cur->next=temp;
	}
}


void delete_front()
{
	NODE *temp;
	if(head==NULL)
		printf("list is empty");
	else
	{	
		temp=head;
		head=head->next;
		printf("deleted element is %d",temp->data);
		free(temp);
	}	
}


void display()
{
	NODE *cur=head;
	if(head==NULL)
		printf("List is empty\n");
	else
	{
		while(cur!=NULL)
		{
			printf("%4d",cur->data);
			cur=cur->next;
		}
	}	

}		
		
		
		
		
		
		
		
		
		
		
