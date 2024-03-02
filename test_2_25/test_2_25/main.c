#define _CRT_SECURE_NO_WARNINGS
//选择语句
#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("好好学习（0/1)。\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("收到好的office\n");
//	else
//		printf("回家卖红薯\n");
//
//	return 0;
//}
//循环语句
//while 循环
int main()
{
	int line = 0;
	printf("加入比特\n");
	while (line < 200)
	{
		printf("敲入一行代码\n");
			line++;
	}
	printf("收到一个好office");
	return;

}




//字符串+转义字符+注释
/*C注释 */
//C++注释
//#include <stdio.h>
//int main()
//{
//	printf("%c\n",'\x67');
//	return 0;
//}
//int main()
//{
//	printf("c:test");
//	printf("abc??)\n");
//	return 0;
//}
////转义字符
// 转变原来的意思
// \n--换行，\t--水平制表符，\？,\',\"\123八进制,\xdd十六进制
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//strlen -string length 计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
////字符串类型 有双引号引起的一串字符
//int main()
//{
//	char arr1[]="abc";//数组
//	//"abc"='a','b','c''\0'--'\0'字符串结束标志,计算字符串长度时，不算字符串内容
//	char arr2[] = { 'a','b','c' };
//	printf("%s\n", arr1);//%s打印字符串
//	printf("%s\n", arr2);
//	return 0;
//}