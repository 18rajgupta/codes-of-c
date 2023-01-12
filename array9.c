//WAP to count total no. of even and odd elements in an array.
#include <stdio.h>
int main()
{
	int a[100],n,i;
	int odd=0,even=0;
	printf("Size of array:");
	scanf("%d",&n);
	
	printf("Elements of array are:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if(a[i]%2==1){
			odd++;
		}
		else{even++;
		}
	}
	
	printf("No. of odd elements are: %d\n",odd);
	printf("No. of even elements are: %d",even);
	
	
	return 0;
}
