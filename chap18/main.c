#include <stdio.h>

#define TAX = 0.10
#define PRINT_HELLO printf("Hello\n")
#define INT_PRINT(X) printf("%d\n", X)

enum {
    ENUM_0,
    ENUM_5 = 5,
    ENUM_6,
    ENUM_7,
    ENUM_10
};

int main(void)
{
    const double PI = 3.14;

    PRINT_HELLO;
    INT_PRINT(100);

    return 0;
}