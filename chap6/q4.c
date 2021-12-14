#include <stdio.h>

int main(void)
{
    int teika;
    printf("定価を入力：");
    scanf("%d", &teika);

    // 1割引、3割引、5割引、8割引、の表示
    printf("1:%d\n3:%d\n5:%d\n8:%d\n", (int)(teika*0.9), (int)(teika*0.7), (int)(teika*0.5), (int)(teika*0.2));
    return 0;
}