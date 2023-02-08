#include<stdio.h>
void bubblesort(int arr[],int n)
{
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main()  {
	int arr[20],n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
        {
	       	scanf("%d",&arr[i]);
        }
        printf("Elements of array after sorting:");
	bubblesort(arr,n);
	for(i=0;i<n;i++)
        {  
	printf("%d\t",arr[i]);
        }
        return 0;
        }




