#include <stdio.h>
#include <string.h>

int main(void)
{
    char fname[256], lname[256];

    // 名字を入力
    printf("名字：");
    scanf("%s", fname);

    // 名前を入力
    printf("名前：");
    scanf("%s", lname);

    // フルネームを表示
    strcat(fname, lname);
    printf("%s\n", fname);

    return 0;
}