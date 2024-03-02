#define _CRT_SECURE_NO_WARNINGS 1
//源文件的第一行，
#include <stdio.h>


//变量的作用域和生命周期

//int num = 10;
//int main()
//{
//
//		//计算两个数的和
//		int num1 = 0;
//		int num2 = 0;
//		int sum = 0;
//		//输入函数
//		scanf("%d%d", &num1, &num2);//&取地址符号
// 
//        
//		sum = num1 + num2;
//	    printf("%d\n", sum);
//	    return 0;
//}


//变量局部变量，全局变量

//int num1 = 20;//全局变量定义在代码块之外的变量
//int main()
//{
//	int num1 = 10;//局部变量，定义在代码块外部的变量
//	//局部变量和全局变量的名字不要相同容易误会，产生bug
//	//当局部和全局变量名字相同时，局部变量优先
// //只在局部使用
//	printf("%d\n", num1);
//	return 0;
//}
////int main()
//{
//	float weight = 96.6f;//精度截断，weight体重
//
//	return 0;
//
//}
//数据类型 
// char 字符数据类型
// short 短整形
// int整型
// long 长整型
// long long 长长整型
// float 单精度浮点
// double双精度浮点型
//%d整型
//%c打印字符
//%f打印浮点数
//%p
//%x
//%o
//int main()
//{
//	//char ch='A';//内存申请空间
//	//printf("%c\n", ch);//%c-打印字符格式数据
//	//short int 短整型
//	// int 整型
//	//int age = 20;
//	//printf("%d", age);   //%d-打印整型十进制数
//	//double d = 3.1415;
//	//printf("%d\n", sizeof(char));//1个字节
//	//printf("%d\n", sizeof(short));//2
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof(long));//4/8//C语言标准long>=int
//	//printf("%d\n", sizeof(long long));//8
//	//printf("%d\n", sizeof(float));//4
//	//printf("%d\n", sizeof(double));//8
//	return 0;
//}
//int main()
//{
//	printf("呵呵呵\n");
//	return 0;
//}
////std-标准 standard input output
//
//
////主函数—程序入口 main函数有且一个
//
//int main()
//{
//	//printf打印函数
//	//库函数 C语言本身提供给我们使用的函数
//	printf("hello \n");
//	return 0;
//}