#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
        printf("%c is Uppercase ", ch);
    else if (ch >= 97 && ch <= 120)
        printf("%c is Lowercase ", ch);
    else if (ch >= 48 && ch <= 57)
        printf("%c is Number ", ch);
    else
        printf("Other Char.");

    return 0;
}