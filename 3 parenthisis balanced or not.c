// wap to check whether ther parenthisis are balanced or not 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
struct stack
{
	char s[max];
	int top;
}st;
int stempty()
{
	if(st.top==-1)
	{
		printf("\n stack empty");
		return 1;
	}
	else 
	return 0;
}
int stfull()

{
	if(st.top==max-1)
	
		return 1;
		else 
		return 0;	
	
}
int push(char item)
{
	st.top++;
	st.s[st.top]=item;
}
int pop(char item)
{
	item=st.s[st.top];
	st.top--;
	return(item);
}
int main()
{
	char expression[80];
	int i=-1;
	st.top=-1;
	printf("\n\t Implementation of stack");
	printf("\n---------------");
	printf("\n\n Enter the expression-> \n");
	scanf("%s",expression);
	while(expression[++i]!='\0')
	{
		switch(expression[i])
		{
			case'(':
			{
				push('(');
				break;
			}
			case ')':
				{
					if(st.s[st.top]=='(')
					pop(')');
					break;
				}
				case '[':
				{
					push('[');
					break;
					
				}
				case ']':
				{
					if(st.s[st.top]=='[')
					pop(']');
					break;
			  }
			  case '{':
			  	{
				  
			  	push('{');
				break;
			  }
			  case '}':
			  {
			  	if(st.s[st.top]='{')
			  	pop('}');
			  	break;
			  }    
		}
	}
	if(!stempty())
	{
		printf("\n Expression has unmathched parenthesis");
	}
	else 
	printf("\n expression is okay");
	return 0;
}