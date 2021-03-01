//#include<stdio.h>
//int main()
//{
//	int i, j, arr[10][10] = { 0 };
//	for (i =0;i < 10;i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (i = 2;i < 10;i++)
//	{
//		for (j = 1;j < 10;j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j <= i;j++)
//		{
//			printf("%-4d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a=0, b=0, c=0, d=0, e=0;
	for (a = 1;a < 6;a++)
	{
		for (b = 1;b < 6;b++)
		{
			for (c = 1;c < 6;c++)
			{
				for (d = 1;d < 6;d++)
				{
					for (e = 1;e < 6;e++)
					{
						if (((b == 2) + (a == 3)) == 1 && 
							((e == 4) + (a == 1)) == 1 && 
							((b == 2) + (e == 4)) == 1 && 
							((c == 1) + (d == 2)) == 1 && 
							((c == 5) + (d == 3)) == 1)
						{
							if (120==a*b*c*d*e)
							{
								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}