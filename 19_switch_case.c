#include <stdio.h>

int main() {
 int type;
 scanf("%d",&type);
 switch(type){
 case 1:
 	printf("hello");
 	break;
 case 2:
 	printf("morning");
 	break;
 case 3:
 	printf("evening");
 	break;
 default:
 	printf("goodbye");
 	break;
 }
    return 0;
}

#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    switch (score / 10) {  // 核心技巧：除以 10 变成十位数
        case 10: // 100分
        case 9:  // 90~99分
            printf("excellent,A");
            break;
        case 8:
            printf("good,B");
            break;
        case 7:
            printf("C");
            break;
        default:
            printf("D");
            break;
    }
    
    return 0;
}
