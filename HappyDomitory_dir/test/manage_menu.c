
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[15];
};
static const struct sqlcxp sqlfpn =
{
    14,
    "manage_menu.pc"
};


static unsigned int sqlctx = 1198979;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
            void  *sqhstv[5];
   unsigned int   sqhstl[5];
            int   sqhsts[5];
            void  *sqindv[5];
            int   sqinds[5];
   unsigned int   sqharm[5];
   unsigned int   *sqharc[5];
   unsigned short  sqadto[5];
   unsigned short  sqtdso[5];
} sqlstm = {12,5};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4130,846,0,0,
5,0,0,1,0,0,30,31,0,0,0,0,0,1,0,
20,0,0,2,0,0,24,124,0,0,1,1,0,1,0,1,97,0,0,
39,0,0,3,0,0,29,127,0,0,0,0,0,1,0,
54,0,0,4,0,0,17,184,0,0,1,1,0,1,0,1,97,0,0,
73,0,0,4,0,0,45,190,0,0,0,0,0,1,0,
88,0,0,4,0,0,13,199,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
123,0,0,4,0,0,15,222,0,0,0,0,0,1,0,
138,0,0,5,0,0,29,224,0,0,0,0,0,1,0,
153,0,0,4,0,0,17,270,0,0,1,1,0,1,0,1,97,0,0,
172,0,0,4,0,0,45,276,0,0,0,0,0,1,0,
187,0,0,4,0,0,13,283,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
222,0,0,6,0,0,24,315,0,0,1,1,0,1,0,1,97,0,0,
241,0,0,7,0,0,29,318,0,0,0,0,0,1,0,
256,0,0,4,0,0,15,331,0,0,0,0,0,1,0,
271,0,0,8,0,0,29,333,0,0,0,0,0,1,0,
286,0,0,9,0,0,24,362,0,0,1,1,0,1,0,1,97,0,0,
305,0,0,10,0,0,29,365,0,0,0,0,0,1,0,
};


#define _CRT_SECURE_NO_WARNINGS
#define PAGE_NUM 5

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>
#include < windows.h >

void search_menu();
void select_menu();
void edit_menu();
void delete_menu();
void Insert_Menu();
void menu();

/* EXEC SQL BEGIN DECLARE SECTION; */ 

/* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

/* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/* EXEC SQL END DECLARE SECTION; */ 


