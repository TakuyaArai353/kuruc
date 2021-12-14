#include <stdio.h>

int main(void)
{
    FILE *file;

    file = fopen("test.csv", "w");

    fprintf(file, "番号,名前,テストの平均点\n");
    fprintf(file, "1,のび太,0\n");
    fprintf(file, "2,しずか,80\n");
    fprintf(file, "3,スネ夫,60\n");

    fclose(file);

    return 0;
}