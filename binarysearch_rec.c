#include<stdio.h>
int binarysearch(int arr[10],int x,int low,int high)
{
	while(high>=low)
	{
		int mid=low+high/2;
		if(arr[mid]==x)
		{
			return mid;
		}
		else if(arr[mid]>x)
			{
				return binarysearch(arr,x,low,mid-1);
			}

	else{
		return binarysearch(arr,x,mid+1,high);
	}
	}
	
}
int main()
{
	int arr[10],n,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter key:");
	scanf("%d",&n);
	int result=binarysearch(arr,n,0,n-1);
	if(result==-1)
	{
		printf("Not found");
	}
	else
	{
		printf("Element is found at index %d",result);
	}
}

