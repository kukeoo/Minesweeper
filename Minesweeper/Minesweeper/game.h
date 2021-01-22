#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
//初始化雷区
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
//展示棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//设置雷
void SetMine(char board[ROWS][COLS], int row, int col);
//扫雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//返回周围雷数
int get_mine_count(char mine[ROWS][COLS], int x, int y);
//展开无雷区
void NoMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
//遍历玩家数组，返回无雷区的数量，成为判断胜利的条件
int NoMineCount(char show[ROWS][COLS], int row, int col);