#include <stdio.h>
#include <stdlib.h>

int main()
{
    int*ip,id;
    id=21;
    ip=&id;
    printf("id de�i�ken de�eri:%d\n",id);
    printf("id de�i�ken de�eri:%d\n",*ip);
    printf("id de�i�ken bellek adresi:%p\n",&id);
    printf("id de�i�ken belek adresi:%p",ip);
    return 0;
}
