#include<stdio.h>
int main()
{
	int a[50]={10,20,30,40,50};
	int size=5;
	int pos=2;
	int item=20;
	int i=0;
	printf("element of array: \n");
	for(i=0;i<size;i++)
	{
		printf("given element display: %d\n",a[i]);
	}
	for(i=pos;i<size-1;i++)
	{
		a[i]=a[i+1];
	}
	size--;
	{ 
	printf("elements of index %d: %d\n",i,a[i]);
	}
	
    return 0;
}
