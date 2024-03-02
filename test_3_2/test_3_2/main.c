#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{       //初始化    
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			continue;
		printf("for 循环,%d\n",i);

	}
		

	return 0;
}
//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != 'EOF')
//	{
//		if (ch <= '0' || ch >= '9')
//			continue;
//		//添加一行
//		putchar(ch);
//	}
//		
//	
//
//
//
//	return 0;
//}