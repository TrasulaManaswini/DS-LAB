#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
void insert();
void delete();
void display();
int front=-1,rear=-1;
int queue[maxsize];
void main()
{
	int choice;
	while(choice!=4)
	{
		printf("Enter your choice:\n 1.push 2.pop 3.display:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					insert();
					break;
				}
			case 2:
				{
					delete();
					break;
				}
			case 3 :
				{
					display();
					break;
				}
			case 4:
				{
					exit(0);
					break;
				}
		}}}
void insert()
{
	int item;
	printf("Enter the item:");
	scanf("%d",&item);
	if(rear>=maxsize-1)
	{
		printf("OVERFLOW");
	}
	if (front==-1&&rear==-1)
	{
		front=0;
		rear=0;
	}
	else{
		rear++;
	}
	queue[rear]=item;
}
void delete()
{
	int item;
	if(front ==-1||front>rear)
	{
		printf("UNDERFLOW");
	}
	else{
		item=queue[front];
		if(front==rear)
			{
				front=-1;
				rear=-1;
			}
		else{
			front=front+1;
		}
		printf("Value deleted");
	}
}
void display()
{
	int i;
	if(rear==-1)
	{
		printf("Empty queue");
	}
	else{
		printf("printing values..");
		for(i=front;i<=rear;i++)
		{
			printf("%d",queue[i]);
		}
	}
}



