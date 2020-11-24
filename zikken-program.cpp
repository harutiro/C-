#include <stdio.h>
#include <windows.h>

void kusa (int);
void kaigyou (void);
void sasa (void);

int main (void){
   kusa(5);
   system("pause");
   return 0;
}

void kusa (int num){
   int i;
   for(i=num;i>0;i--){
      printf("‘");
   }
   kaigyou();
   return ;
}

void kaigyou(void){
   printf("\n");
   sasa();
   return ;
}

void sasa(void){
   printf("ù");
   sasa();
   return ;
}
