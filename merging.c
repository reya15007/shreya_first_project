#include<stdio.h>
int main()
{
	int arr1[50]={1,2,3};
	int i=0;
	int size1=3;
	int arr2[50]={4,5,6,7};
	int size2=4;
	int merged[100];
	int mergedsize=size1+size2;
	printf("element of array: \n");
	for(i=0;i<size1;i++)
	{
		merged[i]=arr1[i];
	}
	//for copy the element
	for(i=0;i<size2;i++)
     {
     		merged[i]=arr2[i];
     }
     //print the merged array
     for(i=0;i<mergedsize;i++)
    {
    	printf("print merged array %d\n",merged[i]);
    }
    return 0;
}
