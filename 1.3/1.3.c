#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<process.h>

//void add(int* p)
//{
//	//�����
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
//int binary_search(int arr[], int x,int sz)//arr[]����������arr��Ԫ�صĵ�ַ
//{
//	int left = 0;
//	//�����ø÷��������int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	
//	while (left <= right)//2.�ж�����������=
//	{
//		int mid = (left + right) / 2;//1.����ѭ������
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
//		//printf("�Ҳ���");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	//�ҵ������±�,�Ҳ�������-1
//	//��д��ô�ã���д��ôʵ�ֺ���
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("�Ҳ���");
//	else
//		printf("�ҵ��ˣ��±���%d", ret);
//	 return 0;
//}
//����
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
//����
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
//ָ���滻
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
//��������Ϸ
//void menu()
//{
//	printf("#######################\n");
//	printf("#####1.��ʼ  0.�˳�####\n");
//	printf("#######################\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = 0;
//
//	ret = rand() % 100 + 1;
//	//printf��"%d", ret);
//	while (1)
//	{
//		printf("������");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��");
//		}
//		else
//		{
//			printf("�¶���");
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
//		printf("��ѡ��>:");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:game();
//			break;
//		case 0:printf("�˳���Ϸ");
//			break;
//		default:printf("����ѡ��");
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
//	for (i = 0; i <= 100; i++)//����100����
//	{
//		if (i%3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

