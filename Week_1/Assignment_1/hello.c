#include <stdio.h>
#define MAX_LIMIT 20

int main (void)
{
    char str[MAX_LIMIT];
    printf("What is your name?\n");
    fgets(str, MAX_LIMIT, stdin);
    printf("hello, %s", str);
}
