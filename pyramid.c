#include <stdio.h>
#include <cs50.h>

int  pyramid(int raws){
    int y = 0;
    for(int i = 0; i < raws; i++){
        for(int x = i; x < raws; x++){
            printf(" ");
        }
        for(int u = 0; u <= i + y; u++){
            printf("*");
        }
        printf("\n");
        y++;
    }
     return 0;
}
int main(void) // رسم هرم بستخدام فونكسيون
{
    pyramid(6);

}