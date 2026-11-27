#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%zu\n", sizeof(arr));//10个int，每个占4字节，total=4*10,计算整个数组的大小，单位字节
	//printf("%zu\n", sizeof arr[0]);//第一个元素大小
	//printf("%zu\n", sizeof arr / sizeof arr[0]);//由于每个元素占4字节，所以用总字节除以单个元素字节求出数量
	int sz = sizeof arr / sizeof arr[0];
	for (int i = 0;i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
