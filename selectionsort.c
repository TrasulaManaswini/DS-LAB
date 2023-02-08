#include<stdio.h>
void selectionsort(int arr[],int n){
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[min]){
				min=j;
			}
		}
	int temp=arr[i];
	arr[i]=arr[min];
	arr[min]=temp;
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
	selectionsort(arr,n);
	for(i=0;i<n;i++)
        {
	printf("%d\t",arr[i]);
        }
        return 0;
        }


