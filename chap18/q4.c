#include <stdio.h>

int olympic(int year);

enum {
    OLYMPIC_NON,
    OLYMPIC_SUMMER,
    OLYMPIC_WINTER
};

int main(void)
{
    int year, hold;

    scanf("%d", &year);
    hold = olympic(year);

    switch (hold) {
        case OLYMPIC_NON:
            printf("no\n");
            break;
        case OLYMPIC_SUMMER:
            printf("summer\n");
            break;
        case OLYMPIC_WINTER:
            printf("winter\n");
            break;
    };

    return 0;
}

int olympic(int year)
{
    if (year % 2 ==0) {
        if (year % 4 == 0) {
            return OLYMPIC_SUMMER;
        } else {
            return OLYMPIC_WINTER;
        }
    } else {
        return OLYMPIC_NON;
    }
}