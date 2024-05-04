#include<stdio.h>
#include<string.h>
#define MAX 20
char stack[MAX];
int top=-1;
void push(char item)
{
	stack[++top]=item;

}
 char pop()
{
	return stack[top--];
}
int isPalindrome(char str[])
{
	int i,n;
	n=strlen(str);
	for(i=0;i<(n/2);i++)
	{
		push(str[i]);
	}
	if(n%2==1)
		i=(n/2)+1;
	else
        	i=n/2;	
	while(str[i]!='\0')
	{
		char item=pop();
		if (item!=str[i])
			return 0;
		i++;	
	}    
        return 1;    
}

int main()
{
	char str[MAX];
	printf("enter the string input: ");
	scanf("%s",str);
	if (isPalindrome(str))	
		printf("the string is palindrome\n");
	else	
        	printf("the sting is not palindrome\n");	
	
	return 0;

}

