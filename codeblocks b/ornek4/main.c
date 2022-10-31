#include <stdio.h>
#include <stdlib.h>

int main()
{
    int*ip,id;
    id=21;
    ip=&id;
    printf("id deðiþken deðeri:%d\n",id);
    printf("id deðiþken deðeri:%d\n",*ip);
    printf("id deðiþken bellek adresi:%p\n",&id);
    printf("id deðiþken belek adresi:%p",ip);
    return 0;
}
