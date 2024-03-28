#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = "ah5me3d";
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] >= 48 && name[i] <= 57)
        {
            printf("the number %c found in the %i loop\n ", name[i], i);
        }
    }
}
