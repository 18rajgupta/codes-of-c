#include <stdio.h>
int main()
{
	int y,g;
	printf("Enter your year and your graduation\n");
	printf("press 1 for post graduation and press 2 for under graduation");
	scanf("%d%d",&y,&g);
	if(y>=10 && g==1){
		printf("he is post graduate with salary 75000\n");
	}
		else if(y>=10 && g==2){
		printf("he is undergraduate with salary 60000\n");
	
	}
	else if(y<10 && g==2){
		printf("he is undergraduate with salary 35000\n");
	}
	else 
	{
		printf("your data isn't defined");
	}
	return 0;
}
