#include <stdio.h>
int main()
{
    int num, fact = 1, i;
    printf("Specify Number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d = %d", num, fact);
    return 0;
}
