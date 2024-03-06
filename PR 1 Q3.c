#include<stdio.h>

main()
{
	float a,b,c;
	
	printf("First angle a=");
	scanf("%f",&a);
	
	printf("Second angle b=");
	scanf("%f",&b);
	
	c=180-a-b;
	
	printf("third angle c= %.2f",c);
	
}
