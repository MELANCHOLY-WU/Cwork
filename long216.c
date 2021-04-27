#include <stdio.h>
#define MAXN 10
/*
采用递归方式解题，使用整除取余法将十进制转化为十六进制
*/
void f2(long int x,char *p){
    static int i = 0;//静态局部变量i用于存储整除次数
    static int j = 0;//静态局部变量j用于存储整除次数
    long int n;//余数
    
    if(x>=0){
        if(x>=16){
        i++;
        j=i;       
        f2(x/16, p); //递归主要用于求出整除次数，即十进制数的位数，用i进行存储     
    }
    
    n = x%16;
    p = p+j-i;//指针指向对应的位置
    if(n<10){
        
        *p = (char)(n+48);//余数是整型，加上48再转字符形式才是对应的数的字符形式

        
    }else{
        switch(n){
            case 10:*p='A';break;
            case 11:*p='B';break;
            case 12:*p='C';break;
            case 13:*p='D';break;
            case 14:*p='E';break;
            case 15:*p='F';break;
            default:printf("error");break;
        }
    }
    i--;//递归出栈一次i递减一次,
    }else{
        x = -x;
        i = 1;
        *p = '-';
        p = p+1;
        if(x>=16){
        i++;
        j=i;       
        f2(x/16, p);       
    }
    
    n = x%16;
    p = p+j-i;
    if(n<10){
        
        *p = (char)(n+48);

        
    }else{
        switch(n){
            case 10:*p='A';break;
            case 11:*p='B';break;
            case 12:*p='C';break;
            case 13:*p='D';break;
            case 14:*p='E';break;
            case 15:*p='F';break;
            default:printf("error");break;
        }
    }
    i--;
    }

}

void f( long int x, char *p ){
    int i;
    int n;
    if(x>0){
        i = 0;
        for(x;x>0;x=x/16){
            n = x%16;
            if(n<=9){
                *(p+i) = (char)(n+48);
            }else{
                switch(n){
                    case 10:*(p+i)='A';break;
                    case 11:*(p+i)='B';break;
                    case 12:*(p+i)='C';break;
                    case 13:*(p+i)='D';break;
                    case 14:*(p+i)='E';break;
                    case 15:*(p+i)='F';break;
                    default:printf("error");break;

                }
            }
            i++;
        }
    }
    else if(x == 0){
        *p = (char)48;

    }
    else{
        i = 1;
        *p = '-';
        x = -x;
        for(x; x > 0; x = x/16){
            n = x % 16;
            if(n<=9){
                *(p+i) =(char)(n+48);
            }else{
                switch(n){
                    case 10:*(p+i)='A';break;
                    case 11:*(p+i)='B';break;
                    case 12:*(p+i)='C';break;
                    case 13:*(p+i)='D';break;
                    case 14:*(p+i)='E';break;
                    case 15:*(p+i)='F';break;
                    default:printf("error");break;

                }
            }
            i++;
        }
    }
}

int main()
{
    long int x;
    char s[MAXN] = "";

    scanf("%ld", &x);
    f3(x, s);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */