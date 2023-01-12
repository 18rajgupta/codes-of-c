//Write a program to reverse the array elements.
#include <stdio.h>
int main()
{
	int a[100],n,i;
	printf("Size of array:");
	scanf("%d",&n);
	printf("Elements in array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Reversing the elements of array:");
	for(i=n-1;i>=0;i--){
		printf("\nElement at index %d is %d",i,a[i]);
	}
	
	return 0;
}
