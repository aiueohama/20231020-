//好きな値を入力し、総和を求めてくれるプログラム
#include<stdio.h>

int main() {
	int k=0;
	int a=0;
	
	for (int i = 0; i < 5; i++) {
		printf("値を入力してください：");
		scanf_s
		("%d", &a);
		k += a;
	}
	printf("総和は%d", k);
	return 0;
}