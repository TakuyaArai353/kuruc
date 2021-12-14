#include <stdio.h>

int main(void)
{
    int score;

    printf("点数を入力：");
    scanf("%d", &score);
    
    if (score > 100) {
        printf("点数を修正します。\n");
        score = 100;
    }

    printf("%d\n", score);
    return 0;
}