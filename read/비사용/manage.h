#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>

#define getch() _getch()

/*==DB 연결==*/
void DB_connect();

/*==txt 화면 출력==*/
void print_screen(char fname[]);

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>


/*==오라클 에러 메세지 출력==*/
void sql_error(char *msg);

/*==화면 커서 제어 함수==*/
#include < windows.h >
#define STD_HANDLE GetStdHandle(STD_OUTPUT_HANDLE)

void gotoxy(int x, int y);
void getxy(int *x, int *y);
void clrscr(void);