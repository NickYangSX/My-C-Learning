#include<stidio.h>
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    //        0 1 2 3 4 5 6 7 8 9
    //printf("%d\n", arr[6]);//[]是一个操作符，下标引用操作符
    //arr[6] = 70;
    //printf("%d\n", arr[6]);

    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
//修改数组内容-1到-10
   //for(i=0;i<10,i++){
     arr[i]=-(i+1)//因为原来是n-1项，现在变成负数自然加一
   }

  for(i=0;i<10,i++){
  printf("%d",arr[i]);
  }
    return 0;
}
#include <stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);//需要你输入10个数字
    }
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int arr[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        arr[i] = i + 1; // i=0 →1，i=9 →10//自动输入
    }
    // 打印
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
