#include <stdio.h>
#include <windows.h>
int main(void){
    long a,a1,b,b1,c,max=1;
    printf("~最大公約数と最小公倍数のプログラム~\n");
    printf("========================================================\n");
    printf("一番目の数字を入力してください\n");
    printf("�@==>");
    scanf("%d",&a);
    printf("二番目の数字を入力してください\n");
    printf("�A==>");
    scanf("%d",&b);
    printf("========================================================\n");
    if(a>b){
        c=a;
        a=b;
        b=c;
    }
    a1=a;
    b1=b;
    while(1){
        if(a1<b1)
        a1=a1+a;
        if(a1>b1)
        b1=b1+b;
        if(a1==b1){
            printf("%dと%dの最小公倍数は%dです\n",a,b,a1);
            break;
        }
    }
    for(c=2;c<=a1;c++){
        if(a%c==0){
            if(b%c==0){
                
                max=c;
            }
        }
    }
    if(max>1){
        printf("%dと%dの最大公約数は%dです\n",a,b,max);
    }else{
        printf("%dと%dの最大公約数は1です\n",a,b);
    }
    
    
    


    
    printf("\n");
    system("pause");
    return 0;
}