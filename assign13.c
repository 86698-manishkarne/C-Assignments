#include <stdio.h>
#include <string.h>

int main()
{

    const char *strings[6] = {"Manish", "Samadhan", "Abhijeet", "Shreyash", "Pramod", "Samadhan"};

    int check[6] = {0};

    printf("Duplicate strings are:\n");

    for (int i = 0; i < 6; i++)
    {

        if (check[i])
            continue;

        for (int j = i + 1; j < 6; j++)
        {

            if (check[j])
                continue;

            if (strcmp(strings[i], strings[j]) == 0)
            {

                printf("%s\n", strings[i]);

                check[j] = 1;

                break;
            }
        }

        check[i] = 1;
    }

    return 0;
}