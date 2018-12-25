#define _CRT_SECURE_NO_WARNINGS 1
//运动会排名（for循环）
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A = 1, B = 2, C = 3, D = 4, E = 5;
	for (A = 1; A <= 5; A++);
	{
		for (B = 1; B <= 5; B++);
		{
			for (C = 1; C <= 5; C++);
			{
				for (D = 1; D <= 5; D++);
				{
					for (E = 1; E <= 5; E++);
					{
						if (((B == 2 && A != 3) || (B != 2 && A == 3) == 1) && ((B == 2 && E != 4) || (B != 2 && E == 4) == 1) && ((C == 1 && D != 2) || (C != 1 && D == 2) == 1) && ((C == 5 && D != 3) || (C != 5 && D == 3) == 1) && ((E == 4 && A != 1) || (E != 2 && A == 1) == 1))

						{
							;
						}
					}
				}
			}
		}
	}
	printf("a=%d b=%d c=%d d=%d e=%d \n", A, B, C, D, E);
	system("pause");
	return 0;
}
