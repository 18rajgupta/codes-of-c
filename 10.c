//c program to enter temperature in celcius and convert it into fahrenheit and fahrenheit to celcius.
#include <stdio.h>
int main()
{
   float c,f;
   c=25;
   f=(c*9)/5+32;
   float fahrenheit,celcius;
   fahrenheit=25;
   celcius=5*(fahrenheit-32)/9;
   printf("c to f=%ffahrenheit\n",f);
   printf("f to c=%fcelcius\n",celcius);
   return 0;
}
