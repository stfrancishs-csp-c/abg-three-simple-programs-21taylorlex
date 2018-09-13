#include <stdio.h>
/* print Fahrenheit- Celsius table */
int main (void)
{
int fahr=-100;
//for(fahr = -100; fahr <= 300; fahr - fahr + 20)
//init
while(fahr <= 300)
{
printf("f-%3d c - %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
//increment
fahr = fahr + 20;
}
//printf("%3d", fahr);
}