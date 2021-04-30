#include <stdio.h>
/* 
通过三次逆转实现数组移动
 */
void moveArray(int a[], int N, int M)
{
    int i, j, temp;
    while(M>=N){
        M-=N;
    }
    for (i = 0, j = N - M - 1; i < j; i++, j--)
    {        
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    } //a0～an-m-1逆序；
    for (i = N - M, j = N-1; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    } //an-m～an逆序；
    for (i = 0, j = N-1; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    } //a0～an逆序；
}

int main()
{
    int N, M,i;
    int a[100];
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    moveArray(a, N, M);
    for (i = 0; i < N-1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d",a[i]);
    return 0;
}