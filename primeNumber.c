#include <stdio.h>
#include <math.h>

/* 
判断是否是素数，是返回1，不是返回0；
 */
int isPrimeN(int number){
    for(int i = 2;i<=sqrt(number);i++){
        if(number%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int N,sum=0;
    scanf("%d",&N);
    for(int i = 3;i<=N-2;i+=2){
        if(isPrimeN(i) == 1&&isPrimeN(i+2) == 1){
            sum += 1;
        }
    }
    printf("%d",sum);

    return 0;
}