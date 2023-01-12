//write a c program to read and print elements in array.
#include <stdio.h>
int main()
{
	int age[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&age[i]);
	}
	for(i=0;i<n;i++){
		printf(" %d",age[i]);
	}
	return 0;
}
