#define _CRT_SECURE_NO_WARNINGS 1
////1.完成猜数字游戏。 
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("****** 1.开始游戏  *******\n");
//	printf("****** 0.退出游戏  *******\n");
//	printf("**************************\n");
//}
//void game()
//{
//	int random_num=rand()%100+1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入数字：");
//		scanf("%d",&input);
//		if (input > random_num)
//		{
//			printf("猜大了!\n");
//		}
//		else if(input < random_num)
//		{
//			printf("猜小了!\n");
//		}
//		else
//		{
//			printf("猜中了！\n");
//			break;
//		}
//	}
//}
//   int main()
//	{
//		int input = 0;
//		srand((unsigned)time(NULL));
//		do
//		{
//			menu();
//			printf("请选择;");
//			scanf("%d",&input);
//			switch (input)
//			{
//			    case 1:
//					game();
//				case 0:
//					break;
//				default:
//					printf("输入错误，请重新输入！\n");
//					break;
//
//			}
//		} while (input);
//		system("pause");
//		return 0;
//	}
	

//2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回-1.（折半查找） 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	printf("请输入要查找的数字;");
	scanf("%d",&num);
	int left = 0;
	int right = (sizeof(arr) / sizeof(arr[0]))-1;
	int mid = (left + right) / 2;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > num)
		{
			right = mid - 1;
		}
		else if (arr[mid] < num)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left <= right)
	{
		printf("%d的下标为:%d\n",num,right);
	}
	else
	{
		printf("找不到!\n");
	}
	system("pause");
	return 0;
}
