#include <stdio.h>
#include <stdlib.h>
struct POINT{
    char adi;
    char soyadi;
    int numara;
    };
int main()
{
    struct POINT p;
    printf("adinizi giriniz:");
    scanf("%c \n",&p.adi);
    printf("soyadinizi giriniz:");
    scanf("%c \n",&p.soyadi);
    printf("numaranizi girin:");
    scanf("%d \n",&p.numara);
    return 0;
}


