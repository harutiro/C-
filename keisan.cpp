#include <stdio.h>
#include <windows.h>
int main (void)
{
    int a,i,n,r;
    double n1,r1,ataiR=1,ataiP=1,ataiC=1;
    printf("\n~r!,nPr,nCrプログラム~\n");
    printf("========================================\n");
    printf("演算したい式を選択してください\n");
    printf("r!=1\n");
    printf("nPr=2\n");
    printf("nCr=3\n");
    printf("==>");
    scanf("%d",&a);
    if(a==1||a==2||a==3){
        
    }else{
        printf("error01:選択の範囲をはみ出しています\n\n");
        system("pause");
        return 0;
    }
    
    printf("========================================\n");
    if(a>1){
        printf("nを入力してください\n");
        printf("n==>");
        scanf("%d",&n);
        n1=n;
        printf("rを入力してください\n");
        printf("r==>");
        scanf("%d",&r);
        r1=r;
    }else{
        printf("rを入力してください\n");
        printf("r==>");
        scanf("%d",&r);
        r1=r;
    }
    printf("========================================\n");
    switch (a)
    {
    case 1:
         for ( i=r; i > 0; i--){
            ataiR=ataiR*i;
        }
        printf("%d!=%f \n",r,ataiR);
    break;
    
    case 2:
        for ( i = r; i > 0; i--){
            ataiP=ataiP*n1;
            n1--;
        }
        printf("%dP%d=%f\n",n,r,ataiP);
    break;    
    
    case 3:
        for ( i = r; i > 0; i--){
            ataiP=ataiP*n1;
            n1--;
        }
        for ( i=r; i > 0; i--){
            ataiR=ataiR*i;
        }
        ataiC=ataiP/ataiR;
        printf("%dC%d=%f\n",n,r,ataiC);
    break;

    default:
    printf("error03:switch文に思わぬ事故が発生しました\n");
        break;
    }
    
    printf("\n");
    system("pause");
    return 0;
    
}