#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<process.h>

//void add(int* p)
//{
//	//语句体
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d ", num);
//	add(&num);
//	printf("%d	", num);
//	add(&num);
//	printf("%d ", num);
//	return 0;
//}
//int binary_search(int arr[], int x,int sz)//arr[]仅传了数组arr首元素的地址
//{
//	int left = 0;
//	//不能用该方法求个数int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	
//	while (left <= right)//2.判断条件，包括=
//	{
//		int mid = (left + right) / 2;//1.放在循环体内
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//	//if (left > right)
//		//printf("找不到");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	//找到返回下标,找不到返回-1
//	//先写怎么用，再写怎么实现函数
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("找不到");
//	else
//		printf("找到了，下标是%d", ret);
//	 return 0;
//}
//闰年
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//			printf("%d ", year);
//	}
//	return 0;
//}
//素数
//int is_prime(int x)
//{
//	int j = 2;
//	for (j = 2; j <=sqrt(x); j++)
//	//for (j = 2; j < x; j++)
//	{
//		if (x % j == 0)
//			return 0;
//		//printf("bushisushu");
//	}
//			return 1;
//	
//	//printf("shisushu");
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (is_prime(i)== 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//指针替换
//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;		
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//猜数字游戏
//void menu()
//{
//	printf("#######################\n");
//	printf("#####1.开始  0.退出####\n");
//	printf("#######################\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = 0;
//
//	ret = rand() % 100 + 1;
//	//printf（"%d", ret);
//	while (1)
//	{
//		printf("猜数字");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了");
//		}
//		else
//		{
//			printf("猜对了");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		srand((unsigned int)time(NULL));
//		
//		printf("请选择>:");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:game();
//			break;
//		case 0:printf("退出游戏");
//			break;
//		default:printf("重新选择");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	scanf("%d%d", &a, &b);
//		while (r=a % b) 
//		{
//			//r = a % b;
//			 a= b;
//			b = r;
//		}
//			printf("%d ", b);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)//产生100个数
//	{
//		if (i%3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

