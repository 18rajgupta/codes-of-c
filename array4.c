//write a c program to find sum of all array elements.
#include <stdio.h>
int main()
{
	int a[100],n,i,sum=0;
	printf("Size of array:");
	scanf("%d",&n);
	printf("Enter the elements in array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The sum of elements in array is:");
	for(i=0;i<n;i++){
	sum=sum+a[i];}
	printf("%d",sum);
	
	return 0;
}
