#include <stdio.h>
int main()
{
	int a[100],n,i,m,x;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	m=x=a[0];
	
	for(i=0;i<n;i++){
		if(a[i]>m){
			m=a[i];
		}
	}
	printf("%d\n",m);
	
	for(i=0;i<n;i++){
		if(a[i]<x){
			x=a[i];
		}
	}
	printf("%d",x);
	return 0;
}
