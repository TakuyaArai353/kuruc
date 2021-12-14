#include <stdio.h>

int main(void)
{
    int soft_drink=198, milk=138;

    printf("%d\n",(int)(1000 - (soft_drink*1.05 + (milk*1.05)*2)));

    return 0;
}