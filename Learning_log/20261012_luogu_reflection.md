int用来声明变量类型。int a中a是变量名称
scanf用来输入，决定输入形式和关联的变量，关联了几个变量就要加几个%d，并且在后面按顺序把所有关联的变量名称加入。
printf用来输出，决定输出形式和需要输出的变量。关联数量和%d要一致，同上。
printf("%d+%d=%d",a,b,a+b);//我们也可以把a+b设为变量c，并且直接把c用来替代a+b即可
= 用来赋值或者定义变量用的
#include <stdio.h>
int main(){
   int a;
   int b;
   int c;
   int d;//可合并为int a,b,c,d
   scanf("%d %d %d %d",&a,&b,&c,&d);
   int total=c*60+d-a*60-b;
   int e=total/60;
   int f=total%60;
   printf("%d %d\n",e,f);
	return 0;
}