void menu()
{
	_putenv("NLS_LANG=American_America.KO16KSC5601");//한글을 사용하기 위한 코드
	DB_connect();
	select_menu();
	/* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 0;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	_getch();
}

void select_menu()
{
	clrscr();
	char move_page = 0;
	int moving = 10;
	gotoxy(0,1);
	print_screen("cafeteriaManagement.txt");
	while(1){
		gotoxy(20, moving);
		move_page = _getch();
		if(move_page == 32){
			if(moving == 16)
				moving = 10;
			else 
				moving +=2;
		}
		else if(move_page == 13){
			clrscr();
			if(moving == 10)
				Insert_Menu();
			else if(moving == 12)
				search_menu();
			else if(moving == 14)
				edit_menu();
			else if(moving == 16)
				delete_menu();
		}
	}
}
void Insert_Menu()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar c_breakfast[45]; */ 
struct { unsigned short len; unsigned char arr[45]; } c_breakfast;

	/* varchar c_lunch[45]; */ 
struct { unsigned short len; unsigned char arr[45]; } c_lunch;

	/* varchar c_dinner[45]; */ 
struct { unsigned short len; unsigned char arr[45]; } c_dinner;

	/* varchar c_date[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } c_date;

	/* varchar c_price[8]; */ 
struct { unsigned short len; unsigned char arr[8]; } c_price;


	char sql[1000];

	/* EXEC SQL END DECLARE SECTION; */ 


	/* Register sql_error() as the error handler. */
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


	clrscr();
	gotoxy(0,1);
	print_screen("addMenu.txt");

	/* 아침 메뉴 입력 */
	gotoxy(18, 8);
	gets(c_breakfast.arr);
	c_breakfast.len = strlen(c_breakfast.arr);


	/* 점심 메뉴 입력 */
	gotoxy(52, 8);
	gets(c_lunch.arr);
	c_lunch.len = strlen(c_lunch.arr);

	/* 저녁 메뉴 입력 */
	gotoxy(18, 10);
	gets(c_dinner.arr);
	c_dinner.len = strlen(c_dinner.arr);

	/* 날짜 입력 */
	while (1) {
		gotoxy(48, 10);
		gets(c_date.arr);
		c_date.len = strlen(c_date.arr);

		if (c_date.len <= 0) {
			gotoxy(9, 21);
			printf("날짜가 입력되지 않았습니다:)");
		}
		else break;
	}


	/* 가격 입력 */
	gotoxy(18, 12);
	gets(c_price.arr);
	c_price.len = strlen(c_price.arr);

	sprintf(sql, "insert into CAFETERIA_MANAGE values ( '%s', '%s', '%s', TO_DATE('%s', 'YYYY-MM-DD'), %s)", c_breakfast.arr, c_lunch.arr, c_dinner.arr, c_date.arr, c_price.arr);

	gotoxy(40, 15);
	//printf("sql:%s\n", sql);
	/* 실행시킬 SQL 문장*/
	/* EXEC SQL EXECUTE IMMEDIATE : sql; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 1;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )20;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)sql;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	printf("Insert Success\n");
	/* EXEC SQL COMMIT WORK; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 1;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )39;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	char no_page[2];
	gotoxy(7, 25);
	printf("(수정 1, 이전 페이지 2, 종료 3) >> ___ ");
	gotoxy(44, 25);
	gets(no_page);
	if (no_page[0] == 49)
		edit_menu();
	else if (no_page[0] == 50)
		select_menu();
	else if (no_page[0] == 51)
		exit(1);
}
void search_menu()
{
	/* --------------------------------------------------------------------------
	   Retrieve the current maximum employee number
	-------------------------------------------------------------------------- */
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar c_breakfast[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_breakfast;

	/* varchar c_lunch[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_lunch;

	/* varchar c_dinner[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_dinner;

	/* varchar c_date[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_date;

	/* varchar c_price[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_price;


	char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 


	char no_date[15];
	char no_page[2];

	int x, y, count = 0, i;
	int wrong_no = 0;


	/* Register sql_error() as the error handler. */
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

	clrscr();
	gotoxy(0,1);
	print_screen("searchMenu.txt");
	gotoxy(30, 8);
	gets(no_date);

	/* 사용자 입력 */
	
	gotoxy(1, 11);
	printf(" (아침, 점심, 저녁, 날짜, 가격)");
	gotoxy(1, 12);
	printf(" ---------------------------------------------------------");


	/* 실행시킬 SQL 문장*/
	sprintf(dynstmt, "SELECT * FROM CAFETERIA_MANAGE where to_char(C_DATE, 'YY/MM/DD') LIKE '%%%s%%' ", no_date);

	/* select 문장이 제대로 구성되어 있는지 화면에 찍어봄 */
	//printf("dynstmt:%s\n", dynstmt);

	/* EXEC SQL PREPARE S FROM : dynstmt; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 1;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )54;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	/* cursor 선언 */
	/* EXEC SQL DECLARE c_cursor CURSOR FOR S; */ 


	/* cursor open */
	/* EXEC SQL OPEN c_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 1;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )73;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 


	x = 1;
	y = 14;

	for (;;)
	{
		/* EXEC SQL FETCH c_cursor INTO : c_breakfast, : c_lunch, : c_dinner, : c_date, : c_price; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )88;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&c_breakfast;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&c_lunch;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&c_dinner;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&c_date;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&c_price;
  sqlstm.sqhstl[4] = (unsigned int  )102;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



		c_breakfast.arr[c_breakfast.len] = '\0';
		c_lunch.arr[c_lunch.len] = '\0';
		c_dinner.arr[c_dinner.len] = '\0';
		c_date.arr[c_date.len] = '\0';
		c_price.arr[c_price.len] = '\0';
		gotoxy(x, y);
		printf(" |    %s    |    %s   |  %s | %s |   %s   |", c_breakfast.arr, c_lunch.arr, c_dinner.arr, c_date.arr, c_price.arr);
		y++;
		count++;
	}
	gotoxy(7, 25);
	printf("(수정 1, 이전 페이지 2, 종료 3) >> ___ ");
	gotoxy(44, 25);
	gets(no_page);
	if (no_page[0] == 49)
		edit_menu();
	else if (no_page[0] == 50)
		select_menu();
	else if (no_page[0] == 51)
		exit(1);
	/* Close the cursor. */
	/* EXEC SQL CLOSE c_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )123;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	/* EXEC SQL COMMIT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )138;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}



void edit_menu()
{

	/* --------------------------------------------------------------------------
	   Retrieve the current maximum employee number
	-------------------------------------------------------------------------- */
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar C_BREAKFAST[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } C_BREAKFAST;

	/* varchar C_LUNCH[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } C_LUNCH;

	/* varchar C_DINNER[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } C_DINNER;

	/* varchar C_DATE[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } C_DATE;

	/* varchar C_PRICE[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } C_PRICE;


	char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 


	char no_date[10];
	char breakfast[10];
	char lunch[10];
	char dinner[10];
	char price[10];
	char no_page[10];

	int wrong_no = 0;


	/* Register sql_error() as the error handler. */
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

	clrscr();
	gotoxy(0,1);
	print_screen("updateMenu.txt");
	gotoxy(41, 5);
	gets(no_date);
	gotoxy(20, 10);

	/* 실행시킬 SQL 문장*/
	sprintf(dynstmt, "SELECT * FROM CAFETERIA_MANAGE where to_char(C_DATE, 'YY/MM/DD') LIKE '%%%s%%' ", no_date);

	/* select 문장이 제대로 구성되어 있는지 화면에 찍어봄 */
	//printf("dynstmt:%s\n", dynstmt);

	/* EXEC SQL PREPARE S FROM : dynstmt; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )153;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	/* cursor 선언 */
	/* EXEC SQL DECLARE c_cursor CURSOR FOR S; */ 


	/* cursor open */
	/* EXEC SQL OPEN c_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )172;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}




	for (;;)
	{

		/* EXEC SQL WHENEVER NOT FOUND DO break; */ 

		/* EXEC SQL FETCH c_cursor INTO : C_BREAKFAST, : C_LUNCH, : C_DINNER, : C_DATE, : C_PRICE; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )187;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&C_BREAKFAST;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&C_LUNCH;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&C_DINNER;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&C_DATE;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&C_PRICE;
  sqlstm.sqhstl[4] = (unsigned int  )102;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



		C_BREAKFAST.arr[C_BREAKFAST.len] = '\0';
		C_LUNCH.arr[C_LUNCH.len] = '\0';
		C_DINNER.arr[C_DINNER.len] = '\0';
		C_DATE.arr[C_DATE.len] = '\0';
		C_PRICE.arr[C_PRICE.len] = '\0';
	}

	gotoxy(16, 10);
	printf("%s", C_BREAKFAST.arr);
	gotoxy(54, 10);
	printf("%s", C_LUNCH.arr);
	gotoxy(16, 12);
	printf("%s", C_DINNER.arr);
	gotoxy(48, 12);	
	printf("%s", C_PRICE.arr);
	/* 사용자 입력 */

	gotoxy(16, 16);
	gets(breakfast);
	gotoxy(54, 16);
	gets(lunch);
	gotoxy(16, 18);
	gets(dinner);
	gotoxy(48, 18);
	gets(price);

	sprintf(dynstmt,"update CAFETERIA_MANAGE set c_breakfast = '%s', c_lunch = '%s', c_dinner = '%s', c_price = '%s' where to_char(C_DATE, 'YY/MM/DD') LIKE '%s'  ", breakfast, lunch, dinner, price,no_date);
	
	//printf("\nstmt:%s\n", dynstmt);
   
	/* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )222;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
// if (sqlca.sqlcode == 1403) break;
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	printf("\nUpdate Success\n");
	/* EXEC SQL COMMIT WORK ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )241;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

	gotoxy(7, 25);
	printf("(수정 1, 이전 페이지 2, 종료 3) >> ___ ");
	gotoxy(44, 25);
	gets(no_page);
	if (no_page[0] == 49)
		edit_menu();
	else if (no_page[0] == 50)
		select_menu();
	else if (no_page[0] == 51)
		exit(1);
	/* Close the cursor. */
	/* EXEC SQL CLOSE c_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )256;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	/* EXEC SQL COMMIT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )271;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}

void delete_menu()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char dynstmt[1000];

	/* EXEC SQL END DECLARE SECTION; */ 


	char  date[100];
	char  flag = 'n';

	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

	clrscr();
	gotoxy(0,1);
	print_screen("deleteMenu.txt");
	gotoxy(29, 8);
	gets(date);
	
	gotoxy(10, 13);
	printf("위의 투플들을 삭제하시겠습니까? (y/n) :");

	flag = _getch();

	if (flag == 'y' || flag == 'Y') {
		sprintf(dynstmt, "DELETE FROM cafeteria_manage WHERE to_char(c_DATE, 'YY/MM/DD') LIKE '%%%s%%'", date);
		//printf("stmt:%s\n", dynstmt);
		/* EXEC SQL EXECUTE IMMEDIATE : dynstmt; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )286;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)dynstmt;
  sqlstm.sqhstl[0] = (unsigned int  )1000;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  //if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


		gotoxy(24, 15);
		printf("삭제 성공\n");
		/* EXEC SQL COMMIT WORK; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )305;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	}
	else {
		printf("삭제를 취소합니다.\n");
	}
	char no_page[2];
	gotoxy(7, 25);
	printf("(수정 1, 이전 페이지 2, 종료 3) >> ___ ");
	gotoxy(44, 25);
	gets(no_page);
	if (no_page[0] == 49)
		edit_menu();
	else if (no_page[0] == 50)
		select_menu();
	else if (no_page[0] == 51)
		exit(1);
}