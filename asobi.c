#include<stdio.h>
int main() {
	int a=0;
	printf("��������͂��Ă��������F");
	scanf_s("%d", &a);
	if (a % 2 == 0)printf("�l�͋����ł�");
	else if (a % 2 != 0)printf("�l�͊�ł�");
	return 0;
}