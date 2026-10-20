#include <stdio.h>
int main(){
  int a,b,c;
  printf("input three accounts:");
  scanf("%d %d %d",&a,&b,&c);
  int max;
  if(a>b){
  	if(a>c){
  		max=a;
	  }else{
	  	max=c;
	  }
  }else{if(b<c){
  	max=c;
  }else{max=b;
  }
  }
  printf("the biggest one is:%d",max);
  return 0;
  }

max#include <stdio.h>
int main(){
  int a,b,c;
  printf("input three accounts:");
  scanf("%d %d %d",&a,&b,&c);
  int max=a;
  if(b>max)
  max=b;
  if(c>max)
  max=c;
  printf("the biggest one is:%d",max);
  return 0;
}
