#include<stdio.h>
int main(void)
{
	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
	printf("%d,%d\n", a, *a);//a����ָ�룬*a����ָ��
	printf("%d,%d\n", a[0], *(a + 0));//������ָ��
	printf("%d,%d\n", &a[0], &a[0][0]);//a+0 ,*(a+0)+0 ��ַһ����ָ������Ͳ�ͬ
	printf("%d,%d\n", a[1], a + 1);//*(a+1)��ָ�� (a+1)��ָ��
	printf("%d,%d\n", &a[1][0], *(a + 1) + 0);//*(a+1)+0��ָ�� 
	printf("%d,%d\n", a[2], *(a + 2));//*(a+2)��ָ��
	printf("%d,%d\n", &a[2], a + 2);//a+2 ��ָ��
	printf("%d,%d\n", a[1][0], *(*(a + 1) + 0));//��ָ��
	printf("%d,%d\n", a[2], *(*(a + 2) + 0));//*(a+2)��ָ�� a[2][2]��ָ��
	return	0;
}
/*
���н��
9698508, 9698508
9698508, 9698508
9698508, 9698508
9698524, 9698524
9698524, 9698524
9698540, 9698540
9698540, 9698540
9, 9
9698540, 17
*/