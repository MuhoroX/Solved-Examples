#include <stdio.h>
#include <cs50.h>
#include <string.h>

void swap(int* a, int* b){
    int temp = *a; //ناهذ القيمة من البوينتر
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 1;
    int y = 2;

    swap(&x, &y); //نرسل الداتا نفسها 
    printf("x: %i\n", x);
    printf("y: %i\n", y);
}
