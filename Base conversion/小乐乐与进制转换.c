#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void zh(int* q)
{
	int w = (*q);
	int e = (*q);
	if (w)
	{
		w %= 6;
		e /= 6;
		zh(&e);
		printf("%d", w);
	}
}
int main()
{
	int q = 0;
	scanf("%d", &q);
	zh(&q);//ʮ���Ʊ�Ϊ������
	return 0;
}