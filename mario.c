#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int g;
    do
    {
        g = get_int("Height: ");
    }
    while (g < 1 || g > 8); // program will ask the user again if the value is not between 1 and 8
    for (int d = 1 ; d < g + 1 ; d++)
    {
        int j = g - d;
        for (; j > 0; j--) // to print the space from left
        {
            printf(" ");
        }
        for (int c = 0; c < 2 * d ; c++) // to print # after space
        {
            printf("#");
            if (c == d - 1)
            {
                printf("  ");// to make a gap between pyramid
            }

        }
        printf("\n");// this means new line
    }
}