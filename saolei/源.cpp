#include<stdio.h>
#include"game.h"
#include"game.c"
void menu()
{
	printf("***************************\n");
	printf("********   1.play   *******\n");
	printf("********   0.exit    ******\n");
	printf("***************************\n");
}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	InitBoard(mine, ROWS,COLS, '0');
	InitBoard(show, ROWS,COLS, '*');

	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	SetMine(mine, ROW, COL, ESAY_COUNT);
	//DisplayBoard(mine, ROW, COL);

	FineMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0 ;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
				break;
		}
	} while(input);
	return 0;
}