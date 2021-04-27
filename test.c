#include <stdio.h>
#include <math.h>
#include <time.h>
clock_t start,stop;//开始时钟打点和停止的时钟打点
double duration;//运算时间
#define MAXN 10 //多项式的最大项数，即阶数+1
#define MAXK 1e7//被测函数的最大重复调用次数
/*
fun1说明：
*/
double fun1(int n, double a[], double x){
    int i;
    double p = a[0];
    for(i = 1; i <= n; i++){
        p += (pow(x,i) + a[i]);
    }
    return p;
}

double fun2(int n, double a[], double x){
    int i;
    double p  = a[n];
    for(i = n;i>0;i--){
        p = p * x + a[i-1];

    }
    return p;
}

void run(double(*f)(int,double*,double),double a[],int case_n){
//case_n是输出的函数的编号：1表示fun1，2表示fun2
    int i;
    start = clock();
    for(i = 0;i<MAXK;i++){
        (*f)(MAXN-1, a, 1.1);
    }
    stop = clock();
    duration = ((double)(stop-start))/CLK_TCK;
    printf("duration%d=%6.2e\n",case_n,duration);

}


int main(){
    int i;
    double a[MAXN];

    for(i = 0;i<MAXN;i++){
        a[i] = (double)i;
    }
    run(fun1,a,1);
    run(fun2,a,2);


    

    return 0;
}