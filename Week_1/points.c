#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int mine = 2;
    int points = get_int("how many point did you lose\n");

    if(points < mine)
    {
        printf("you lost fewer point than me\n");
        
    }
    else if(points > mine)
    {
        printf("you lost more points than me\n");
    }
    else
    {
        printf("you lost the same points as me\n");
    }
}
