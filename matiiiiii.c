//���N�������琶�܂ꂽ���̗j���𓚂���v���O����//
#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0, d = 0;
	int A = 0, B = 0, C = 0, D = 0, E = 0, koreda = 0;
	int o[13] = { 0,0,3,3,6,1,4,6,2,5,0,3,5 };
	printf("���N��������͂��Ă��������i2003�N8��25�����܂�̏ꍇ��20 03 08 25�j\n");
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
	if (koreda == 0)printf("�y�j���ł�\n");
	else if (koreda == 1)printf("���j���ł�\n");
	else if (koreda == 2)printf("���j���ł�\n");
	else if (koreda == 3)printf("�Ηj���ł�\n");
	else if (koreda == 4)printf("���j���ł�\n");
	else if (koreda == 5)printf("�ؗj���ł�\n");
	else if (koreda == 6)printf("���j���ł�\n");

	printf("��2004�N���܂�̐l�͊Ԉ���Ă���\��������܂��B");
	return 0;
}