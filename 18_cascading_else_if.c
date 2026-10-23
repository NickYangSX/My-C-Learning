#include <stdio.h>
int main() {
    int score = 85; // 假设你的数学考了 85 分
    if (score >= 90) {
        printf("优秀\n");
    } else if (score >= 80) {
        printf("良好\n");  // 85 满足 >=80，执行这句，然后直接跳出！
    } else if (score >= 60) {
        printf("及格\n");  // 哪怕 85 也满足 >=60，但上面已经刹车了，这句绝对不会执行！
    } else {
        printf("不及格\n");
    }

    return 0;
}
