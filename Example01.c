#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Text: ");

    // Loop through string in reverse order
    printf(“Reverse: “);
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }

    printf("\n");
}
