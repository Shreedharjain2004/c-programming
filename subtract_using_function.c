#include <stdio.h>

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Difference = %d\n", subtract(num1, num2));

    return 0;
}
