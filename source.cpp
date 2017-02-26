#include<stdio.h>
#include<stdlib.h>

int s1, s2, s3;

int vs(int a, int b, int c)
{
	int v;
	v = a*b*c;
	s1 = a*b;
	s2 = b*c;
	s3 = c*a;

	return v;
}

int main(void)
{
	int v, l, w, h;
	printf("\n Please input length,width,hight\n");
	scanf_s("%d%d%d", &l, &w, &h, 3);

	v = vs(l, w, h);
	printf("\nv=%d,s1=%d,s2=%d,s3=%d\n", v, s1, s2, s3);
	system("pause");


}

#这个是一保测试程序,输入长宽高然后计算出三个面的面积和体积.