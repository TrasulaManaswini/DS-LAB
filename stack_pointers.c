#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int size;
struct stack
{
	int arr[MAX];
	int top;
};
void init_stk(struct stack*st)
{
	st -> top=-1;
}
void push(struct stack *st,int num)
{
	if(st -> top==size-1)
	{
		printf("\n stack overflow");
	}
	st -> top++;
	st -> arr[st -> top]=num;
}
int pop(struct stack *st)
{
	int num;
	if(st->top==-1)
	{
		printf("stack underflow");
		return NULL;
	}
	num=st -> arr[st->top];
	st ->top--;
	return num;
}
void display(struct stack*st)
{
	int i;
	if(st->top==-1){
		printf("No elements in stack");}
	for(i=st->top;i>=0;i--)
	{
		printf("\n%d",st->arr[i]);
	}
}
int main()
{
	int element,opt,val;
	struct stack ptr;
	init_stk(&ptr);
	printf("\n Enter stack size:");
	scanf("%d",&size);
	while(1)
	{
		printf("\n STACK PRIMITIVE OPERATIONS");
		printf("\n 1.PUSH");
		printf("\n 2.POP");
		printf("\n 3.DISPLAY");
		printf("\n 4.QUIT");

printf("\n");
printf("\n Enter your opinion:");
scanf("%d",&opt);
switch(opt)
	{
		case 1:
			printf("\n Enter the element into stack:");
			scanf("%d",&val);
			push(&ptr,val);
			break;
		case 2:
			element=pop(&ptr);
			printf("\n The element popped from stack is:%d",element);
			break;
		case 3:
			printf("\n The current stack elements are:");
			display(&ptr);
			break;
		case 4:
			exit(0);
		default:
			printf("Enter correct option");
	}
	}
}
