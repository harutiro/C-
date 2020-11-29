#include<stdio.h>
#include<windows.h>
int tri(int,int);

int main(void)
{
	int side,high,square;
	
	scanf("%d,%d",&side,&high);
	printf("%d\n",tri(side,high));
	
    system("pause");
	return 0;
}

int tri(int side,int high)
{
	return side * high / 2;
}
