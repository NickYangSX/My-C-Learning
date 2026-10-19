#include<stdio.h>
 int main(){
 	float C=0;
 	float F=0;
 	 printf("input temperature:");
	 scanf("%f",&F);
 	C=(F-32)*5/9;
 	printf("celsius temperature:%.2f\n",C);
 	return 0;
 }
