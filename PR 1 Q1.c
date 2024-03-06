#include<stdio.h>

main()

{
	int c,f;
	
	printf("The temperature in Celcius =");
	scanf("%d",&c);
	
	f= (c*9/5)+32;
	printf("The temperature in Fahrenheit= %d",f);
}