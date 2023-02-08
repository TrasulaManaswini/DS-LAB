#include<stdio.h>
void insertionsort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
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
	insertionsort(arr,n);
	for(i=0;i<n;i++)
        {
	printf("%d\t",arr[i]);
        }
        return 0;
        }


