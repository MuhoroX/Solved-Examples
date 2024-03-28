#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int length = get_int("enter your average: ");
    int scores[length];
    int result = 0;

    for (int i = 0; i < length; i++)
    {
        scores[i] = get_int("enter your grade:");
        result += scores[i];
    }
    printf("you get: %f", result / (float)length);
}
