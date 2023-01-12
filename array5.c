//Write a c program to find maximum and minimum element in array.
#include <stdio.h>
int main()
{
	int array[100],n,i,max,min;
	printf("Size of array:");
	scanf("%d",&n);
	printf("Enter the elements in array:");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	max=min=array[0];
	printf("The maximum element of array:");
	for(i=0;i<n;i++){
		if(array[i]>max){
			max=array[i];
		}
	}
		printf("%d\n",max);

	
	printf("The minimum element of array:");
	for(i=0;i<n;i++){
		if(array[i]<min){
			min=array[i];
		}
	}
		printf("%d",min);
		
	return 0;
}
