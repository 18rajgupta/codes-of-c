#include <stdio.h>
int main()
{
	int prize;
	printf("Enter the prize\n RUPEES ");
	scanf("%d",&prize);
	if(prize==45){
		printf("Student is pass in both maths and science");
	}
	else if(prize==15){
		printf("Student is pass only in science or in maths");
	}
	else{
		printf("Student is failed..");
	}
	return 0;
}
