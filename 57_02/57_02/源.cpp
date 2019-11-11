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

	//**********************Ã°ÅÝÅÅÐò
	int Arr[10] = { 0 };
	int i, j, temp;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &Arr[i]);
	}

	for (i = 0; i < 10; i++)
	{
		for (j = i+1; j < 10; j++)
		{
			
			if (Arr[j]>Arr[i])
			{
				temp = Arr[j];
				Arr[j] = Arr[i];
				Arr[i] = temp;
			}

		}
	
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", Arr[i]);
	}
	system("pause");
	return 0;
}