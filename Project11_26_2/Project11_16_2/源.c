#define _CRT_SECURE_NO_WARNINGS 1
//∑«µ›πÈ«Ûn^k
#include<stdio.h>
#include<stdlib.h>
int N_K(int n, int k)
{
	int i = 1;
	int j = 1;

	/*while (k-- > 0)
		i *= n;
	return i;*/

	for (i = 1; i <= k;i++)
	{
		j = j*n;
	}
	return j;
}

int main()
{
	int n = 0;
	int k = 0;
	printf(" ‰»În,k:");
	scanf("%d%d", &n,&k);
	printf("%d,%d\n",n,k);
	int ret = N_K(n,k);
	printf("%d^%d = %d",n,k,ret);
	system("pause");
	return 0;
}