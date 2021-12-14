#include <stdio.h>

// struct Student {
//     int year;   /* 学年 */
//     int clas;   /* クラス */
//     int number;   /* 出席番号 */
//     char name[64];   /* 名前 */
//     double stature;   /* 身長 */
//     double weight;   /* 体重 */
// };

typedef struct {
    int year;   /* 学年 */
    int clas;   /* クラス */
    int number;   /* 出席番号 */
    char name[64];   /* 名前 */
    double stature;   /* 身長 */
    double weight;   /* 体重 */
} Student;

int main(void)
{
    // struct student data;
    Student data;
    data.year = 10;

    printf("%d\n", data.year);
    return 0;
}