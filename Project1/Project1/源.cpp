//#include<time.h>
//void menu()
//{
//	printf("*********************\n");
//	printf("*********************\n");
//	printf("******1. PLAY *******\n");
//	printf("******0. EXIT *******\n");
//	printf("*********************\n");
//	printf("*********************\n");
//}
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字：");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS   1
//#include<stdio.h>
//int main()
//{
//	int a=0,num=0;
//	scanf_s("%d", &a);
//	int sum = 0;
//	for (int i = 0;i < 5;i++)
//	{
//		num = num * 10 + a;
//		sum += num;
//	}
//	printf("%d", sum);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h >
#include<math.h>
int main()
{
	int i = 0;
	for (i = 10; i < 100000; i++)
	{
		int a, b, c, d, e;
		a = i % 10;
		b = i % 100 / 10;
		c = i % 1000 / 100;
		d = i % 10000 / 1000;
		e = i / 10000;
		for (int n = 1; n <= 6; n++)
		{
			if (i == pow(a, n) + pow(b, n) + pow(c, n) + pow(d, n) + pow(e, n))
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}