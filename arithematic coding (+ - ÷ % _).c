//NAME:AZMA KAGDI//
//PRN:2503033111372003//
#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,modulus;
    float division;

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n", a % b);

    return 0;
}