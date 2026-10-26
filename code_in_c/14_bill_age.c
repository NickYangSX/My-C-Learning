#include<stdio.h>
int main(){
int price=0;
int bill=0;//初始化
printf("input amount:");
scanf("%d",&price);
printf("input bill:");
scanf("%d",&bill);//读取
printf("your amount is:%d,your bill is:%d\n",price,bill);//人机交互的验证手段//
if(bill>=price){
printf("change %d\n",bill-price);
}/*找零*/
if(bill<price){
	printf("short:%d\n",price-bill);
}
return 0;
}
#include <stdio.h>
int main() {
    const int MINOR = 35;
    int age = 0;
    // 对应：请输入你的年龄：
    printf("Enter your age: ");
    scanf("%d", &age);
    // 对应：你的年龄是%d岁。
    printf("Your age is %d.\n", age);
    if ( age < MINOR ) {
        // 对应：年轻是美好的，
        printf("Youth is wonderful, ");
    }
    // 对应：年龄决定了你的精神世界，好好珍惜吧。
    printf("Age determines your inner world. Cherish it.\n");
    return 0;
}
