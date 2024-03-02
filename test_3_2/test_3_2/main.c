#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int ch = 0;
	while((ch = getchar()) != 'EOF')
	{
		if (ch <= '0' || ch >= '9')
			continue;
		//ÃÌº”“ª––
		putchar(ch);
	}
		
	



	return 0;
}