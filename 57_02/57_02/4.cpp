  #include<stdio.h>
#include<windows.h>
#pragma warning  (disable:4996)

	int main()
	{
		int Arr[3] = { 0 };
		int i,j,num1;
		printf("请输入三个数：\n");
		for (i = 0; i < 3; i++)
		{
			scanf("%d ",&Arr[i]);
			
		}
		for (i = 0; i < 3; i++)
		{
			for (j = i+1; j < 3; j++)
			{
				if (Arr[j]>Arr[i])
				{
					num1 = Arr[j];
					Arr[j] = Arr[i];
					Arr[i] = num1;
				}
			}
		}
		for (i = 0; i <3; i++)
		{
			printf("%d ", Arr[i]);
		}

		system("pause");
		return 0;
	}
