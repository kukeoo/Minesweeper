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
//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
//չʾ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//������
void SetMine(char board[ROWS][COLS], int row, int col);
//ɨ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//������Χ����
int get_mine_count(char mine[ROWS][COLS], int x, int y);
//չ��������
void NoMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
//����������飬��������������������Ϊ�ж�ʤ��������
int NoMineCount(char show[ROWS][COLS], int row, int col);