#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string(" enter your name: ");
    int length = 0;
    for(int x = 0; name[x] != '\0'; x++){
        length++;
    }

    printf("%i \n", length);

}
