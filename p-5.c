#include<stdio.h>

main()
{
	int a = 12,b = 6;
	
	printf("addition of %d and %d is %d \n",a,b,a+b);
	printf("subtraction of %d and %d is %d \n",a,b,a-b);
	printf("multiplication of %d and %d is %d \n",a,b,a*b);
	printf("division of %d and %d is %d \n",a,b,a/b);
	printf("modul of %d and %d is %d\n",a,b,a%b);
	
	printf("\n");
	
	printf("%d + %d =%d\n",a,b,a+b);
	printf("%d - %d =%d\n",a,b,a-b);
	printf("%d * %d =%d\n",a,b,a*b);
	printf("%d / %d =%d\n",a,b,a/b);
	printf("%d %% %d =%d\n",a,b,a%b);
	
	printf("\n");
	
	
	int x=5,y=5;
	
	printf("---------\n");
	printf("|\t|\n");
	printf("|%d*%d= %d|\n",x,y,x*y);
	printf("|\t|\n");
	printf("---------\n");
}