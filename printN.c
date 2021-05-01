#include <stdio.h>
#include <time.h>
void printN(int N)
{
    if (N != 0)
    {
        printN(N - 1);
        //printf("%d\n",N);
    }
}
double duration;
clock_t start, stop;
int main()
{
    int N;
    scanf("%d", &N);
    start = clock();/* 开始计时 */
    printN(N);/* 被测函数 */
    stop = clock();/* 结束计时 */
    duration = ((double)(stop - start)) / CLK_TCK;
    printf("%f", duration);
    return 0;
}