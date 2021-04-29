#include <stdio.h>

int main()
{
    int var_runoob = 10;
    int *p; // 定义指针变量
    p = &var_runoob;
    int x;
    scanf("%d", &x);
    printf("var_runoob 变量的地址： %p\n", p);
    printf("%d", *p);
    return 0;
}
/*
%d 十进制有符号整数
%u 十进制无符号整数
%f 浮点数
%s 字符串
%c 单个字符
%p 指针的值
%e 指数形式的浮点数
%x, %X 无符号以十六进制表示的整数
%o 无符号以八进制表示的整数
%g 把输出的值按照 %e 或者 %f 类型中输出长度较小的方式输出
%p 输出地址符
%lu 32位无符号整数
%llu 64位无符号整数
*/