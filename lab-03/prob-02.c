#include <stdio.h>

int main()
{
    char str[20];
    int otherThanLowerCase = 0;
    printf("Enter a string: ");
    gets(str);
    printf("Given string: %s", str);
    printf("\nString length: %d", sizeof(str) / sizeof(str[0]));

    char terminator = '\0';
    for (int i = 0; str[i] != terminator; i++)
    {
        char character = str[i];
        if (character >= 'a' && character <= 'z' || character == ' ')
        {
        }
        else
        {
            otherThanLowerCase = 1;
            break;
        }
    }

    printf("\n\n");
    if (otherThanLowerCase == 0)
        printf("The given string only contains lowercase letters.");
    else
        printf("The given string contains other symbols.");
    printf("\n");
    return 0;
}
