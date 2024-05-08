#include <stdio.h>

int main()
{
    char str[20];
    gets(str);
    char terminator = '\0';
    int countUPR = 0;
    int countLWR = 0;
    int countSPL = 0;
    for (int i = 0; str[i] != terminator; i++)
    {
        char character = str[i];
        if (character >= 97 && character <= 122)
            countLWR++;
        if (character >= 65 && character <= 90)
            countUPR++;
        if (character >= 33 && character <= 64 ||
            character >= 91 && character <= 96)
            countSPL++;
    }

    printf("\n");
    printf("Upper-case letters: %d", countUPR);
    printf("\nLower-case letters: %d", countLWR);
    printf("\nSpecial letters: %d", countSPL);
    return 0;
}
