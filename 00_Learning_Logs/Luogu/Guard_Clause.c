#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int x, y, z;
    for (x = 0; x <= 20; x++) {
        for (y = 0; y <= 33; y++) {
            z = 100 - x - y;
           
          if (z % 3 != 0) continue;//卫语句的使用，罗列不成立项并且跳过
          if (5 * x + 3 * y + z / 3 != 100) continue;
            printf("Rooster: %d, Hen: %d, Chick: %d\n", x, y, z);
        }
    }
    return 0;
}
