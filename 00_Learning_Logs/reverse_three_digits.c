#include<stdio.h>
int main(){
int x=123;
scanf("%d",&x);
int bai=x/100;
int shi=(x/10)%10;
int ge=x%10;
int result=ge*100+shi*10+bai;
printf("%d",result);
return 0;
}
以下是傻逼打法，不到万不得已，不要用，职场更不能用，除非你想当傻逼
#include<stdio.h>
 int main(){
 	int g,s,b;//变量三位数
 	printf("input a three-digit number");
 	scanf("%d %d %d",&b,&s,&g);
 	printf("units digit%d,tens digit%d,hundreds digit%d",g,s,b);
 	return 0;
 }
