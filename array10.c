//WAP to read two arrays of size 5 and store sum of these arrays into third array.
#include <stdio.h>
int main()
{
	int arr1[5],arr2[6],sumArr[6];
	int i;
	printf("Elements of 1st array are:");
	for(i=0;i<5;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Elements of 2nd array are:");
	for(i=0;i<6;i++){
		scanf("%d",&arr2[i]);
	}
	
	printf("Elements of 3rd array are:\n");
	for(i=0;i<6;i++){
		sumArr[i]=arr1[i]+arr2[i];
		printf("Element of index %d is: %d\n",i,sumArr[i]);
	}
	
	
	return 0;
}
