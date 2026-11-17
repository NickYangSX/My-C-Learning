#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int x=2;//for还存在就不需要初始化
	int cnt=0;//次数器
	//scanf("%d", &x);for代替了
	//for (x = 2;x < 100;x++)，把for改while，求前50个素数
	while(cnt<50)
	{
		int i;
		int isPrime = 1;
		for (i = 2;i < x;i++) {
			if (x % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1){ printf("%d\n", x);cnt++;}
		x++;
	}
	printf("\n");
	return 0;
}
