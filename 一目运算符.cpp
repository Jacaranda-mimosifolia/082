#include<stdio.h>
int main()
{
	int x1=10,y1,x2=10,y2;
	y1=x1++;//��׺������ֵ������ 
	printf("y=x++;x=%d;y=%d\n",x1,y1);//y1=10
	y2=++x2;//ǰ׺������������ֵ 
	printf("y=++x;x=%d;y=%d\n",x2,y2);//y2=11
	return 0;
}
