#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dizi[5];
    int toplam=0;


    for(int i=0;i<5;i++){

    printf("Dizinin %d eleman�n� girin", i);
    scanf("%d", &dizi[i]);


}
    for(int=0;i<5;i++){
    toplam+=dizi[i];

    printf("Dizinin %d eleman %d ",i+1, dizi[i]);
    printf("Say�lar�n toplamlar� %d",toplam);
    }
    return 0;
}

