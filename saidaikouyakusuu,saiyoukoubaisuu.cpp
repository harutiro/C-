#include <stdio.h>
#include <windows.h>
int main(void){
    long a,a1,b,b1,c,max=1;
    printf("~Å‘åŒö–ñ”‚ÆÅ¬Œö”{”‚ÌƒvƒƒOƒ‰ƒ€~\n");
    printf("========================================================\n");
    printf("ˆê”Ô–Ú‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    printf("‡@==>");
    scanf("%d",&a);
    printf("“ñ”Ô–Ú‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    printf("‡A==>");
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
            printf("%d‚Æ%d‚ÌÅ¬Œö”{”‚Í%d‚Å‚·\n",a,b,a1);
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
        printf("%d‚Æ%d‚ÌÅ‘åŒö–ñ”‚Í%d‚Å‚·\n",a,b,max);
    }else{
        printf("%d‚Æ%d‚ÌÅ‘åŒö–ñ”‚Í1‚Å‚·\n",a,b);
    }
    
    
    


    
    printf("\n");
    system("pause");
    return 0;
}