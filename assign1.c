
#include <stdio.h>

int main(void)
{
    int i, max, N, x;
    printf("Enter Number  : ");
    scanf("%d", &N);
    max = 0;
    for (i = 1; i <= N; i++)
    {
        
        scanf("%d", &x);

        if (max < x)
            max = x;
    }
    printf("\n max = %d", max);
    return 0;
}