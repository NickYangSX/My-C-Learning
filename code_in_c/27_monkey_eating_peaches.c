question:猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。第二天早上又将剩下的桃子吃掉一半，又吃了一个。以后每天早上都吃了前一天的一半又一个，到第10天早上想再吃时，就只剩下一个桃子了，求第一天共摘了多少个桃子？
#include <stdio.h>
int main() {
    int n = 1;
    for (int day = 10; day > 1; day--) {
        n = (n + 1) * 2;
    }
    
    printf("%d\n", n);
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n=1;
    int day=10;
    while (day > 1) {
        n=(n+1)*2;
        day--;
    }
    printf("%d\n", n);
    return 0;
}
