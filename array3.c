//write a c program to print all negative and positive elements in an array.
#include <stdio.h>
int main()
{
	int ele[100],n,i;
	printf("Size of array:");
	scanf("%d",&n);
	
	printf("Enter the elemets in an array:");
	for(i=0;i<n;i++){
		scanf("%d",&ele[i]);
	}
	
	printf("All negative elements of array are:");
	for(i=0;i<n;i++){
		if(ele[i]<0){
			printf("%d\n",ele[i]);
		}
		
	}
	printf("All positive elements of array are:");
	for(i=0;i<n;i++){
		if(ele[i]>0){
			printf("%d\n",ele[i]);
		}
	}
	
	return 0;
}
