# break
break是打断/跳出循环的一种手段，也就是"当达成某种条件，循环打破",而这种条件往往在循环内难以自动达成
注意:break有点类似else，在嵌套代码里只控制最近的一个循环
example:
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        if (j == 2) {
            break; // 只打断了内层的 j 循环，外面的 i 循环还会继续跑！
        }
        printf("i=%d, j=%d\n", i, j);
    }
}
# continue
continue的意思是:跳过此循环，并且接着继续下一个循环。（跳过当前循环体内、continue 之后的所有代码，直接去执行下一次循环的准备工作。）
也就是"当达成某种条件的某一轮循环时，该循环跳过不输出，然后进行下一轮循环"
注意：在while里，如果有continue，那么大概伴随if判断语句，如果没有在continue前面加上能参与if的变量计算式，极可能发生死循环
example：
int i = 1;
while (i <= 5) {
    if (i == 3) {
        continue; //灾难发生：跳过了下面的 i++，i 永远等于 3，无限死循环！
    }
    printf("%d", i);
    i++; 
}
