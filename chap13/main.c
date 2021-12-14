#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;

    int array1[] = {23, 45, 56, 34, 26};
    int array2[] = {1, 2, 3, 4, 5};

    for (i=0; i < sizeof(array2) / sizeof(array2[0]); i++) {
        printf("%d\n", array2[i]);
    }
    
    memcpy(array2, array1, sizeof(array1));

    for (i=0; i < sizeof(array2) / sizeof(array2[0]); i++) {
        printf("%d\n", array2[i]);
    }

    return 0;
}