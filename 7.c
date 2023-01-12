//write a c program to enter radius of a circle and find its diameter,circumference and area.

#include <stdio.h>
int main()
{
	float r,d,c,a;
	r=21;
	d=2*r;
	c=2*3.14*r;
	a=3.14*r*r;
	printf("Diameter of a circle=%f\n",d);
	printf("circumference of a circle=%f\n",c);
	printf("area of circle=%f\n",a);
	return 0;
}
