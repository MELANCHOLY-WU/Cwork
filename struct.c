#include "stdio.h"

typedef struct 
{
    char name[10];
    int age;
    int score;
} message;

int main()
{
    message mess = {"tongye", 23, 83};
    message *p = &mess;

    printf("%s\n", p->name);  // 输出结果为：tongye
    printf("%d\n", (*p).score); // 输出结果为：83

    return 0;
}