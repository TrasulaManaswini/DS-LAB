#include<stdio.h>
int binary_search(int arr[20],int n,int key);
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
	pos=binary_search(arr,n,key);
	if (pos==-1)
	{
		printf("Element not found");
	}

	else
	{
		printf("%d is found at position %d",key,pos+1);
	}
}
int binary_search(int arr[20],int n,int key)
{
	int low=0,high=n-1,i,mid;
	mid=low+high/2;
	while(low<=high)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]<key)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
}

