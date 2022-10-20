#include <stdio.h>
#include <math.h>
int main()
{
float principle , rate , time;
float answer ; 
printf ("Enter principle , rate , time");
scanf ("%f %f %f" ,&principle, &rate, &time);
answer = principle * pow(1+(rate/100),time);
printf ("Your compound interest values is %f",answer);
return 0;
}