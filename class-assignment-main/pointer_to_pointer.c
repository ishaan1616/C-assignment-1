#include <stdio.h>

int main()
{
    int a;

    printf("Enter number: ");
    scanf("%d", &a);

    int *p, **q;
    p = &a;
    q = &p;

    printf("value of number is %d\n", a);
    printf("address of number %d\n", p);
    printf("address of pointer %d\n", q);

    printf("\nIshan Singh, 125113008"); 
    return 0;
}