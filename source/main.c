#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
#define clearscreen() system("clear")

void addition(void)
{
	int num1, num2, result;    //setup integers

	printf("\nThis function adds two numbers together.\n\n");
	sleep(2);

	printf("Input the first number: ");
	scanf("%d", &num1);

	printf("\nInput the second number: ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("\n%d + %d = %d\n\n", num1, num2, result);

	exit(1);
}

void subtraction(void)
{
	int num1, num2, result;    //setup integers

	printf("\nThis function subtracts two numbers.\n\n");
	sleep(2);

	printf("Input the first number: ");
	scanf("%d", &num1);

	printf("\nInput the second number: ");
	scanf("%d", &num2);

	result = num1 - num2;
	printf("\n%d - %d = %d\n\n", num1, num2, result);

	exit(1);
}

void multiplication(void)
{
	int num1, num2, result;    //setup integers

	printf("\nThis function multiplies two numbers.\n\n");
	sleep(2);

	printf("Input the first number: ");
	scanf("%d", &num1);
	
	printf("\nInput the second number: ");
	scanf("%d", &num2);
	
	result = num1 * num2;;
	printf("\n%d * %d = %d\n\n", num1, num2, result);
	
	exit(1);
}
           
void division(void)
{
	int dividend, divisor, quotient;    //setup integers

	printf("\nThis function divides two numbers.\n\n");
	sleep(2);

	printf("Input the dividend: ");
	scanf("%d", &dividend);

	printf("\nInput the divisor: ");
	scanf("%d", &divisor);

        if (divisor < 1) {
            printf("\nERROR: Can not divide by zero.\n\n");
            exit(1);
        }
        else {

	quotient = dividend / divisor;
	printf("\n%d / %d = %d\n\n", dividend, divisor, quotient);

	exit(1);
        }
}

int main()
{
    int func;    //setup integer for menu choice

    clearscreen();
    printf("-----Main Menu-----\n");
    printf("Choose a function:\n");
    printf("1: Addition\n");
    printf("2: Subtraction\n");
    printf("3: Multiplication\n");
    printf("4: Division\n");
    printf("5: Exit\n");
    printf("------------------\n");
    printf("Input your choice: ");
    sleep(1);
    scanf("%d", &func);
    if(func > 5) {
        printf("\n\nInvalid Choice, exiting...\n\n");
        return 0;
    }
    else {
        switch (func) {
	    case 1:
		    clearscreen();
                    addition();
	    case 2:
		    clearscreen();
                    subtraction();
	    case 3:
		    clearscreen();
                    multiplication();
	    case 4:
		    clearscreen();
                    division();
            case 5:
                    clearscreen();
                    exit(1);
            default:
                    return 0;
        }
    }
}
