#include <stdio.h>

/* 
求整数的逆序数，实例：输入：-12340,输出：-4321
 */
int reverse(int number)
{
    int x = 0;          //保存结果
    while (number != 0) //判断商是否等于0，如果不等于0则继续右移
    {
        x = x * 10 + number % 10; //结果先乘以10再加余数赋值给结果，舍去从低位到高位第一个非零位右边的0
        number /= 10;
    }
    return x; 
    
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", reverse(n));
    return 0;
}

/* 你的代码将被嵌在这里 */