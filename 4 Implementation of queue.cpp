//c program to implement a queue operations using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delt();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
int main()
{
	int choice;
	while(1)
	{
		printf("1.Enque\n");
		printf("2.Deque\n");
		printf("3.Display\n");
		printf("4.Quit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
				
				case 2:
					delt();
					break;
					
					case 3:
						display();
						break;
						
						case 4:
							exit(1);
						     
						     default:
						     	printf("wrong choice\n");
		}
	}
	return 0;
}
void insert()
{
	int add_item;
	if(rear==MAX-1)
		printf("Queue overflow \n");
		else 
		{
			if(front==-1)
			front =0;
			printf("Insert the elment in queue:");
			scanf("%d",&add_item);
			rear=rear+1;
			queue_array[rear]=add_item;
		}
}
void delt()
{
	if(front ==-1 || front >rear)
	{
		printf("Queue underflow \n");
		return ;
	}
	else 
	{
		printf("Element deleted from queue is :%d\n",queue_array[front]);
		front =front +1;
	}
}
void display()
{
	int i;
	if(front==-1)
		printf("Queue is empty\n");
		else 
		{
			printf("Queue is :\n");
			for(i=front; i<=rear;i++)
			printf("%d\t",queue_array[i]);
			printf("\n");
		}
}
