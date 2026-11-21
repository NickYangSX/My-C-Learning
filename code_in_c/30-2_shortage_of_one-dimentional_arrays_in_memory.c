#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for (int i = 0;i<10;i++) {
		printf("&arr[%d]=%p\n", i, &arr[i]);//%p是地址打印符，&是地址取址符
	}
	return 0;
}
