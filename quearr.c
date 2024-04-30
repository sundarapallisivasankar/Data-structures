//c program to implement queues using arrays//
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int que[MAX],front=-1,rear=-1;
void insert(int);
void delete();
void display();
  
int main()
{
	int choice,item;
	while(1)
	{
		printf("\nmenu\n1.insert\n2.delete\n3.display\n4.exit\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the element to insert");
					scanf("%d",&item);
					insert(item);
					break;
			case 2: delete();
					break;
			case 3: display();
					break;
			case 4: exit(0);
					break;
			default:printf("invalid choice");										
		}
		
	}
} 

void insert(int item)
{
	if(rear==MAX-1)
		printf("queue is overflow\n");
	else
	{
		que[++rear]=item;
		if(front==-1)	
			front++;
	}
		
}

void delete()
{
	if(front==-1)
		printf("queue is underflow\n");
	else
	{
		printf("deleted element is %d",que[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}			
	}

}

void display()
{	
	int i;
	if(rear==-1)
		printf("queue is empty\n");
	else
	{
		printf("list content\n");
		for(i=front;i<=rear;i++)
		{
			printf("%4d",que[i]);
			
		}
	}
	
}
			
			
			
			
			
			
			
			
			
			
			
			
		
