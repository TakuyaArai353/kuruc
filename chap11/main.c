#include <stdio.h>

int sum(int,int); /* プロトタイプ宣言 */

int main(void)
{
    int value;
    value = sum(50, 100);
    printf("%d\n", value);
    return 0;
}

int sum(int min, int max)
{
    int num;
    printf("%d+%d\n", min, max);
    num = min + max;
    return num;
}