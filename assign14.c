#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int len, i, count = 0;
    printf("Enter the string: ");
    gets(str);

    for(len = 0; str[len]!='\0';len++);
    

    for(i = 0; i < len; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            count = 1;
            break;
        }
    }

    if(count == 0)
        printf("%s is palindrome string", str);
    else    
        printf("%s is not palindrome string", str);
    return 0;
}