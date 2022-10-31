#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi[10]={12,213,334,425,563};

    printf("Sayilarimiz : 12,213,334,425,563");

    for(int i=0;i<10;i++)
    {
        for(int j=0;i<10;i++)
    }
    if(sayi[i]>sayi[i+1])
    {
        tut=sayi[i];
        sayi[i]=sayi[i+1];
        sayi[i+1]=tut;
    }

    printf("\n\nKucukten buyuge siralamasi :");

    for(i=0;i<10;i++)
    {
        printf("\n%d\t"i,sayi[i]);
    }
    return 0;
}
