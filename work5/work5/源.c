#define _CRT_SECURE_NO_WARNINGS 1
////1.��ɲ�������Ϸ�� 
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("****** 1.��ʼ��Ϸ  *******\n");
//	printf("****** 0.�˳���Ϸ  *******\n");
//	printf("**************************\n");
//}
//void game()
//{
//	int random_num=rand()%100+1;
//	int input = 0;
//	while (1)
//	{
//		printf("���������֣�");
//		scanf("%d",&input);
//		if (input > random_num)
//		{
//			printf("�´���!\n");
//		}
//		else if(input < random_num)
//		{
//			printf("��С��!\n");
//		}
//		else
//		{
//			printf("�����ˣ�\n");
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
//			printf("��ѡ��;");
//			scanf("%d",&input);
//			switch (input)
//			{
//			    case 1:
//					game();
//				case 0:
//					break;
//				default:
//					printf("����������������룡\n");
//					break;
//
//			}
//		} while (input);
//		system("pause");
//		return 0;
//	}
	

//2.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ�������-1.���۰���ң� 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	printf("������Ҫ���ҵ�����;");
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
		printf("%d���±�Ϊ:%d\n",num,right);
	}
	else
	{
		printf("�Ҳ���!\n");
	}
	system("pause");
	return 0;
}
