#include<stdio.h>
int main(){
int price=0;
int bill=0;//初始化
printf("input price:");
scanf("%d",&price);
printf("input bill:");
scanf("%d",&bill);//读取
printf("your amount is:%d,your bill is:%d\n",price,bill);//人机交互的验证手段//
if(bill>=price){
printf("change %d\n",bill-price);
}/*找零*/
else
printf("short:%d",price-bill);
return 0;
}
