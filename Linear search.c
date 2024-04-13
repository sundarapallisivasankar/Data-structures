#include<stdio.h>
int search(int *,int,int);
int main()
{
    int a[20],n,i,key,pos;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    
    }
    printf("enter the key element");
    scanf("%d",&key);
    pos=search(a,n,key);
    if(pos==0)
        printf("search is unsuccessful");
    else
        printf("Key is found at index %d",pos);
}

int search(int a[],int n,int key)
{
    int i,pos=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
        else 
             return -1;
