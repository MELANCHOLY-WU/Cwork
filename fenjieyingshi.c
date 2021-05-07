#include <stdio.h>
int a[100],n,flag = 0;
void f(int len,int pos,int next){
    if(pos+next>n){
        return;
    }
    a[len++] = next;
    if(pos+next == n){
        printf("%d=",n);
        for(int i = 0;i<len;i++){
            if(i == 0){
                printf("%d",a[i]);
                
            }else{

                printf("+%d",a[i]);
            }
        }
        if(++flag%4==0||next==n){
            printf("\n");
        }else{
            printf(";");
        }
    }
    if(pos+next<n){
        pos+= next;
        for(int i = next;i<n-pos;i++){
            f(len,pos,i);
        }
    }
    
    
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i  = 1;i<=n/2;i++){
        f(0,0,i);
    }
    f(0,0,n);

    return 0;

}