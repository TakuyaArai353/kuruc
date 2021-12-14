#include <stdio.h>
#include <string.h>

typedef struct {
    char name[256];
    int age;
    int sex;
} People;

void inputPeople(People *data);
void outputPeople(People data);

int main(void)
{
    People data[3];
    int i;

    for (i=0; i < 3; i++) {
        inputPeople(&data[i]);
    }

    for (i=0; i < 3; i++) {
        outputPeople(data[i]);
    }

    return 0;
}

void inputPeople(People *data)
{
    printf("名前：");
    scanf("%s", data->name);
    printf("年齢：");
    scanf("%d", &data->age);
    printf("性別(男:1,女:2)：");
    scanf("%d", &data->sex);

    printf("\n");
    return;
}

void outputPeople(People data)
{
    char sex[16];

    printf("名前：%s\n", data.name);
    printf("年齢：%d\n", data.age);

    if (data.sex == 1) {
        strcpy(sex, "男性");
    } else {
        strcpy(sex, "女性");
    }

    printf("性別：%s\n", sex);

    printf("\n");

    return;
}