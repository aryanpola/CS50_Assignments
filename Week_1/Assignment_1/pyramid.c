#include <stdio.h>

int main(void)
{
    int height; 
    int i;
    int space;
    int symbol;
    printf("Enter the pyramid height:");
    scanf("%d", &height);
    printf("height is: %d\n", height);
    
    for(i=1; i<=height; i++)
    {
        for(space=1; space<=height-i; space++)
        {
            printf(" ");
        }
        for(symbol = 1; symbol<=i; symbol++)
        {
            printf("#");
        }
        printf("  ");
        for(symbol = 1; symbol<=i; symbol++)
        {
            printf("#");
        }
        printf("\n");
    }}

