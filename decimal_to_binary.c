#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int number = get_int("Type the number for binary conversion: ");

    if (number==0)
    {
        printf("Binary digit: 0\n");
    }

    int variable = number;
    int value[number];


    printf("Binary number: ");

    for (int i = number; i>0; i-=1)
    {
        value[number-i] = (int)pow(2.0,(float)(number-i));
    }

    while (variable != 0)
    {
        for (int y = 0; y < number; y++)
        {
            int digit = value[number-y-1];

            if (digit<=number)
            {
                if (variable%digit == 0 && variable/digit == 1)
                {
                    printf("1");
                    variable = 0;
                }
                else if (variable/digit == 1)
                {
                    printf("1");
                    variable = variable - digit;
                }
                else if (variable<digit)
                {
                    printf("0");
                }
            }
        }
    }
    printf("\n");
}
