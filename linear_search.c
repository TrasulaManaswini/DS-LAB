#include<stdio.h>
int linear_search(int arr[20],int n,int key);
int main()
{
	int n,arr[20],i,key,pos;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&key);
	pos=linear_search(arr,n,key);
	if (pos==-1)
	{
		printf("Element not found");
	}

	else
	{
		printf("%d is found at position %d",key,pos+1);
	}
}
int linear_search(int arr[20],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
		       return i;
		}
	}
	return -1;
}
