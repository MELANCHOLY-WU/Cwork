#include <stdio.h>
void zhuangxiang(int a[],int n){

    int b[n];
    int sum = 0,x = 0;
    for(int i = 0;i<n;i++){
        b[i] = 0;
        for(int j = 0;j<=sum;j++){
            if(b[j]+a[i]<=100){
                sum++;
                b[j] = b[j]+a[i];
                printf("%d %d\n",a[i],j+1);
                break;
            }
        }
    }
    for(int i=0;i<sum;i++){
        if(b[i]==0){
            break;
        }
        x++;
        
    }
    printf("%d",x);
    return;
    
}
int main(){
    int n,a[1000];
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    zhuangxiang(a,n);
    return 0;
}