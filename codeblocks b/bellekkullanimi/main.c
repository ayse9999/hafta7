#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ip;

    ip = (int*) malloc (sizeof(int));

    *ip=126;

    printf("Tahsis edilen bellek adres ba�lang�c�: %p\n", ip);

    printf("Tahsis edilen bellekteki de�i�ken de�eri: %d", *ip);

    free(ip);


    return 0;
}
