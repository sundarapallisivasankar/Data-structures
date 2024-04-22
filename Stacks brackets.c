#include<stdio.h>
#include<stdlib.h>
#define MAX 20
char stack[MAX];
int top=-1;
void push(char item)
{
	stack[++top]=item;	
}

char pop()
{
	char ch;
	if(top==-1){
		printf("not balanced");
		exit(0);
	}	
	ch=stack[top];
	top--;
	return ch; 
}

int isMatching(char ch1,char ch2)
{
	if(ch1=='('&&ch2==')')
		return 1;
    else if(ch1=='['&&ch2==']')
		return 1;	
	else if(ch1=='{'&&ch2=='}')
		return 1;
	else
		return 0;	
}

int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int main()
{
	char exp[MAX],item;
	int i;
	printf("Enter the input expression:\n");
	scanf("%s",exp);
	for(i=0;exp[i]!='\0';i++)
	{
		char ch=exp[i];
		if (ch=='('||ch=='['||ch=='{')
			push(ch);
		else
		{
			item=pop();
			if (!isMatching(item,ch))
			{
				printf("not balanced");
				exit(0);
			}	
            		
		}	
			
	}
    if(isEmpty())
    	printf(" Balanced");
    else 
  	printf("Not balanced");	
    return 0











