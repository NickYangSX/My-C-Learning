## while循环的解题方法
# 1思路
1.明确变量和循环变量（保证不会出现死循环，可见下面注释），以及初始化循环变量（也就是累加的变量count++，digit也是循环变量，但是未被初始化容易出现垃圾值），后期会运算但是未赋过值的量（尤其是俩while循环的时候）
2.明确需求，循环需要求什么，多少个while循环可以解决这个问题
3.明确变量关系，构建结构体，此时可能需要补充另外需要的变量，以及没考虑到的条件if
## 题目
输入正整数 n，用 while 循环从个位开始逐位输出（即倒序），并统计位数。
输入 12345 → 输出 54321，位数 5
# 思路
1.变量n，位数count，当前位数字digit
2.输出一个倒位数
3.整除法提取digit以及循环出count，
4.
# 解答
#include<stdio.h>
int main(){
int n,digit=0,count=0;//不是需要用户输入的变量建议全部初始化

printf("input a number");
scanf("%d",&n);

if(n<=0)//更好的方式是检测返回值，if(scanf("%d",&n) != 1) printf("input error\n");
printf("error");//和error相关的可以后面跟return 1；但是后面大括号需要改
else{ //可用return 1;替代
while(n>0){
digit=n%10;
printf("%d",digit);
n/=10;//n=n/10可化简，但是digit=n%10不可以，且n/10；会导致死循环
count++;
}

printf("\ndigits:%d",count);}//这里else引号不可以省，否则到至else只包含到第一个分号digit行处，且如果没包含printf则在if后也会紧接着输出

return 0;
}
