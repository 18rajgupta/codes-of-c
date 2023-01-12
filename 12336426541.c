#include <stdio.h>
int main()
{
	int n ,a,b,c;
	scanf("%d %d",&a,&b);
    n=a;
    a=b;
    b=n;
    printf("%d  %d",a,b);
	return 0;
}
