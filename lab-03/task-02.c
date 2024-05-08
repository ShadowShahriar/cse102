#include <stdio.h>

int main()
{
    char str[10];
    char str2[10];
    int length = 0;
    int palinedrome = 1;
    printf("Given string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
        length++;

    printf("Reversed string: ");
    for (int j = 0; j < length; j++)
    {
        str2[j] = str[length - j - 1];
        printf("%c", str2[j]);
    }

    for (int k = 0; k < length; k++)
    {
        if (str[k] != str2[k])
        {
            palinedrome = 0;
            break;
        }
    }

    printf("\n");
    if (palinedrome)
        printf("The given string is a palinedrome.");
    else
        printf("The given string is NOT a palinedrome.");

    return 0;
}
