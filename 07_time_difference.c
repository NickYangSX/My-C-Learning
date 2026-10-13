#include <stdio.h>
int main(){
	int h1,m1;
	int h2,m2;
	scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
	int t1=h1*60+m1;
	int t2=h2*60+m2;
	int t3=t2-t1;
	printf("%dh %dmins",t3/60,t3%60);
}

