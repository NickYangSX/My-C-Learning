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
