#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i <= 12; i++) {
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++) {
//		printf("%d ", i);
//	}
//}