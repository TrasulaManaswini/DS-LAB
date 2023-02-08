#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int info;
	struct Node*next;
}*First=NULL;
void create()
{
	int i,n;
	int A[50];
	printf("Enter array size:");
	scanf("%d",&n);
	struct Node*t,*last;
	First=(struct Node*)malloc(sizeof(struct Node));
	First->info=A[0];
	First->next=NULL;
	last=First;
	for(i=0;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->info=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void transverse()
{
	struct Node*temp;
	if(First==NULL)
	{
		printf("List is empty");
	}
	else
	{
		temp=First;
		while(temp!=NULL)
		{
			printf("%d",temp->info);
			temp=temp->next;
		}
	}
}
void insert_at_beg()
{
	int data;
	struct Node*temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter element to be inserted:");
	scanf("%d",&data);
	temp->info=data;
	temp->next=First;
	First=temp;
}
void insert_at_end()
{
	int data;
	struct Node*temp,*head;
	temp=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter number to insert at end:");
	scanf("%d",&data);
	temp->next=NULL;
        temp->info=data;
        head=First;
	while(head->next!=NULL)
	{
		head=head->next;
	}
	head->next=temp;
}
void insert_at_position()
{
	struct Node*temp,*newnode;
	int pos,data,i=1;
	newnode=malloc(sizeof(struct Node));
	printf("Enter the position and data:");
	scanf("%d %d",&pos,&data);
	temp=First;
	newnode->info=data;
	newnode->next=0;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void delete_First()
{
	struct Node*temp;
	if(First==NULL)
	{
		printf("\n List is empty\n");
	}
	else
	{
                temp=First;
		First=First->next;
		free(temp);
	}
}
void delete_End()
{
	struct Node*temp,*prevnode;
	if(First==NULL)
	{
		printf("\nList is empty\n");
	}
	else
	{
		temp=First;
		while(temp->next!=0)
		{
			prevnode=temp;
			temp=temp->next;
		}
		free(temp);
		prevnode->next=0;
	}
}
void delete_position()
{
	struct Node *temp,*position;
	int i=1,pos;
	if(First==NULL)
	{
		printf("\n List is empty \n");
	}
	else
	{
		printf("\n Enter index:");
		scanf("%d",&pos);
		position=malloc(sizeof(struct Node));
		temp=First;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		position=temp->next;
		temp->next=position->next;
		free(position);
	}
}

int main()
{
	int choice;

		
			printf("\n 1.To see list\n 2.insert at beg\n 3.insert at end\n 4.insert at position\n 5.delete at beg\n 6.delete at end\n 7.delete at any position\n 8.To exit\n");
                       while(1)
		       {
		       printf("Enter choice:");
	               scanf("%d",&choice);
	switch(choice)
	{
		case 1:
	               transverse();
                       break;
		case 2:
		       insert_at_beg();
		       break;
		case 3:
		       insert_at_end();
		       break;
	        case 4:
		       insert_at_position();
		       break;
	        case 5:
		       delete_First();
		       break;
		case 6:
		       delete_End();
		       break;
		case 7:
		       delete_position();
		       break;
	        case 8:
		       exit(1);
		default:
		       printf("incorrect choice");
	}
		}
}
