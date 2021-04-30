#include <stdio.h>

int shalou(int number,char sign){
    int n = 1;//存储沙漏三角形的行数；
    int x = 3;
    if(number!=0){
        number --;
    }else{
        return number;
    }    
    while(number>=2*x){
        number -= 2*x;
        x += 2;
        n++;
    }
    x -= 2;
    for(int j = 0;j<n;j++){
        for(int k = j;k>0;k--){
            printf(" ");
        }
        for(int i = x;i>0;i-- ){
            printf("%c",sign);
        }
        printf("\n");
        x-=2;
    }//打印上半部分。
    x+=2;
    for(int j = n-2;j>=0;j--){
        for(int k = j;k>0;k--){
            printf(" ");
        }
        for(int i = x+2;i>0;i--){
            printf("%c",sign);
        }
        printf("\n");
        x+=2;
    }//打印下半部分
    
    return number;
}
int main(){
    int number,remain;
    char sign;
    scanf("%d %c",&number,&sign);
    remain = shalou(number,sign);
    printf("%d",remain);
    
    return 0;
}