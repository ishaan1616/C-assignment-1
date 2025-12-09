#include <stdio.h>

int main()
{
    int a = 0, b;

    printf("enter number to add till it: ");
    scanf("%d", &b);

    for (int i = 1; i <= b; i++)
    {
        a += i;
    }

    printf("sum of first %d natural numbers is %d", b, a);
    printf("\nIshaan Sengar, 125113008");

    return 0;
}