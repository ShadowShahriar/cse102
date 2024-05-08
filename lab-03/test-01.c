#include <stdio.h>

int main()
{
    char str[2000];
    int otherThanLowerCase = 0;
    printf("Enter a string: ");
    gets(str);

    printf("\n");
    for (int i = 0; i < 2000; i++)
    {
        printf("%4d: ", i);
        printf("%c\n", str[i]);
    }
    return 0;
}
