如果相除的数有小数，而相除的数字里面有小数，或者变量类型是小数的，才会保留里面的小数
比如原code里面，int inch是整数型变量int，与12相除不会保留小数点后面数字。但是，如果改变int 为double，结果可有小数。或者把12改12.0也可以。
注意，结果方面是%f,而不是%d.有%d的变量不可以有小数，否则报错
浮点数就是有小数点的数字。
for example:10/3*3=9
10.0/3*3=10
如果用double，那么scanf不可以用%d,%f,only%lf.因为精度大，字节占8个。在float则scanf只能%f字节占4个 printf无所谓。
#include <stdio.h>
int main() {
     printf("entre your height in feet and inches:");
     int foot;
     double inch;
     scanf("%lf %lf",&foot,&inch);
     printf("your height is %lf metres.\n",
	 (foot+inch/12.0)*0.3048);
     return 0;
 }
