/*C program to write the next letter for each letter in the string*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The string is: %s\n", str);
    printf("The next letter for each letter in the string is: ");
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'z')
        {
            printf("a");
        }
        else if (str[i] == 'Z')
        {
            printf("A");
        }
        else if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
        {
            printf("%c", str[i] + 1);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");       
    return 0;
}