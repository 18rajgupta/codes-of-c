/*#include<stdio.h>
int main()
{
	printf("Enter the string:");
	char name[30];
	 gets(name);
	printf("%10.5s ",name);
	puts(name);
	
}   */

//WAP to find length of a string.(USING PREDEFINED FUNCTION)
/*#include <stdio.h>
#include <string.h>
int main()
{
	char name[30];
	int count;
	printf("Enter the string:");
	gets(name);
	printf("length of the string:");
	count=strlen(name);
	printf("%d",count);
	return 0;
}   */

//(USING OWN LOGIC)
/*#include<stdio.h>
int main()
{
	char name[30];
	int count,i=0;
	printf("Enter the string:");
	gets(name);
	while(name[i]!='\0')
	{
		count++;
		i++;
	}
	puts(name);
	printf("Length of string is:%d",count);
	return 0;
}    */

//WAP to concatenate two strings.(USING PREDEFINED FUNCTION)
/*#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30]="Raj";
	char s2[]=" Gupta";
	strcat(s1,s2);
	strncat(s1,s2,3);
	printf("String after concatenation:%s",s1);
	return 0;
}  */

//(USING OWN LOGIC)
/*#include<stdio.h>
#include<string.h>
int main()
{
    int len1,len2,i;
    char s1[30]="Raj";
    char s2[]="Gupta";
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0;i<=len2;i++)
    {
    	s1[len1+i]=s2[i];
	}
	printf("string after concatenation:%s\n",s1);
	puts(s2);
	puts(s1);
	return 0;
}  */

//WAP to compare two strings.(USING PREDEFINED FUNCTION)
/*#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30],s2[30];
	printf("Enter 1st string:");
	gets(s1);
	printf("Enter 2nd string:");
	gets(s2);
	if(strcmp(s1,s2,)==0)
	printf("SAME");
	else
	printf("NOT SAME");
	return 0;
}     */

//(USING OWN LOGIC)
/*#include<stdio.h>
#include<string.h>
int main()
{
	int flag=0,i;
	char s1[30],s2[30];
	printf("Enter 1st string:");
	gets(s1);
	printf("Enter 2nd string:");
	gets(s2);
	for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("SAME");
	else
	printf("NOT SAME");
	return 0;
}    */  

//WAP to reverse a string.(USING PREDEFINED FUNCTION)
/*#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30]="Gupta";
	strrev(s1);
	printf("The reversed string:%s",s1);
}  */

//(USING OWN LOGIC)
/*#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,j;
	char ch;
	char s1[30]="raj gupta";
	l=strlen(s1);
	for(i=0;i<l/2;i++)
	{
		ch=s1[i];
		s1[i]=s1[l-i-1];
		s1[l-i-1]=ch;
	}
	for(i=0,j=l-1;i<j;i++,j--)
	{
		ch=s1[i];
		s1[i]=s1[j];
		s1[j]=ch;
	}
	printf("The reversed string:%s",s1);
}   */

//WAP to convert string from upper case to lower case.(USING PREDEEFINED FUNCTION)
/*#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30]="RAj GUPta";
	strlwr(s1);
	printf("lower case string:%s",s1);
}  */

//(USING OWN LOGIC)
/*#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s1[30];
	printf("Enter the string:");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='A' && s1[i]<='Z')
	    {
	    	s1[i]=s1[i]+32;
		}	
	}
	printf("Lower case string:%s",s1);
}  */























