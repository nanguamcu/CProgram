#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 1;
	int sum = 0;

	
	for (n = 1; n <= 10; n++)
	{
		
		m *= n;
		
		sum += m;

	}

	printf("%d\n", sum);


	return 0;

}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int m = 1;
//	int sum = 0;
//
//	//printf("输入数字n\n");
//	//scanf("%d", &n);
//	for (n = 1; n <= 10; n++)
//	{
//		m = 1;
//		for (i = 1; i <=n; i++)
//				{
//					m *= i ;
//				}
//		sum += m;
//
//	}
//		
//		printf("%d\n", sum);
//	
//	
//	return 0;
//
//}
//n的阶乘
//int main()
//{
//	int i,n, m=1;
//
//	printf("输入数字n\n");
//	scanf("%d", &n);
//		for (i = 1; i <=n; i++)
//		{
//			m *= i ;
//		}
//		printf("%d\n", m);
//	
//	
//	return 0;
//
//}