//wap to print 2d array(matrix) and calculate sum.
/*#include <stdio.h>
int main()
{
	int a[2][3],i,j,sum=0;
	printf("Enter the elements of 2d array:");
	for(i=0;i<2;i++){
	   for(j=0;j<3;j++){
		  scanf("%d",&a[i][j]);
	      }
}
	
	printf("The elements of 2d array are:\n");
	for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		printf("%d\t",a[i][j]);
		sum=sum+a[i][j];
	}
	printf("\n");
}
	
	printf("sum=%d",sum);
	return 0;
}   */


//WAP to print transpose of a matrix.
/*#include <stdio.h>
int main()
{
	int a[2][3],i,j;
	printf("Enter the elements of matrix:");
	for(i=0;i<2;i++){
	   for(j=0;j<3;j++){
		  scanf("%d",&a[i][j]);
	      }
}
	
	printf("The elements of matrix are:\n");
	for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}
    
    printf("Transpose of matrix:\n");
    for(i=0;i<3;i++){
	for(j=0;j<2;j++){
		printf("%d\t",a[j][i]);
	}
	printf("\n");
}
	
	return 0;
}  */

//WAP to print sum of individual rows and columns.
/*#include <stdio.h>
int main()
{
	int a[3][3],i,j,SR,SC;
	printf("Enter the elements of matrix:");
	for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
		  scanf("%d",&a[i][j]);
	      }
}
	
	printf("The elements of matrix are:\n");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}
    
    for(i=0;i<3;i++){
    	SR=0,SC=0;
	for(j=0;j<3;j++){
		SR=SR+a[i][j];
		SC=SC+a[j][i];
	}
	printf("SR of row%d= %d,SC of column%d= %d\n",i,SR,i,SC);
}
	
	return 0;
}    */

//WAP to print addition of two matrices.
/*#include<stdio.h>
int main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	printf("Elements of 1st matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Elements of 2nd matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("1st matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("2nd matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("3rd matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		    c[i][j]=a[i][j]+b[i][j];
		    printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	printf("3rd matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		    c[i][j]=a[i][j]-b[i][j];
		    printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}    */

//WAP to print multiplication of two matrices.
  #include<stdio.h>
int main()
{    
	 int a[3][3],b[3][2],c[3][2],i,j,k,sum;
	printf("Enter 1st matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter 2nd matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{  
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("1st matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("2nd matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	
	printf("Multiplication of two matrices:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}  










































