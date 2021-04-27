#include <stdio.h>

int main(){

    int limit;
    int a[10];
    int max;
    int max_index;
    int i;
    scanf("%d",&limit);
    for(i = 0;i <limit;i++){
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i=0;i<limit;i++){
        if(a[i]>max){
            max = a[i];
            max_index = i;
        }
    }
    printf("%d %d",max,max_index);
    return 0;
}