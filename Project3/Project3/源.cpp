//#include<stdio.h>
//void bubble_short(int arr[], int sz)
//{
//	for (int i = 0;i < sz - 1;i++)
//	{
//		int j;
//		int flage = 1;
//		for ( j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flage = 0;
//			}
//		}
//		if (flage == 1)
//			break;
//	}
//}
//void printf_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
// }
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_short(arr,sz);
//	printf_arr(arr, sz);
//	return 0;
//}

//#include<stdio.h>
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0, right = sz - 1;
//    while(left < right)
//     {
//	     int temp = arr[left];
//		 arr[left] = arr[right];
//		 arr[right] = temp;
//		 left++;
//		 right--;
//	 }
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("逆置数组\n");
//	reverse(arr, sz);
//	print(arr, sz);
//	printf("初始化数组\n");
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i;
	int arr1[9] = { 1,2,3,4,5,6,7,8,9 };
	int arr2[9] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0;i < sz; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	for (i = 0;i < sz; i++)
	{
		printf("%d", arr2[i]);
	}
	printf("\n");
	for (i = 0;i < sz; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
		printf("%d", arr1[i]);
	}
	printf("\n");
	for (i = 0;i < sz; i++)
	{
		printf("%d", arr2[i]);
	}
	printf("\n");
	
	return 0;
}