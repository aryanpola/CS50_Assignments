#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Plain Text : ");

    int i =0;
    while(s[i] != '\0')
    {
        i++;
    }
    printf("%i\n", i);
    printf("Cipher Text : ");
    for (int n=0; n < i; n++)
    {
        if(s[n] >= 'a' && s[n] <= 'z' || s[n] >= 'A' && s[n] <= 'Z')
        {
            printf("%c", s[n] + 2);
        }
    }
    printf("\n");
}

