#include <stdio.h>

main()
{
	int a, b, c;	 //setup integers	
	
	printf("This program adds two numbers together.\n");
	sleep(2);
	
	printf("Input the first number:\n");	
	scanf("%d", &a);		
	
	printf("Input the second number:\n");
	scanf("%d", &b);
	
	c = a + b;
	printf("%d + %d = %d\n\n", a, b, c);
	
	return 0;
}