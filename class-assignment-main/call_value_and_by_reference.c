#include <stdio.h>

int main()
{
    int a;
    a = 10;

    int *ptr = &a;
    printf("number is %d\n", a);    // call by valaue
    printf("number is %d\n", *ptr); // call by reference
    
    printf("\nIshaan Sengar, 125113008");
    return 0;
}