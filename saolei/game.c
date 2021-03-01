#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i, j;
	for (i = 0;i < cols;i++)
	{
		for (j = 0;j < cols;j++)
		{
           board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("-----------------------------\n");
	for (i = 0;i <= col;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		printf("%d ", i);
		for (j = 1;j <=col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if(mine[x][y]=='0')
			{
				mine[x][y]='1';
				count--;
			}   
	}
}

int GetMineCont(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;

	while (win<row*col-ESAY_COUNT)
	{
	    printf("请输入要排查的坐标：");
	    int x = 0, y = 0;
	    scanf_s("%d%d", &x, &y);
	    if (x >= 1 && x <= row && y >= 1 && y <= col)
	    {
	    	if (mine[x][y] == '1')
	    	{
	    		printf("你输了");
	    		DisplayBoard(mine, row, col);
				break;
		    }
		    else 
	    	{
				int count = GetMineCont(mine, x, y);
				show[x][y] = count+'0';
				DisplayBoard(show, row, col);
				win++;
		    }
	    }
    	else
	    {
	    	printf("坐标非法，请重新输入！\n");
	    }
	}
	if (win = row * col - ESAY_COUNT)
	{
		printf("恭喜你排雷成功！\n");
	}
}





