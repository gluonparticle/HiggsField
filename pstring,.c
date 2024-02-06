//program to check whether a string is palindrome or not

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    printf("Enter a string: ");
    gets(a);
    strcpy(b, a); // Copying input string
    strrev(b);    // Reversing the string

    // Checking if the string is palindrome or not
    if (strcmp(a, b) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string isn't a palindrome.\n");

    return 0;
}