#include<stdio.h>
int main() {
	int a=0;
	printf("数字を入力してください：");
	scanf_s("%d", &a);
	if (a % 2 == 0)printf("値は偶数です");
	else if (a % 2 != 0)printf("値は奇数です");
	return 0;
}