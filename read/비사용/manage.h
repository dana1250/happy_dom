#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>

#define getch() _getch()

/*==DB ����==*/
void DB_connect();

/*==txt ȭ�� ���==*/
void print_screen(char fname[]);

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>


/*==����Ŭ ���� �޼��� ���==*/
void sql_error(char *msg);

/*==ȭ�� Ŀ�� ���� �Լ�==*/
#include < windows.h >
#define STD_HANDLE GetStdHandle(STD_OUTPUT_HANDLE)

void gotoxy(int x, int y);
void getxy(int *x, int *y);
void clrscr(void);