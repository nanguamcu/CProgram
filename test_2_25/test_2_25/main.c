#define _CRT_SECURE_NO_WARNINGS
//ѡ�����
#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("�ú�ѧϰ��0/1)��\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("�յ��õ�office\n");
//	else
//		printf("�ؼ�������\n");
//
//	return 0;
//}
//ѭ�����
//while ѭ��
int main()
{
	int line = 0;
	printf("�������\n");
	while (line < 200)
	{
		printf("����һ�д���\n");
			line++;
	}
	printf("�յ�һ����office");
	return;

}




//�ַ���+ת���ַ�+ע��
/*Cע�� */
//C++ע��
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
////ת���ַ�
// ת��ԭ������˼
// \n--���У�\t--ˮƽ�Ʊ����\��,\',\"\123�˽���,\xddʮ������
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//strlen -string length �����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
////�ַ������� ��˫���������һ���ַ�
//int main()
//{
//	char arr1[]="abc";//����
//	//"abc"='a','b','c''\0'--'\0'�ַ���������־,�����ַ�������ʱ�������ַ�������
//	char arr2[] = { 'a','b','c' };
//	printf("%s\n", arr1);//%s��ӡ�ַ���
//	printf("%s\n", arr2);
//	return 0;
//}