//WAP to print 2D array(matrix) and calculate sum.
#include <stdio.h>
int main()
{
	int n,m,i,j,sum=0;;
	printf("Enter two array size:");
	scanf("%d %d",&n,&m);
	int arr[n][m
	];
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
    scanf("%d",&arr[i][j]);
    for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	printf("%d",arr[i][j]);
}
	printf("\n");
}

	for(i=0;i<n;i++){
		sum=0;
	for(j=0;j<m;j++){
	sum=sum+arr[i][j];
}
printf(" %d\t ",sum);
}
	
	return 0;
}
