//c program to implement circular queues 
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int que[MAX];
int front=-1;
int rear=-1;
 
void insert(int item)
{
	if((rear+1)%MAX==front)
		printf("Queue is full\n");
	else 
	{
		rear=(rear+1)%MAX;
		que[rear]=item;
		if(front==-1)
			front=0;		
	}		

}

void delete()
{
	if(front==-1)
		printf("Queue is empty\n");
	else
	{
		printf("Deleted element:%d",que[front]);
		if(front==rear)
			front=rear=-1;
		else
			front=(front+1)%MAX;
	}

}

void display()
{
	int i;
	if(front==-1)
		printf("Queue is empty");
	else
	{	
		printf("Queue content");
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
				printf("%4d",que[i]);
		}
		else
		{
			for(i=front;i<=MAX-1;i++)
				printf("%4d",que[i]);
			for(i=0;i<=rear;i++)
				printf("%4d",que[i]);
		}					
	
	
	}

}



int main()
{
	int que[MAX];
	int choice,item;
	while(1)
	{
		printf("\n****MENU****\n");
		printf("1.insert\n2.delete\n3.display\n4.exit\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{ 
			case 1: printf("Enter the element:\n");
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
		
		

