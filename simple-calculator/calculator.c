#include <stdio.h>

/**
 * addition - adds two numbers
 * @a - pointer to first number
 * @b - pointer to second number
 * Return always 0
 */
int addition(int *a, int *b)
{
	printf("A: ");
	scanf("%d", a);

	printf("B: ");
	scanf("%d", b);

	printf("Result: %d\n", *a + *b);

	return(0);
}

/**
 * subtraction - subtracts two numbers
 * @a - pointer to first number
 * @b - pointer to second number
 * Return always 0
 */
int subtraction(int *a, int *b)
{
	printf("A: ");
	scanf("%d", a);

	printf("B: ");
	scanf("%d", b);

	printf("Result: %d\n", *a - *b);

	return(0);
}

/**
 * multiplication - multiplies two numbers
 * @a - pointer to first number
 * @b - pointer to second number
 * Return always 0
 */
int multiplication(int *a, int *b)
{
	printf("A: ");
	scanf("%d", a);

	printf("B: ");
	scanf("%d", b);

	printf("Result: %d\n", *a * *b);

	return(0);
}

/**
 * division - divides two numbers
 * @a - pointer to first number
 * @b - pointer to second number
 * Return always 0
 */
int division(int *a, int *b)
{
	printf("A: ");
	scanf("%d", a);

	printf("B: ");
	scanf("%d", b);

	if (*b == 0)
	{
		printf("Error: cannot divide by zero\n");
	}
	else
	{
		printf("Result: %.1f\n", (double)*a / *b);
	}

	return(0);
}


/**
 * main - Simple calculator
 * Return always 0
 */
int main(void)
{
        int choice;
	int a;
	int b;

	while (1)
	{

        	printf("Simple Calculator\n");
        	printf("1) Add\n");
        	printf("2) Subtract\n");
        	printf("3) Multiply\n");
        	printf("4) Divide\n");
        	printf("0) Quit\n");
        	printf("Choice: ");
        	scanf("%d", &choice);

        	if (choice == 0)
       		{
               		printf("Bye!\n");
			break;
       		}

		else if (choice == 1)
		{
			addition(&a, &b);
		}

		else if (choice == 2)
		{
			subtraction(&a, &b);
		}

		else if (choice == 3)
		{
			multiplication(&a, &b);
		}

		else if (choice == 4)
		{
			division(&a, &b);		
		}
		else if (choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
		}
	}

        return (0);
}
