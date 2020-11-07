#include <stdio.h>
#include <windows.h>

#define A 997654321
#define B 107654321
#define D  10000000

int main(void){
    long p,n;
   
    for(p=A;p>=B;p-=D){
        for(n=3;n*n<=p;n+=2){
            if(p%n==0){
                n=0;
                break;
            }
        }
        if(n!=0){
            printf("%d\n",p);
        }

    }
    system("pause");
    return 0;

}