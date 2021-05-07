#include <stdio.h>
#include <math.h>

int main(){
    long int n,m;
    int count;
    int flag = 1;
    m = sqrt(n);
    scanf("%ld",&n);
    printf("%ld=",n);
    for(int i = 2;i<=m;i++){

        
            count  = 0;
            while(n%i==0){
                n = n/i;
                flag =  0;
                count++;
            }
            if(count>=1){
                if(count>1){
                    printf("%d^%d",i,count);
                }else{
                    printf("%d",i);
                }
                if(n!=1){
                    printf("*");
                }
            }
            
        
        
    }
    if(flag){
        printf("%d",n);
    }

    return 0;
}