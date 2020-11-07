#include <stdio.h>
#include <windows.h>

int main(int argc,char** argv){
    int a,b,c;

    argv++;
    a=atoi(*argv++);
    sscanf(*argv++,"%d",&b);
    sscanf(*argv,"%d",&c);
    printf("a=%.1f\n",(a+b+c)/3.0);

    system("pause");
    return 0;

}
