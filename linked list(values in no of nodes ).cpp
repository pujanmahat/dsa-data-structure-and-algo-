//wap to create a linked list with user defined no of nodes

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int  main()
{
  	int n,i,item;
    struct node *p,*q,*head;
    
  	printf("Enter number of nodes\n");
  	scanf("%d",&n);
  	
  	printf("Enter the value in head node\n");
  	scanf("%d",&item);
  	
  	q=(struct node*)malloc(sizeof(struct node));
  	q->data=item;
  	q->next=NULL;
  	head=q;
  	p=head;
  	
  	for( i=1; i<n; i++ )
  	{
  		printf("Enter the value of next node\n");
  		scanf("%d",&item);
  		
  		q=(struct node*)malloc(sizeof(struct node));
  		q->data=item;
  		q->next=NULL;
  		p->next=q;
  		p=p->next;
	  }
	  printf("\n");
	  p=head;
	  while(p!=NULL)
	  {
	  	printf("%d\t",p->data);
	  	p=p->next;
	  }
	  return 0;
}

