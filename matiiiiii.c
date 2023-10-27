//生年月日から生まれた日の曜日を答えるプログラム//
#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0, d = 0;
	int A = 0, B = 0, C = 0, D = 0, E = 0, koreda = 0;
	int o[13] = { 0,0,3,3,6,1,4,6,2,5,0,3,5 };
	printf("生年月日を入力してください（2003年8月25日生まれの場合→20 03 08 25）\n");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	a %= 100;

	A = b / 4;
	B = b;
	C = o[c];
	D = d;
	if (a >= 0 && a <= 99) {
		E = 0;
	}
	else {
		E = 6;
	}

	koreda = (A + B + C + D + E) % 7;
	if (koreda == 0)printf("土曜日です\n");
	else if (koreda == 1)printf("日曜日です\n");
	else if (koreda == 2)printf("月曜日です\n");
	else if (koreda == 3)printf("火曜日です\n");
	else if (koreda == 4)printf("水曜日です\n");
	else if (koreda == 5)printf("木曜日です\n");
	else if (koreda == 6)printf("金曜日です\n");

	printf("＊2004年生まれの人は間違っている可能性があります。");
	return 0;
}