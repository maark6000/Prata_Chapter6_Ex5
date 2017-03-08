#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int outside_loop = 64;
    int space_loop;
    int inc_loop;
    int dec_loop;
    int dec = 64;
    char x = 'A';
    int y;

    printf("enter a capital letter: ");
    scanf("%c", &x);

    y = x - 65;

    while (outside_loop < x)
    {
        for(space_loop = 0; x - outside_loop - 1 - space_loop > 0; ++space_loop)
        {
            printf(" ");
        }

        for(inc_loop = 0; dec + y + inc_loop < x; ++inc_loop)
        {
            printf("%c", dec + y + 1 + inc_loop);
        }

        for (dec_loop = 1; dec + y + dec_loop < x; ++dec_loop)
        {
            printf("%c", x - dec_loop);
        }


        printf("\n");
        outside_loop++;
        dec--;
    }

    return 0;
}
