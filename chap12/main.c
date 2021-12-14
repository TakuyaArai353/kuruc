#include <stdio.h>

int public;

int main(void)
{
    int hoge;
    static int stat;

    printf("%d\n", public);
    printf("%d\n", hoge);
    printf("%d\n", stat);
    return 0;
}