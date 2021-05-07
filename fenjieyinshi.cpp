#include<stdio.h>
#include<iostream>
using namespace std;
int flag = 0, n, a[35];
void f(int len, int pos, int next)
{
    if (pos + next > n)return;                    //如果值大于N就没有继续的必要了

    a[len++] = next;                //保存路径
    
    if (pos+next == n){

        cout << n << "=";
        for (int i = 0; i < len; i++){
            if (i == 0)    cout << a[i];
            else cout << "+" << a[i];
        }
        
        
        if (++flag % 4 == 0||next == n)cout << endl;        //每输出四个一次回车
        else cout << ";";                                                    //每行输出最后一个不带分号
    }

    if (pos + next < n)
    {
        pos += next;
        for (int i = next; i <= n - pos; i++)//根据规律得出后面的i>=next
            f(len, pos, i);
    }
    
}
int main()
{
    
    cin >> n;
    for (int i = 1; i <= n / 2; i++)        //i小于n/2,防止7=3+4、7=4+3该类情况
        f(0, 0, i);
    f(0, 0, n);                    //7=7的时候特殊处理    

    return 0;
}