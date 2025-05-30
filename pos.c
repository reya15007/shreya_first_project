#include<stdio.h>
int main()
{
	int a[10]={10,20,30,40,50};
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
    	printf("element at index is %d\n",i,a[i]);
    }
    return 0;
}
