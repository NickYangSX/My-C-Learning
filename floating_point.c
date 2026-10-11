#include <stdio.h>
int main() {
     printf("entre your height in feet and inches:");
     int foot;
     int inch;
     scanf("%d %d",&foot,&inch);
     printf("your height is %f metres.\n",
	 (foot+inch/12.0)*0.3048);
     return 0;
 }

