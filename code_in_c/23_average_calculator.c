这个是狗屎代码，仅供参考和逻辑学习，本质是翁恺大粪，拿到职场等着被打死吧
#include <stdio.h>
int main()
{
    int number;
    int sum = 0;
    int count = 0；
    do {
        scanf("%d", &number);
        if (number != -1) {
            sum += number;
            count++;
        }
    } while (number != -1);

    printf("%f\n", 1.0 * sum / count);

    return 0;
}

#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;
    
    scanf("%d", &number);
    while ( number != -1 ) {
        sum += number;
        count ++;
        scanf("%d", &number);
    }
    
    printf("%f\n", 1.0*sum/count);
    
    return 0;
}


拿的上场的：

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int sum = 0;
    int count = 0;
    int status;

    printf("=== 智能平均值计算器 ===\n");
    printf("请输入要计算的数字，输入 -1 结束。\n\n");

    while (1) {
        printf("请输入第 %d 个数字: ", count + 1); // 体验优化：告诉用户当前是第几个
        
        // 防呆机制：检查输入的是不是合法的整数
        status = scanf("%d", &number);
        if (status != 1) {
            printf("【警告】输入非法！请不要输入字母或乱码，重新输入。\n");
            while (getchar() != '\n'); // 核心大招：清空缓冲区的脏数据
            continue;
        }

        // 退出机制
        if (number == -1) {
            break; // 主动跳出，不再用那些恶心的嵌套
        }

        sum += number;
        count++;
    }

    printf("\n=== 计算完成 ===\n");
    // 防崩溃机制：如果用户上来就输入 -1
    if (count > 0) {
        printf("共输入了 %d 个数字，总和为 %d，平均值为: %.2f\n", count, sum, 1.0 * sum / count);
    } else {
        printf("你未输入任何有效数字，无法计算平均值。\n");
    }

    system("pause"); // 防止 VS 闪退
    return 0;
}
