mine:
#define _CRT_SECURE_NO_WARNINGS  // 消除 VS 对 scanf 的安全报错
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int number = rand() % 100 + 1; // 区间调控与取余控制数值区间
	int count = 0;                 // 猜数字的次数
	int a = 0;                     // 你猜的数字

	printf("I've thought of a number between 1 and 100\n");

	do {
		printf("Now guess a number and enter: ");
		scanf("%d", &a);
		count++;

		if (a > number)
			printf("Too high\n");
		else if (a < number)
			printf("Too low\n");
	} while (a != number);

	printf("Congratulations! You guessed it in %d attempts\n", count);

	system("pause"); // 防止控制台一闪而过（仅在本地测试用，OJ提交时删掉）
	return 0;
}
expert:
#define _CRT_SECURE_NO_WARNINGS  // 消除 VS 对 scanf 的安全报错 (这是你代码独有的)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 【核心差异说明】
    // 这段代码与你自己的源代码主要区别在于：
    // 1. 循环结构：这段代码使用的是 while(1) 无限循环 + 内部 break 跳出；
    //    而你的代码使用的是 do-while 循环，通过判断 (a != number) 来退出。
    // 2. 变量命名：这里用 target 和 guess，你的代码用 number 和 a。
    // 3. 结尾处理：这段代码没有加 system("pause")，而你的加了防止闪退。
    
    // 使用当前时间播种随机数生成器
    srand(time(0));
    
    // 生成 1 到 100 之间的随机目标数字
    int target = rand() % 100 + 1;
    
    int guess = 0; // 玩家猜测的数字
    int count = 0; // 猜测的次数

    printf("=== Guess the Number Game ===\n");
    printf("I have thought of a number between 1 and 100.\n");

    // 无限循环，直到玩家猜对为止
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        count++; // 尝试次数加 1

        if (guess > target) {
            printf("Too high!\n"); // 猜大了
        } else if (guess < target) {
            printf("Too low!\n");  // 猜小了
        } else {
            // 玩家猜对了
            printf("Congratulations! You guessed it in %d attempts.\n", count);
            break; // 猜对后跳出无限循环
        }
    }
    return 0;
}
