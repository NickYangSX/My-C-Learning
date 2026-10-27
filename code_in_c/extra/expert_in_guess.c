// ==========================================
// 文件说明：专业级猜数字游戏 (Extra 进阶版)
// 核心亮点：输入防呆校验、宏定义配置、函数封装、跨平台兼容
// ==========================================

// 1. 平台兼容补丁：告诉 Windows VS 编译器，不要对 scanf 报安全错误
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 2. 宏定义（消灭“魔术数字”）
// 工程规范：不要把 1、100 这种数字直接写死在代码里，否则以后改配置（比如改成猜1-1000）要全文件查找替换。
// 把这些数字统一定义在开头，全大写命名，方便管理和修改。
#define MIN_NUM 1
#define MAX_NUM 100
#define MAX_TRIES 10 // 限制玩家最多只能猜10次，增加博弈感

// 3. 模块化设计：把游戏核心逻辑单独封装成一个函数
// void 表示这个函数执行完毕后，不需要向外界返回任何结果（自己自足了）
void play_game() {
    // time(NULL) 和 time(0) 是一回事，都是获取当前时间戳作为随机数种子。
    // (unsigned int) 是强制类型转换，目的是把时间戳转为无符号整数，消除 VS 编译器的警告。
    srand((unsigned int)time(NULL)); 
    
    // 生成区间：[MIN_NUM, MAX_NUM]
    // 万能区间公式：rand() % (最大值 - 最小值 + 1) + 最小值
    int target = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
    
    int guess = 0;   // 玩家输入的猜测值
    int tries = 0;   // 记录玩家已经猜了多少次
    int input_status; // 用来接收 scanf 的返回值（检查玩家有没有瞎输入）

    printf("=== Professional Guess Game ===\n");
    printf("Range: %d - %d. You have %d chances.\n", MIN_NUM, MAX_NUM, MAX_TRIES);

    // 4. 循环条件：只要猜的次数还没达到上限，就继续循环
    while (tries < MAX_TRIES) {
        printf("Attempt %d/%d. Enter your guess: ", tries + 1, MAX_TRIES);
        
        // 【硬核防呆机制】
        // scanf 是有返回值的！如果成功读到一个整数，返回 1；如果用户输入了字母 'a'，返回 0。
        // 我们把返回值存入 input_status。
        input_status = scanf("%d", &guess);
        
        if (input_status != 1) {
            printf("Error: Invalid input. Please enter an integer.\n");
            
            // 【极其关键的缓冲区清理】
            // 当用户输入字母时，字母会死死卡在内存的“输入缓冲区”里，导致后面永远读取失败（死循环）。
            // getchar() 会一个一个读取字符。while(getchar() != '\n') 的意思是：
            // 一直吃字符，直到把那个回车符（\n）吃掉为止。相当于把脏数据排空！
            while (getchar() != '\n'); 
            
            // 跳过本次循环，不增加 tries 次数。让玩家重新输入。
            continue; 
        }

        // 代码走到这里，说明玩家输入的一定是合法的数字了，次数 +1
        tries++;

        if (guess > target) {
            printf("Too high!\n");
        } else if (guess < target) {
            printf("Too low!\n");
        } else {
            // 猜对了！打印结果，然后直接 return 结束这个函数（游戏结束，不往下走了）
            printf("Bingo! You guessed it in %d attempts.\n", tries);
            return; 
        }
    }
    
    // 如果代码能走到这里，说明上面的 while 循环是因为次数耗尽（tries == MAX_TRIES）而结束的。
    // 如果猜对了，早就 return 跑路了，根本不会执行这一句。
    printf("Game Over! The target number was %d.\n", target);
}

// 5. 主函数：只负责调度和收尾，保持代码极致干净
int main() {
    play_game(); // 呼叫刚才写的游戏函数
    
    // 6. 条件编译（跨平台神技）
    // 这行代码的意思是：如果当前系统是 Windows（_WIN32是系统自带的宏），就执行下面的暂停。
    // 如果你把代码放到 Linux 或 Mac 上跑，这段代码会自动作废，不会报错。本质上是“给 Windows 擦屁股的专属补丁”
    #ifdef _WIN32
        system("pause");
    #endif
    
    return 0;
}
