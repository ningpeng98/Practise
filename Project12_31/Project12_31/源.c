#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int search = 0;
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("输入需要查找的数：");
	scanf("%d", &search);
	if ((search < arr[0][0]) || (search > arr[2][2]))
	{
		printf("%d不在数组中！\n", search);
	}
	else
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (search == arr[i][j])
					printf("%d在数组的第%d行第%d列！", search, i + 1, j + 1);
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}