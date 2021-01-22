

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include"game.h"
//测试扫雷

using namespace std;

void game()
{
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化雷棋盘
	InitBoard(mine, ROWS, COLS, '0');
	//初始化玩家棋盘
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	printf("需要扫描的总区域：%d\n", ROW*COL);
	printf("雷的数量：%d\n", EASY_COUNT);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//查找雷，mine里找信息，然后传到show数组里
	FindMine(mine, show, ROW, COL);
}


void menu()
{
	cout << "1.开始 0.退出\n";
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	printf("*******  -Minesweeper  *******\n");
	printf("******************************\n");
	printf("**********  1.play  **********\n");
	printf("**********  0.exit  **********\n");
	printf("******************************\n");

	do
	{
		menu();
		printf("请选择: > ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择有误!请重新输入0或1。\n");
			break;

		}
	} while (input);//选择非0，1是继续游戏，其他的数是重新选择，都满足真的条件。
}


int main()
{
	test();
	return 0;
}