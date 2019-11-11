#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)

int main()
{
	//int Arr[10] = { 0 };
	//int i = 0;
	//int j = 0;
	//int max = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	scanf("%d", &Arr[i]);
	//	/*printf("%d ", Arr[i]);*/
	//}
	//for (j = 0; j < 10; j++)
	//{
	//	if (max < Arr[j])
	//		max = Arr[j];
	//}
	//printf("%d ", max);

	{
		int arr[10] = { 1, 22, 30, 4, 51, 6, 7, 81, 9, 10 };
		int max = 0;
		int i = 0;
		for (i = 1; i<sizeof(arr) / sizeof(arr[0]); i++)
		{
			scanf("%d", &arr[i]);
		}
		max = arr[0];
		for (i = 1; i<sizeof(arr) / sizeof(arr[0]); i++)
		{
			if (max<arr[i])
			{
				max = arr[i];
			}
		}
		printf("%d", max);
		
	}
	

	system("pause");
	return 0;
}