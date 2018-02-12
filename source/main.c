#include <stdio.h> 
#define SCREEN_HEIGHT 15 
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))

#define clearscreen() system("clear")

void addition(void)
{
	int a, b, c;	 //setup integers

	printf("This function adds two numbers together.\n");
	sleep(2);

	printf("Input the first number:\n");
	scanf("%d", &a);

	printf("Input the second number:\n");
	scanf("%d", &b);

	c = a + b;
	printf("%d + %d = %d\n\n", a, b, c);

	exit(1);
}

void subtraction(void)
{
	int a, b, c;	 //setup integers

	printf("This function subtracts two numbers.\n");
	sleep(2);

	printf("Input the first number:\n");
	scanf("%d", &a);

	printf("Input the second number:\n");
	scanf("%d", &b);

	c = a + b;
	printf("%d - %d = %d\n\n", a, b, c);

	exit(1);
}

void multiplication(void)
{
	int a, b, c;	 //setup integers

	printf("This function multiplies two numbers.\n");
	sleep(2);

	printf("Input the first number:\n");
	scanf("%d", &a);
	
	printf("Input the second number:\n");
	scanf("%d", &b);
	
	c = a + b;
	printf("%d * %d = %d\n\n", a, b, c);
	
	exit(1);
}
           
void division(void)
{
	int a, b, c;	 //setup integers

	printf("This function divides two numbers.\n");
	sleep(2);

	printf("Input the first number:\n");
	scanf("%d", &a);

	printf("Input the second number:\n");
	scanf("%d", &b);

	c = a / b;
	printf("%d / %d = %d\n\n", a, b, c);

	exit(1);
}

void clear(void)
{
  int i;
  gotoxy(0, 0); 
  for ( i = 0; i < SCREEN_HEIGHT; i++ )
    putchar ( '\n' );
    
  return;
}

int main()
{
    int func;	 //setup integer for menu choice

    printf("---Main Menu---\n");
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
        printf("\nInvalid Choice, exiting...\n");
        return 0;
    }
    else {
        switch (func)
	    {
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
            exit(1);
        default:
            return 0;
	   }
    }
}
