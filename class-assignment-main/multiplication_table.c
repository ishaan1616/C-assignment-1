#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("ENTER NUMBER TO GET ITS TABLE:");
    scanf("%d", &n);

    while (i <= 10)
    {
        printf("%d X %d=%d\n", n, i, n * i);
        i++;
    }

    printf("\nIshaan Sengar, 125113008");
    return 0;
}