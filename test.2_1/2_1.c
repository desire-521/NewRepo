//#include<stdio.h>
//void print_arr(int arr[], int sz)
//{
//	int i;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,5,2,7,0,6,3,9,4,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//void print_arr(int arr[], int sz)
//{
//	int i;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//void test1()
//{
//	int arr[] = { 5,2,7,1,9,3,4,8,0,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	print_arr(arr, sz);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//#include<stdio.h>
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1-*(int*)e2);
//}
//void _swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void*e1, const void*e2))
//{
//	size_t i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		size_t j;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				_swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void test()
//{
//	//qsort 排序整形数组
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//int main()
//{
//	test();
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int comp(char str1[], char str2[])
//{
//	int i = 0;
//	int j = 0;
//	int sz = strlen(str1);
//	for (j = 1; j <= sz; j++)
//	{
//		int tmp = str1[0];
//		for (i = 0; i < sz - 1; i++)
//		{
//			str1[i] = str1[i + 1];
//		}
//		str1[sz - 1] = tmp;
//		if (0 == strcmp(str1, str2))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[5] = "aabcd";
//	char s2[5] = "bcdaa";
//	comp(s1, s2);
//	printf("%d", comp(s1, s2));
//	return 0;
//}
#include<stdio.h>
void swap(char a[], int left, int right)
{
	int ret = 0;
	while (left < right)
	{
		ret = a[left];
		a[left] = a[right];
		a[right] = ret;
		left++;
		right++;
	}
}
void leftswap(char a[], int k, int sz)
{
	int left = 0;
	int right = k;
	swap(a, left, right);
	left = k;
	right = sz;
	swap(a, left, right);
	left = 0;
	right = sz - 2;
	swap(a, left, right);
}
int main()
{
	char a[] = "abcdef";
	int sz = sizeof(a) / sizeof(a[0]);
	int k = 3;
	leftswap(a, k, sz);
	printf("%s", a);
	return 0;
}