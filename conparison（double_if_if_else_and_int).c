#include <stdio.h>
int main(){
  int a,b;
printf("input two accounts:");
  scanf("%d %d",&a,&b);
 int max=0;
  if(a>b){
max=a;
}
if(a<b){
  max=b;
}
printf("bigger one is:%d",max);
  return 0；
  }

#include <stdio.h>
int main(){
  int a,b;
printf("input two accounts:");
  scanf("%d %d",&a,&b);
int max=0;
if(a>b){
max=a;
}
else{
  max=b;
}
printf("bigger one is:%d",max);
  return 0；
  }
 
#include <stdio.h>
int main(){
  int a,b;
printf("input two accounts:");
  scanf("%d %d",&a,&b);
int max=b;
if(a>b){
	max=a;
}
printf("bigger one is:%d",max);
return 0;
}
