#include<stdio.h>	
int main(void)
{
	int a[10];
	int temp;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 9; i++)//ֻҪ��8�����ˣ���Ϊi=9�Ļ�j=10���˷�һ��ѭ��
	{
		for (int j = i+1; j < 10; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}