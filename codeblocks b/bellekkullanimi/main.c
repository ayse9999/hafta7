#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ip;

    ip = (int*) malloc (sizeof(int));

    *ip=126;

    printf("Tahsis edilen bellek adres baþlangýcý: %p\n", ip);

    printf("Tahsis edilen bellekteki deðiþken deðeri: %d", *ip);

    free(ip);


    return 0;
}
