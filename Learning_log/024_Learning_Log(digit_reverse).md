## 具体的解题逻辑，[方法点击此处](/00_Learning_Logs/Luogu/while.md)。此处仅讲解输出结果001和1以及负数的解决办法
## 1 输出001 
001则需要1去除result和里面和最后面的printf并且直接输出digit，甚至不能打/n，因为我们需要他直接输出0然后后面紧跟下一位数字，100%10=0，digit=0，输出0，然后10%10=0，输出0，然后1%10=1，输出1，最后001
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int num, n = 0, digit = 0;
	scanf("%d", &num);
	while (num > 0) {
		digit = num % 10;//求出每一位
    printf=(%D",digit);
		num /= 10;//保证每次算完后都已经去掉一位
	}
	return 0;
}
## 输出负数
只需要在输出数字里面加一个-即可
if(num<0){
printf("-")//先打出一个负号，然后再进行计算，保证符合“负数”
num=-num
}后续改变不大
