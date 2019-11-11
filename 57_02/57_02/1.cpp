#include<stdio.h>
#include<windows.h>
//交换二个数的三种办法
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
	num1 = num1^num2;//　（1） 0^0=0，0^1=1 0异或任何数＝任何数
	num2 = num2^num1;//（2） 1 ^ 0 = 1，1 ^ 1 = 0 1异或任何数－任何数取反
	num1 = num1^num2;//（3） 任何数异或自己＝把自己置0
	printf("num1=%d num2=%d\n", num1, num2);
	system("pause");
	return 0;
}