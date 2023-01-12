//write a c program to enter length in centimeter and convert it into meter and kilometer.

#include <stdio.h>
int main()
{
	float l,a,b;
	l=100;
	a=l/100;
	b=l/1000;
	printf("length in meter=%f meter\n",a);
	printf("length in kilometer=%f km\n",b);
	return 0;
}
