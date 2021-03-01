//#include<stdio.h>
//int main()
//{
//	char pasword[20] = { 0 };
//	int i;
//	for(i = 0;i < 3;i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", pasword);
//		if (strcmp(pasword, "123456") == 0)
//		{
//			printf("登陆成功");
//			break;
//		}
//		else
//		{
//			printf("密码正确");
//		}
//	}
//    if (i = 3)
//	{
//	     break;
//	}
//}
//
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[]= "welcom to bit!!!";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(500);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int DigitSum(int n)
//{
//	if (n / 10 == 0)
//	{
//		return n;
//	}
//	
//		return DigitSum(n / 10) + n % 10;
//	
//}
//int main()
//{
//	int n=0;
//	scanf_s("%d",&n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>  
//int main()
//{
//    int num = 0, i = 0;
//    scanf_s("%d", &num);
//    printf("奇数序列为：");
//    for (i = 31;i >= 0;i -= 2)  
//    {
//        printf("%d ", (num >> i) & 1);  
//    }
//    printf("\n");
//    printf("偶数序列为：");
//    for (i = 30;i >= 0;i -= 2)  
//    {
//        printf(" %d", (num >> i) & 1);  
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	for (int i = 0;i < 9;i++)
//	{
//		printf("%d", *(p + i));
//	}
//	return 0;
//}
