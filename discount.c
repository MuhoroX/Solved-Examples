#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

float discount(float regular , float indirim){ // فونكسيون يستقبل الخصم وسعر الزبون
    return regular * (100-indirim)/100; // السعر ضرب الخصم
}

int main(void) // خصومات 
{
    float regular = get_float(" enter your regular price: " );
    float indirim = get_float(" lutfen idiriniz yaz: ");
    printf("%.2f", discount(regular,indirim));

}