//WAP to read marks of 5 students. Calculate sum and average using array.
#include<stdio.h>
int main()
{
	int marks[5],i;
	float avg,sum=0;
	printf("Enter the marks:");
	for(i=0;i<5;i++){
		scanf("%d",&marks[i]);
	}
	
	printf("The sum of the marks is:");
	for(i=0;i<5;i++){
	   sum=sum+marks[i];}
	printf(" %f\n",sum);
	
	avg=sum/5;
	printf("Now,average marks are: %f",avg);
	
	return 0;
}
