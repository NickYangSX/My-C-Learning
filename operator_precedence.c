#include <stdio.h>

int main() {
    int a = 2, b = 3, c = 4;
    
    printf("=== 基础优先级测试 ===\n");
    
    // 1. 乘法优先于加法
    printf("a + b * c = %d  (2 + 3*4 = 14)\n", a + b * c);
    
    // 2. 括号优先级最高
    printf("(a + b) * c = %d  (5 * 4 = 20)\n", (a + b) * c);
    
    // 3. 结合你之前困惑的单目运算符
    printf("a * -b = %d  (2 * -3 = -6，单目负号优先)\n", a * -b);
    printf("a * +b = %d  (2 * +3 = 6，单目正号优先)\n", a * +b);
    
    printf("=== 进阶混合测试 ===\n");
    
    int d = 10;
    // 4. 乘除优先于加减
    printf("d / a + c = %d  (10/2 + 4 = 9)\n", d / a + c);
    
    // 5. 取余也是乘除级别
    int e = 7;
    printf("e %% a + c = %d  (7%%2 + 4 = 5，取余优先于加法)\n", e % a + c);

    return 0;
}结果：14 20 -6 6 9 5
