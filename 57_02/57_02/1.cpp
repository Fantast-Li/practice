#include<stdio.h>
#include<windows.h>
//���������������ְ취
//int main()
//{
//	int num1 = 3;
//	int num2 = 4;
//	int t;
//	printf("num1=%d num2=%d\n", num1, num2);
//	t = num1;
//	num1 = num2;
//	num2 = t;
//	printf("num1=%d num2=%d\n", num1, num2);
//
//	system("pause");
//	return 0;


//
//int main()
//{
//	int num1 = 3;
//	int num2 = 4;
//	int t;
//	printf("num1=%d num2=%d\n", num1, num2);
//	num2 = num1 + num2;
//	num1 = num2 - num1;
//	num2 = num2 - num1;
//	printf("num1=%d num2=%d\n", num1, num2);
//
//	system("pause");
//	return 0;




int main()
{
	int num1 = 3;
	int num2 = 4;
	int t;
	printf("num1=%d num2=%d\n", num1, num2);
	num1 = num1^num2;//����1�� 0^0=0��0^1=1 0����κ������κ���
	num2 = num2^num1;//��2�� 1 ^ 0 = 1��1 ^ 1 = 0 1����κ������κ���ȡ��
	num1 = num1^num2;//��3�� �κ�������Լ������Լ���0
	printf("num1=%d num2=%d\n", num1, num2);
	system("pause");
	return 0;
}