#include<stdio.h>

main()

{
	float bs,hra,da,ta,gs;
	
	printf("Base Salary =");
	scanf("%f",&bs);
	
	printf("HRA =");
	scanf("%.2f",&hra);
	
	hra= bs*hra/100;
	printf("hra = %.2f",hra);
	
	printf("\nDA  = ");
	scanf("%f", & da);
	
	da= bs*da/100;
	printf("da = %.2f",da);
	
	printf("\nTa = ");
	scanf("%f", & ta);
	
	ta= bs*ta/100;
	printf("ta= %.2f\n",ta);
	
	gs=bs+hra+da+ta;
	printf("GS=%.2f",gs);
	
	
	
}