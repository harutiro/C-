#include <stdio.h>
#include <windows.h>
int main(void){
    long a,a1,b,b1,c,max=1;
    printf("~�ő���񐔂ƍŏ����{���̃v���O����~\n");
    printf("========================================================\n");
    printf("��Ԗڂ̐�������͂��Ă�������\n");
    printf("�@==>");
    scanf("%d",&a);
    printf("��Ԗڂ̐�������͂��Ă�������\n");
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
            printf("%d��%d�̍ŏ����{����%d�ł�\n",a,b,a1);
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
        printf("%d��%d�̍ő���񐔂�%d�ł�\n",a,b,max);
    }else{
        printf("%d��%d�̍ő���񐔂�1�ł�\n",a,b);
    }
    
    
    


    
    printf("\n");
    system("pause");
    return 0;
}