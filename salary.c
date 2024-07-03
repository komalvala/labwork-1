#include<stdio.h>
main()
{
	float salary,gs,hra,da,ta;
	printf("base salary: ");
	scanf("%f",&salary);
	
	hra=0.1 *salary;
	da=0.05*salary;
	ta=0.08*salary;
	
	gs=salary+hra+da+ta;
	printf("gross salary:%.2f",gs);
	
}