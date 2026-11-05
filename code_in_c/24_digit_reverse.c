#include<stdio.h>
int main(void){
  int num,n=0,digit=0;
scanf("%d",&num);
int result=0;
while(num>0){
digit=num%10;//求出每一位
result=result*10+digit;//循环每次的结果，乘10是为了左移一位数
printf("num=%d,digit=%d,result=%d",num,digit,result);//循环内部可视化
num/=10;
}
printf("%d",result);
return 0;
}
