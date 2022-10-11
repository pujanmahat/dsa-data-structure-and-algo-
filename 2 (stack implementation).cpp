//wap to implement stack(stack implementation)
//inclue push,pop,display,isempty,isfull

#include<stdio.h>
#include<conio.h>
#define maxsize 5
struct stack
{
	int stk[maxsize];
	int top;
};
typedef struct stack STACK;
STACK s;
void push(void);
int pop(void);
void display(void);
int main()
{
	int choice;
	int option=1;
	s.top=-1;
	printf("stack operation\n");
	while(option)
	{
		printf("-------------------------------------\n");
		printf("Enter 1 for push \n");
		printf("Enter 2 for pop\n");
		printf("Enter 3 for display\n");
		printf("Enter 4 for exit\n");
		printf("----------------------\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
				
				case 2:
					pop();
					break;
					
				case 3:
				    display();
					break;
					
					case 4:
					  return 0;	
		}
		printf("Do you want to continue?(enter 1 for yes and enter 0 for no)");
		scanf("%d",&option);
	}
	
}
void push()
{
	int num;
	if(s.top==(maxsize-1))
	{
		printf("Stack is full\n");
		return ;
	}
	else {
		printf("Enter the element to be pushed\n");
		scanf("%d",&num);
		s.top=s.top+1;
		s.stk[s.top]=num;
	}
	return ;
}
int pop()
{
	int num;
	if(s.top==-1)
	{
		printf("Stack is empty\n");
		return(s.top);
	}
	else 
	{
		num=s.stk[s.top];
		printf("poped element is %d",s.stk[s.top]);
		s.top=s.top-1;
	}
	return(num);
}
void display()
{
  int i;
  if(s.top==-1)
  {
  	printf("Stack is empty\n");
  	return ;
  }	
    else 
	{
		printf("The status of the stack is \n");
		for(i=s.top;i>=0;i--)
		{
			printf("%d",s.stk[i]);
		}
	}
	printf("\n");	
}