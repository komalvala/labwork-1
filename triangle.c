#include<stdio.h>
main()
{
	int a,b,c;
	printf("first angle: ");
	scanf("%d",&a);
	
	printf("second angle: ");
	scanf("%d",&b);
	
	c= 180-a-b;
	printf("third angle of the right triangle is: %d deg",c);
	
}