#include <stdio.h>
int main()
{

    int sub1, sub2, sub3, sub4, sub5;
    float per;

    printf("Enter 5 subject marks : ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    per = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;

    if (per >= 90)
        printf("Grade EX ");
    else if (per >= 80)
        printf("Grade A ");
    else if (per >= 70)
        printf("Grade B ");
    else if (per >= 60)
        printf("Grade C ");
    else
        printf("Grade F ");
    
    printf("\nPercentage : %.2f",per);

    return 0;
}