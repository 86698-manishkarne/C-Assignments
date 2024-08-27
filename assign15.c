#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int count = 0;

    printf("Enter String :: ");
    gets(str);

    for (ch = 'A'; ch <= 'z'; ch++)
    {
        count = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (ch == str[i])
                count++;
        }
        if (count > 0)
            printf("%c = %d\n", ch, count);
    }
}