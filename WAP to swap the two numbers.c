//Name:Azma Mubasshir Kagdi//
//PRN: 2503033111372003//
#include <stdio.h>

int main()
{
    int A, B, C;

    printf("Enter two Numbers:");
    scanf("%d %d", &A, &B);

    C = A;
    A = B;
    B = C;

    printf("After swapping...\n");
    printf("A = %d, B = %d", A, B);

    return 0;
}
