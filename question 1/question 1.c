#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char value[100];

    scanf("%s", value);

    int len = strlen(value);
    int i = 0;

    int flag = 0;

    while (value[i] != '\0')
    {

        if (value[i] == '.' && (value[i + 1] - '0' <= 9 && value[i + 1] - '0' >= 0) && value[i + 1] != '\0')
        {
            flag = 1;
            i++;
        }
        else if (value[i] - '0' <= 9 && value[i] - '0' >= 0)
        {
            i++;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("The number is valid floating number ");
    }
    else
    {
        printf("The number is invalid number");
    }

    return 0;
}