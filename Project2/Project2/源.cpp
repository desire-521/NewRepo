#include<stdio.h>
#include"game.h"
void menu()
{
	printf("###################################");
	printf("###########  1.Play    ############");
	printf("###########  2.Exit    ############");
	printf("###################################");
}
void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}while (input);
	return 0;
}