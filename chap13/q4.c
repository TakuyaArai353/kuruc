#include <stdio.h>

int main(void)
{
    int i;
    int array[10];

    for (i=0; i < sizeof(array) / sizeof(array[0]); i++) {
        scanf("%d", &array[i]);
    }

    // printf("%d\n", (int)(sizeof(array) / sizeof(array[0])));

    for (i=9; i>=0; i--) {
        printf("%d\n", array[i]);
    }
        
    return 0;
}