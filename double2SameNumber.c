#include <stdio.h>


void isSame1(char str[]){
    int num1[20],num2[20],num3[21];
    int i = 0;
    while(str[i]!='\0'){
        num1[i] = str[i]-'0';
        i++;
    }
    int c = 0;
    for(int j = i-1;j>=0;j--){
        if(num1[j]*2+c>=10){           
            num2[j] = (num1[j]*2+c)%10;
            c = 1;
        }else{
            num2[j] = num1[j]*2+c;
            c =0;
        }
        num3[j] = num2[j];
    }
    if(c == 1){
        printf("No\n");
        printf("1");
        for(int k = 0;k<i;k++){
            printf("%d",num3[k]);
        }
        return;
    }
    int temp;
    for (int k = 0; k < i-1 ; k++)
    {
        for (int p = k + 1; p < i; p++)
        {
            if (num1[p] < num1[k])
            {
                temp = num1[p];
                num1[p] = num1[k];
                num1[k] = temp;
            }
            if (num2[p] < num2[k])
            {
                temp = num2[p];
                num2[p] = num2[k];
                num2[k] = temp;
            }
        }
    }
    for (int k = 0; k < i; k++)
    {
        if (num1[k] != num2[k])
        {
            printf("No\n");
            for(int k = 0;k<i;k++){
                printf("%d",num3[k]);
            }
            return;
        }
    }

    printf("Yes\n");
    for(int k = 0;k<i;k++){
        printf("%d",num3[k]);
    }
    return;


}
int main()
{
    char str[20];
    scanf("%s", &str);
    isSame1(str);
    return 0;
}