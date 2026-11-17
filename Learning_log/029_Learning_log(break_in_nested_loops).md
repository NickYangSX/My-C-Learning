# 嵌套循环的break
break和else一样，只会就近原则，控制最近的循环，为了内循环达成某种条件后直接结束整个循环，我们用`标志位接力break`

核心思路:标记，并层层上报
1.定义标志位
2.修改标志位的值
3.层层筛查标志位的值是否符合条件，复合后break
比如原函数里算完了，就会把exist=1整个东西连着printf一同break;后续的if保证在各个循环读取了exist后直接跳出
使用情景:求第1解，唯一解时
extra：优化方法
可以把标志写入循环条件里，如
int exit = 0;
for (one = 1; one < x*10 && !exit; one++) {
    for (two = 1; two < x*10/2 && !exit; two++) {
        for (five = 1; five < x*10/5; five++) {
            if (找到目标) {
                exit = 1; // 只要一变1，外层循环的下一次判断就会直接失败并结束
                break;
            }
        }
    }
}
也可以封装成一个函数，写正式项目和工作时常用
#include <stdio.h>

// 把找硬币的逻辑封装成一个函数
void findCoins(int x) {
    int one, two, five;  // 变量要在函数里面定义

    for (one = 1; one < x*10; one++) {
        for (two = 1; two < x*10/2; two++) {
            for (five = 1; five < x*10/5; five++) {
                
                // 这里就是真实的“找到目标”的判断条件
                if (one + two*2 + five*5 == x*10) {
                    printf("Found: %d one-jiao + %d two-jiao + %d five-jiao = %d yuan\n", one, two, five, x);
                    
                    // 真正的魔法：直接结束整个函数！
                    return; 
                }
                
            }
        }
    }
    // 如果循环全都跑完了还没 return，说明没找到
    printf("No solution found for %d yuan.\n", x);
}

int main() {
    int x;
    scanf("%d", &x);
    
    // 调用函数，把 x 传进去让它自己去找
    findCoins(x); 
    
    return 0;
}
