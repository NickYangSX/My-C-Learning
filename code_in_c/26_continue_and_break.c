#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	if (x <= 1){
		printf("this is not prime number");
	return 0;}
int i;
	for (i = 2;i < x;i++) {//不建议这里用int i，因为后续需要break残留值做判定，加在for里面那么循环结束i就消失了，下面残留值判断会无效
		if (x % i == 0) {
			break;
		}
	}	
if (i == x)//残留值判断
			printf("YES");
		else
			printf("NO");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int i = 1;
    while (i <= 5) {
        if (i == 3) {
            i++;     // 注意：如果在 continue 前不写 i++，就会死循环
            continue;
        }
        printf("%d ", i);
        i++;         // 这个 i++ 会被 continue 跳过！
    }
    return 0;
}
最终输出1 2 4 5
