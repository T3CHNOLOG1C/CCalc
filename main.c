#include <stdio.h>

void clearscreen()
{
    if (system("CLS")) system("clear");
}

void addition(void)
{
  float num1, num2, result; // setup integers

  printf("This function adds two numbers together.\n");

  printf("Input the first number:\n");
  scanf("%f", &num1);

  printf("Input the second number:\n");
  scanf("%f", &num2);

  result = num1 + num2;
  printf("%f + %f = %f \n\n", num1, num2, result);
}

void subtraction(void)
{
  float num1, num2, result; // setup integers

  printf("This function subtracts two numbers.\n");

  printf("Input the first number:\n");
  scanf("%f", &num1);

  printf("Input the second number:\n");
  scanf("%f", &num2);

  result = num1 - num2;
  printf("%f - %f = %f \n\n", num1, num2, result);
}

void multiplication(void)
{
  float num1, num2, result; // setup integers

  printf("This function multiplies two numbers.\n");

  printf("Input the first number:\n");
  scanf("%f", &num1);

  printf("Input the second number:\n");
  scanf("%f", &num2);

  result = num1 * num2;
  printf("%f * %f = %f \n\n", num1, num2, result);
}

void division(void)
{
  float num1, num2, result; // setup integers

  printf("This function divides two numbers.\n");

  printf("Input the first number:\n");
  scanf("%f", &num1);

  printf("Input the second number:\n");
  scanf("%f", &num2);

  result = num1 / num2;
  printf("%f / %f = %f \n\n", num1, num2, result);
}

int main()
{
    int func; // setup integer for menu choice

    printf("-----Main Menu-----\n");
    printf("Choose a function:\n");
    printf("1: Addition\n");
    printf("2: Subtraction\n");
    printf("3: Multiplication\n");
    printf("4: Division\n");
    printf("5: Exit\n");
    printf("------------------\n");
    printf("Input your choice: ");
    scanf("%d", &func);

    clearscreen();
    switch (func)
    {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            break;
        default:
            printf("\nInvalid Choice, exiting...\n");
            break;
    }
    return 0;
}
