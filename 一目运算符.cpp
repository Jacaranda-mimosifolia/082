#include<stdio.h>
int main()
{
	int x1=10,y1,x2=10,y2;
	y1=x1++;//后缀，先求值再运算 
	printf("y=x++;x=%d;y=%d\n",x1,y1);//y1=10
	y2=++x2;//前缀，先运算再求值 
	printf("y=++x;x=%d;y=%d\n",x2,y2);//y2=11
	return 0;
}
