#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0;i < row;i++)
	{
		int j;
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0;j < col;j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
