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
