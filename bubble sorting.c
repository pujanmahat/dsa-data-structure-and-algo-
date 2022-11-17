//bubble sorting

#include<stdio.h>
#include<conio.h>
void bubble(int *ptr,int s)
{
	int i,j;
	int temp;
	for(i=1;i<s;i++)
	{
		for(j=0;j<s-1;j++)
		{
			if(*(ptr+j)>*(ptr+j+1))
			{
				temp=*(ptr+j);
				*(ptr+j)=*(ptr+j+1);
				*(ptr+j+1)=temp;
			}
		}
	}
}
void main()
{
	int arr[10];
    int i;
    int size;
    printf("\nEnter the size of array:");
    scanf("%d",&size);
    printf("enter the elments\n");
    for(i=0;i<size;i++)
    {
    	scanf("%d",&arr[i]);
    	
	}
	printf("\nbefore sorting");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	
		
	}
		bubble(arr,size);
	printf("\nAfter sorting\n");
	for(i=0;i<size;i++)
	{
		
		printf("%d\t",arr[i]);
	}
}
