

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include"game.h"
//����ɨ��

using namespace std;

void game()
{
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��������
	InitBoard(mine, ROWS, COLS, '0');
	//��ʼ���������
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	printf("��Ҫɨ���������%d\n", ROW*COL);
	printf("�׵�������%d\n", EASY_COUNT);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//�����ף�mine������Ϣ��Ȼ�󴫵�show������
	FindMine(mine, show, ROW, COL);
}


void menu()
{
	cout << "1.��ʼ 0.�˳�\n";
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
		printf("��ѡ��: > ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ������!����������0��1��\n");
			break;

		}
	} while (input);//ѡ���0��1�Ǽ�����Ϸ����������������ѡ�񣬶��������������
}


int main()
{
	test();
	return 0;
}