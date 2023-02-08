#include<stdio.h>
int top=-1;
int stack[10],num,ch=1;
void pop();
void push();
void original();
int main()
{
    while(ch!=0)
	{
	  printf("Enter choice:\n1.push\n2.pop\n3.original");
	  scanf("%d",&ch);
	  switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				original();
				break;
			default:
				printf("Enter choice between 1 to 3");
		}
	}
}
void push()
{       
	if(top==9)
	{
			printf("stack overflow");
		}
		else
		{
			printf("Enter element to push into stack:");	
		scanf("%d",&num);
		top++;
		stack[top]=num;
	}
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack underflow");
	}
	else
	{
		printf("Enter the element to pop from stack:");
		scanf("%d",&num);
		stack[top]=num;
		top--;
		}
}
void original()
{
	if(top==-1)
	{
		printf("No elements to display");
		}for (i=0;i<SIZE;i++)
		{
		printf("Elements of the stack are %d",stack[i]);
		}
	
}	
