#include <stdio.h>

int olympic(int);

int main(void)
{
    int year, hold;

    scanf("%d", &year);
    
    hold = olympic(year);
    switch (hold) {
        case 0:
            printf("no\n");
            break;
        case 1:
            printf("夏季オリンピック\n");
            break;
        case 2:
            printf("冬季オリンピック\n");
            break;
    };
    return 0;
}

int olympic(int year)
{
    if (year%2 == 0) {
        if (year%4 == 0) {
            return 1;
        } else {
            return 2;
        }
    } else {
        return 0;
    }
}