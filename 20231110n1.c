#include<stdio.h>
int main(){
	int a;
for (int i = 0; i <= 10000; i++) {
	if ((i%13 == 0)&&(i%17==0))printf("%d\n", i);
}
return 0;
}