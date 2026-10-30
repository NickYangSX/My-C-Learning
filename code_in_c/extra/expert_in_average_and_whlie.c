#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int sum = 0;
    int count = 0;
    int status;

    printf("=== Robust Average Calculator ===\n");//形式声明代码作用
    printf("Enter numbers to calculate average (Enter -1 to finish):\n\n");

    while (1) { //while的条件成立为真也就是不等于0，反之0不成立打断循环。如果这个条件不是0（哪怕是-4，3，10，只要不是0），那么代表这个条件恒成立，形成死四循环，保证用户输入数字数量没有限制
        printf("Enter number %d: ", count + 1);
        status = scanf("%d", &number);//这个是判断条件，承接并scanf的返回值，也就是如果输入数字而不是非法字符，则成立，status变成1，不成立就是0为了防止用户输入非整数的值导致留存缓冲区，导致程序崩溃
        //返回值：如果这个步骤成功，就会返回一个不等于0的值，不成功就是0，因此引出下面的步骤
        if (status != 1) { //检查返回值
            printf("[Error] Invalid input! Please enter an integer.\n");
            while (getchar() != '\n'); //这也是一个循环，专注于缓冲区的：一个一个筛查有没有输入非法字符，有就直接拿走然后接着查，注意单引号表示字符，\n表示回车键。while后跟;代表空语句，不计算，就一直循环
            //你输入的东西只有按了回车才能从缓冲带进scanf，相当于一个东西后面还有个回车\n，当吃完这个东西接着吃了回车的时候循环打破。
            continue; //continue 是控制流的“调头指令”:有非法字符，拿走，然后到这一步循环体停止，直接调头到循环while(1)开头，让用户重新输入。但是保留之前已经输入进去的数字
        }

        if (number == -1) { //防御性编程（白名单思维），保证返回值无论多少只要不是-1，就能触发条件
            break; 
        }

        sum += number;//这一步开始正式计算
        count++;
    }

    printf("\n=== Calculation Complete ===\n");
    
    if (count > 0) {
        printf("Total numbers: %d, Sum: %d, Average: %.2f\n", count, sum, 1.0 * sum / count);
    } else {
        printf("No valid numbers were entered. Cannot calculate average.\n");//防止用户上来输入一个-1导致循环跳过，count==0，然后回车导致0/0
    }
     //这里可能会出现个system("pause")，为了在windows的vs环境下防止黑格子一闪而过的，在工业级代码绝对绝对绝对不可用
    return 0;
}

