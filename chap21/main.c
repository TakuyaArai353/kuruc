#include <stdio.h>

int main(void)
{
    char str[32];

    fgets(str, sizeof(str), stdin);
    puts(str);

    return 0;
}