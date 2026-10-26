#include <stdio.h>
int main(){
 int n=0;
 int x;
 scanf("%d",&x);
 do{
 	n++;
 	x/=10;
 	printf("%d %d\n",x,n);
 }while(x>0);	
printf("%d\n",n);
 return 0;
}
