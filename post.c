//c program to evaluate postfix expression
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int stack[MAX];
int top=-1;
void push(int item) 
{
 	if(top==MAX-1)
 		printf("stack overflow\n");
 	else
 		stack[++top]=item;

}

int pop()
{
	if(top==-1)
	{
		printf("stack underflow\n");
	}
	else
	{
		int item=stack[top];
		top--;
		return (item);
	}
}

int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int isOperand(char ch)
{
	if(ch>='0'&&ch<='9')
		return 1;
	else
		return 0;
		
}

int main()
{
	int op1,op2,r,i;
	char postfix[MAX],ch;
	printf("enter the postfix expression:\n");
	scanf("%s",postfix);
	for(i=0;postfix[i];i++)
	{
		ch=postfix[i];
		if(isOperand(ch))
			push(ch-'0');
		else 
		{
			op2=pop();
			op1=pop();
			switch(ch)
			{
				case '+':	r=op1+op2;
							break;
				case '-':	r=op1-op2;
							break;
				case '*':	r=op1*op2;
							break;
				case '/':	r=op1/op2;
							break;
				case '%':	r=op1%op2;
							break;
			}
			push(r);
			
		}
		
	}	
	r=pop();
	if(!isEmpty())
		printf("invalid expression");		
	else
		printf("%d",r);
	return 0;	

}
