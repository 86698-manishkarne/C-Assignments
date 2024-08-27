#include <stdio.h>
int main()
{
    int num, t1 = 0, t2 = 1, next = t1 + t2;

    printf("Enter Number for Fibbonancy Series ::  ");
    scanf("%d", &num);

    printf("Fibonacci Series: %d %d", t1, t2);

    for (int i = 3; i <= num; i++)
    {
        printf(" %d", next);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }

    return 0;
}