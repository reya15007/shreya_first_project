#include<stdio.h>
int main()
{
	int a[50]={10,20,30,40,50};
	int size=5;
	int pos=2;
	int item=25;
	int i=0;
	printf("element of array: \n");
	for(i=0;i<size;i++)
	{
		printf("given element display: %d\n",a[i]);
	}
	for(i=size-1;i>pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=item;
	size++;
	{ 
	printf("array after insertion \n");
	}
	for(i=0;i<size;i++)
    {
    	printf("element at index %d: %d\n",a[i],i);
    }
    return 0;
}
