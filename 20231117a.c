#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char b;
	printf("入力してください：");
	scanf_s("%c",&b);
	if (isupper(b))printf("大文字が含まれています\n");
return 0;
}