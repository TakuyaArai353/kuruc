#include <stdio.h>

void minmax(int array[], int *min, int *max);

int main(void)
{
    int i = 0, array[10], min, max;

    printf("0~100の数を入力、-1で終了\n");
    do {
        printf("%d番目", i+1);
        scanf("%d", &array[i]);
        i++;
    } while (array[i - 1] != -1);

    minmax(array, &min, &max);

    printf("最小値:%d\n最大値:%d\n", min, max);
    return 0;
}

void minmax(int array[], int *min, int *max)
{
    int i = 0;

    *max = 0;
    *min = 100;

    while (array[i] != -1) {
        if (array[i] > *max) *max = array[i];
        if (array[i] < *min) *min = array[i];
        i++;
    }
    return;
}