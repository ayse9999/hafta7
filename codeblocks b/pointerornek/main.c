#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *sayi1, *sayi2;

    printf("1. say�y� giriniz");

    scanf("%d",&sayi1);

    printf("2. say�y� giriniz");

    scanf("%d", &sayi2);

    int toplam=0;
    toplam= *sayi1 + *sayi2;
    printf("Toplam=%d",toplam);

    return 0;
}
