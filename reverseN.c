#include <stdio.h>

int reverse( int number ){
    int x = 0;
    while(number!=0){
        x = x*10+number%10;
        number/=10;
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