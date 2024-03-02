#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", password);
	while(getchar()!='\n');
	printf("请确认（Y/N）:");
	ret = getchar();
	if (ret == 'Y')
		printf("确认成功\n");
	else
		printf("放弃确认\n");
		//int ch = 0;
	////EOF end of file 文件结束标志
	//while ((ch=getchar())!=EOF)

	//{
	//	putchar(ch);
	//}
	///*printf("github测试\n");
	//printf("github测试\n");
	//printf("github测试\n");
	//printf("github测试\n");*/

	return 0;
}