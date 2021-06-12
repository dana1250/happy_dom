
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
           char  filnam[18];
};
static const struct sqlcxp sqlfpn =
{
    17,
    "manage_student.pc"
};


static unsigned int sqlctx = 9599803;


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
            void  *sqhstv[10];
   unsigned int   sqhstl[10];
            int   sqhsts[10];
            void  *sqindv[10];
            int   sqinds[10];
   unsigned int   sqharm[10];
   unsigned int   *sqharc[10];
   unsigned short  sqadto[10];
   unsigned short  sqtdso[10];
} sqlstm = {12,10};

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
5,0,0,1,0,0,30,30,0,0,0,0,0,1,0,
20,0,0,2,0,0,24,206,0,0,1,1,0,1,0,1,97,0,0,
39,0,0,3,0,0,29,220,0,0,0,0,0,1,0,
54,0,0,4,0,0,17,270,0,0,1,1,0,1,0,1,97,0,0,
73,0,0,4,0,0,45,276,0,0,0,0,0,1,0,
88,0,0,4,0,0,13,282,0,0,10,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
143,0,0,4,0,0,15,320,0,0,0,0,0,1,0,
158,0,0,5,0,0,29,322,0,0,0,0,0,1,0,
173,0,0,4,0,0,17,371,0,0,1,1,0,1,0,1,97,0,0,
192,0,0,4,0,0,45,377,0,0,0,0,0,1,0,
207,0,0,4,0,0,13,383,0,0,10,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
262,0,0,6,0,0,24,443,0,0,1,1,0,1,0,1,97,0,0,
281,0,0,7,0,0,29,446,0,0,0,0,0,1,0,
296,0,0,4,0,0,15,459,0,0,0,0,0,1,0,
311,0,0,8,0,0,29,461,0,0,0,0,0,1,0,
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

void search_student();
void select_student();
void edit_student();
void insert_student();
void student();

/* EXEC SQL BEGIN DECLARE SECTION; */ 

/* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

/* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/* EXEC SQL END DECLARE SECTION; */ 


void student()
{
	_putenv("NLS_LANG=American_America.KO16KSC5601");//한글을 사용하기 위한 코드
	DB_connect();
	select_student();
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

void select_student()
{
	clrscr();
	char move_page = 0;
	int moving = 10;
	gotoxy(0,1);
	print_screen("main.txt");
	while(1){
		gotoxy(20, moving);
		move_page = _getch();
		if(move_page == 32){
			if(moving == 14)
				moving = 10;
			else 
				moving +=2;
		}
		else if(move_page == 13){
			clrscr();
			if(moving == 10)
				insert_student();
			else if(moving == 12)
				search_student();
			else if(moving == 14)
				edit_student();
		}
	}
}

void insert_student() {
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar d_sname[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } d_sname;

	/* varchar d_snum[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } d_snum;

	/* varchar d_major[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } d_major;

	/* varchar d_goodpoint[4]; */ 
struct { unsigned short len; unsigned char arr[4]; } d_goodpoint;

	/* varchar d_badpoint[4]; */ 
struct { unsigned short len; unsigned char arr[4]; } d_badpoint;

	/* varchar d_rnum[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } d_rnum;

	/* varchar d_rposition[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } d_rposition;

	/* varchar d_outdate[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } d_outdate;

	/* varchar d_sex[4]; */ 
struct { unsigned short len; unsigned char arr[4]; } d_sex;

	/* varchar d_phonenum[13]; */ 
struct { unsigned short len; unsigned char arr[13]; } d_phonenum;


	char sql[1000];

	/* EXEC SQL END DECLARE SECTION; */ 


	/* Register sql_error() as the error handler. */
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


	clrscr();
	gotoxy(0,1);
	print_screen("addPerson.txt");

	/* 관생 이름 입력 */
	while (1) {
		gotoxy(18, 9);
		gets(d_sname.arr);
		d_sname.len = strlen(d_sname.arr);
		if (d_sname.len <= 0) {
			gotoxy(9, 21);
			printf("관생 이름을 입력하지 않았습니다:)");
		}
		else break;
	}

	/* 관생 학번 입력 */
	while (1) {
		gotoxy(54, 9);
		gets(d_snum.arr);
		d_snum.len = strlen(d_snum.arr);
		if (d_snum.len < 8) {
			gotoxy(9, 21);
			printf("관생 학번은 숫자 8자리입니다:) 넘 적게 입력했오ㅠ");
		}
		else {
			int i;
			for (i = 0; i < d_snum.len; i++) {
				if ('0' > d_snum.arr[i] || '9' < d_snum.arr[i]) break;
			}
			if (i >= d_snum.len) break;
			gotoxy(9, 21);
			printf("관생 학번은 숫자만 입력 할 수 있습니다:) 똑바루 하라구!");
		}
	}

	/* 관생 학과 입력 */
	gotoxy(18, 11);
	gets(d_major.arr);
	d_major.len = strlen(d_major.arr);

	/* 관생 상점 입력 */
	gotoxy(54, 11);
	gets(d_goodpoint.arr);
	d_goodpoint.len = strlen(d_goodpoint.arr);


	/* 관생 벌점 입력 */
	gotoxy(18, 13);
	gets(d_badpoint.arr);
	d_badpoint.len = strlen(d_badpoint.arr);

	/* 관생 호실 입력 */
	while (1) {
		gotoxy(54, 13);
		gets(d_rnum.arr);
		d_rnum.len = strlen(d_rnum.arr);

		if (d_rnum.len <= 0) {
			gotoxy(9, 21);
			printf("호실 번호를 입력하지 않았습니다:)");
		}
		else break;
	}

	/* 관생 외박 일 수 입력 */
	while (1) {
		gotoxy(23, 15);
		gets(d_outdate.arr);
		d_outdate.len = strlen(d_outdate.arr);

		if (d_outdate.len == 2) {
			int tmp = 0;
			for (int i = 0; i < d_outdate.len; i++) {
				tmp += (10 * ((d_outdate.len - 1) - i)) * (d_outdate.arr[i] - '0');
			}
			if (tmp <= 20) break;
		}
		gotoxy(9, 21);
		printf("외박 일 수는 최대 20일 입니다:)");
	}

	/* 관생 성별 입력 */
	gotoxy(54, 15);
	gets(d_sex.arr);
	d_sex.len = strlen(d_sex.arr);

	/* 관생 폰번호 입력 */
	while (1) {
		gotoxy(27, 17);
		gets(d_phonenum.arr);
		d_phonenum.len = strlen(d_phonenum.arr);

		if (d_phonenum.len == 13) {
			int i;
			for (i = 0; i < d_phonenum.len; i++) {
				if (i == 3 || i == 8) continue;
				if ('0' > d_phonenum.arr[i] || '9' < d_phonenum.arr[i]) break;
			}
			if (i >= d_phonenum.len) break;
		}
		gotoxy(9, 21);
		printf("휴대폰 번호 양식이 아닙니다. '010-XXXX-XXXX'형식으로 입력하세요:)");
	}

	/* 관생 호실 자리 입력 */
	while (1) {
		gotoxy(54, 17);
		gets(d_rposition.arr);
		d_rposition.len = strlen(d_rposition.arr);

		if (d_rposition.len == 1) {
			if ('A' <= d_rposition.arr[0] && d_rposition.arr[0] <= 'Z') break;
		}
		gotoxy(9, 21);
		printf("%d", d_rposition.len);
		printf("호실 자리를 제대로 작성하라구! 'A~Z'사이라구:)");
	}

	sprintf(sql, "insert into DORM_STUDENTS_MANAGE values ( '%s', TO_NUMBER(%s), '%s', %s, %s, '%s', '%s', %s, '%s', '%s')", d_sname.arr, d_snum.arr, d_major.arr, d_badpoint.arr, d_goodpoint.arr, d_rnum.arr, d_rposition.arr, d_outdate.arr, d_sex.arr, d_phonenum.arr);

	gotoxy(40, 50);
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



	printf("\nInsert Success\n");
	char no_page[2];
	gotoxy(7, 25);
	printf("(수정 1, 이전 페이지 2, 종료 3) >> ___ ");
	gotoxy(43, 25);
	gets(no_page);
	if(no_page[0] == 49)
		edit_student();
	else if(no_page[0] == 50)
		select_student();
	else if(no_page[0] == 51)
		exit(1);
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


}


void search_student()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar D_SNAME[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_SNAME;

	/* varchar D_SNUM[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_SNUM;

	/* varchar D_MAJOR[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_MAJOR;

	/* varchar D_BADPOINT[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_BADPOINT;

	/* varchar D_GOODPOINT[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_GOODPOINT;

	/* varchar D_RNUM[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_RNUM;

	/* varchar D_OUTDATE[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_OUTDATE;

	/* varchar D_SEX[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_SEX;

	/* varchar D_PHONENUM[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_PHONENUM;

	/* varchar D_RPOSITON[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_RPOSITON;


	char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 


	char no_sname[10];
	char no_snum[10];
	char no_rnum[10];
	char no_page[2];
	int count = 0,y = 16;

	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

	clrscr();
	gotoxy(0,1);
	print_screen("searchPerson.txt");
	gotoxy(19, 7);
	gets(no_sname);
	gotoxy(46, 7);
	gets(no_snum);
	gotoxy(19, 9);
	gets(no_rnum);

	gotoxy(0, 13);
	printf(" %s, %s, %s 로 검색한 결과입니다.", no_sname, no_snum, no_rnum);
	gotoxy(0, 14);
	printf(" |  이름  | 학번 | 전공 | 벌점 | 상점 | 방번호 | 외박일수 | 성별 | 전화번호 |");
	gotoxy(1, 15);
	printf(" ---------------------------------------------------------");

	sprintf(dynstmt, "SELECT * FROM DORM_STUDENTS_MANAGE where to_char(D_SNAME) LIKE '%%%s%%' OR to_char(D_SNUM) LIKE '%%%s%%' OR to_char(D_RNUM) LIKE '%%%s%%' ", no_sname, no_snum, no_rnum);

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

	
	for (;;)
	{
		/* EXEC SQL FETCH c_cursor INTO : D_SNAME, : D_SNUM, : D_MAJOR, : D_BADPOINT, : D_GOODPOINT, : D_RNUM, : D_OUTDATE, : D_SEX, : D_PHONENUM, :D_RPOSITON; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 10;
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
  sqlstm.sqhstv[0] = (         void  *)&D_SNAME;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&D_SNUM;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&D_MAJOR;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&D_BADPOINT;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&D_GOODPOINT;
  sqlstm.sqhstl[4] = (unsigned int  )102;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&D_RNUM;
  sqlstm.sqhstl[5] = (unsigned int  )102;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&D_OUTDATE;
  sqlstm.sqhstl[6] = (unsigned int  )102;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&D_SEX;
  sqlstm.sqhstl[7] = (unsigned int  )102;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&D_PHONENUM;
  sqlstm.sqhstl[8] = (unsigned int  )102;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&D_RPOSITON;
  sqlstm.sqhstl[9] = (unsigned int  )102;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
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



		D_SNAME.arr[D_SNAME.len] = '\0';
		D_SNUM.arr[D_SNUM.len] = '\0';
		D_MAJOR.arr[D_MAJOR.len] = '\0';
		D_BADPOINT.arr[D_BADPOINT.len] = '\0';
		D_GOODPOINT.arr[D_GOODPOINT.len] = '\0';
		D_RNUM.arr[D_RNUM.len] = '\0';
		D_OUTDATE.arr[D_OUTDATE.len] = '\0';
		D_SEX.arr[D_SEX.len] = '\0';
		D_PHONENUM.arr[D_PHONENUM.len] = '\0';
		D_RPOSITON.arr[D_RPOSITON.len] = '\0';
		gotoxy(1, y);
		printf(" | %s | %s | %s | %s | %s | %s | %s | %s | %s |", D_SNAME.arr,D_SNUM.arr,  D_MAJOR.arr, D_BADPOINT.arr, D_GOODPOINT.arr, D_RNUM.arr, D_OUTDATE.arr, D_SEX.arr, D_PHONENUM.arr);
		y++;
		count++;
		if (count == PAGE_NUM) {
			printf("\n\nhit any key\n");
			count = 0;
			_getch();
			gotoxy(1, 16); //이전 화면 부분 클리어
			for (int i = 0; i < PAGE_NUM; i++) {
				printf("                                                                                                                 \n");
			}
		}
		y=16;
	}
	gotoxy(7, 25);
	printf("(수정 1, 이전 페이지 2, 종료 3) >> ___ ");
	gotoxy(43, 25);
	gets(no_page);
	if(no_page[0] == 49)
		edit_student();
	else if(no_page[0] == 50)
		select_student();
	else if(no_page[0] == 51)
		exit(1);
	/* Close the cursor. */
	/* EXEC SQL CLOSE c_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 10;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )143;
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
 sqlstm.arrsiz = 10;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )158;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}

void edit_student(){
	/* --------------------------------------------------------------------------
	   Retrieve the current maximum employee number
	-------------------------------------------------------------------------- */
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar D_SNAME[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_SNAME;

	/* varchar D_SNUM[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_SNUM;

	/* varchar D_MAJOR[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_MAJOR;

	/* varchar D_BADPOINT[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_BADPOINT;

	/* varchar D_GOODPOINT[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_GOODPOINT;

	/* varchar D_RNUM[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_RNUM;

	/* varchar D_RPOSITION[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_RPOSITION;

	/* varchar D_OUTDATE[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_OUTDATE;

	/* varchar D_SEX[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_SEX;

	/* varchar D_PHONENUM[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_PHONENUM;


	char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 


	char no_snum[10];
	char name[10];
	char major[30];
	char bad[10];
	char good[10];
	char rnum[10];
	char rposition[10];
	char outdate[15];
	char sex[10];
	char phonenum[15];
	char no_page[10];

	/* Register sql_error() as the error handler. */
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

	clrscr();
	gotoxy(0,1);
	print_screen("updatePerson.txt");
	gotoxy(37, 5);
	gets(no_snum);
	gotoxy(20, 10);

	/* 실행시킬 SQL 문장*/
	sprintf(dynstmt, "SELECT * FROM DORM_STUDENTS_MANAGE where to_char(D_SNUM) LIKE '%%%s%%' ", no_snum);

	/* select 문장이 제대로 구성되어 있는지 화면에 찍어봄 */
	//printf("dynstmt:%s\n", dynstmt);

	/* EXEC SQL PREPARE S FROM : dynstmt; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 10;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )173;
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
 sqlstm.arrsiz = 10;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )192;
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

		/* EXEC SQL FETCH c_cursor INTO : D_SNAME, : D_SNUM, : D_MAJOR, : D_BADPOINT, : D_GOODPOINT, : D_RNUM, : D_OUTDATE, : D_SEX, : D_PHONENUM, : D_RPOSITION; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 10;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )207;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&D_SNAME;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&D_SNUM;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&D_MAJOR;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&D_BADPOINT;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&D_GOODPOINT;
  sqlstm.sqhstl[4] = (unsigned int  )102;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&D_RNUM;
  sqlstm.sqhstl[5] = (unsigned int  )102;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&D_OUTDATE;
  sqlstm.sqhstl[6] = (unsigned int  )102;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&D_SEX;
  sqlstm.sqhstl[7] = (unsigned int  )102;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&D_PHONENUM;
  sqlstm.sqhstl[8] = (unsigned int  )102;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&D_RPOSITION;
  sqlstm.sqhstl[9] = (unsigned int  )102;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
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


		D_SNAME.arr[D_SNAME.len] = '\0';
		D_SNUM.arr[D_SNUM.len] = '\0';
		D_SEX.arr[D_SEX.len] = '\0';
		D_MAJOR.arr[D_MAJOR.len] = '\0';
		D_SEX.arr[D_SEX.len] = '\0';
		D_GOODPOINT.arr[D_GOODPOINT.len] = '\0';
		D_BADPOINT.arr[D_BADPOINT.len] = '\0';
		D_RNUM.arr[D_RNUM.len] = '\0';
		D_OUTDATE.arr[D_OUTDATE.len] = '\0';
		D_RPOSITION.arr[D_RPOSITION.len] = '\0';
		D_PHONENUM.arr[D_PHONENUM.len] = '\0';
	}

	gotoxy(16, 10);
	printf("%s", D_SNAME.arr);
	gotoxy(52, 10);
	printf("%s", D_SNUM.arr);
	gotoxy(16, 12);
	printf("%s", D_SEX.arr);
	gotoxy(54, 12);
	printf("%s", D_MAJOR.arr);
	gotoxy(16, 14);	
	printf("%s", D_GOODPOINT.arr);
	gotoxy(52, 14);	
	printf("%s", D_BADPOINT.arr);
	gotoxy(16, 16);	
	printf("%s", D_RNUM.arr);
	gotoxy(57, 16);	
	printf("%s", D_OUTDATE.arr);
	gotoxy(16, 18);	
	printf("%s", D_RPOSITION.arr);
	gotoxy(56, 18);	
	printf("%s", D_PHONENUM.arr);
	/* 사용자 입력 */


	gotoxy(16, 22);
	gets(name);
	gotoxy(52, 22);
	gets(no_snum);
	gotoxy(18, 24);
	gets(sex);
	gotoxy(54, 24);
	gets(major);
	gotoxy(23, 26);	
	gets(good);
	gotoxy(59, 26);	
	gets(bad);
	gotoxy(23, 28);	
	gets(rnum);
	gotoxy(59, 28);	
	gets(outdate);
	gotoxy(23, 30);	
	gets(rposition);
	gotoxy(59, 30);	
	gets(phonenum);

	sprintf(dynstmt,"update DORM_STUDENTS_MANAGE set D_SNAME = '%s', D_SNUM = '%s', D_SEX = '%s', D_MAJOR = '%s', D_GOODPOINT= '%s', D_BADPOINT = '%s', D_RNUM = '%s', D_OUTDATE = '%s', D_RPOSITION = '%s', D_PHONENUM = '%s' where to_char(D_SNUM) LIKE '%s'  ", name, no_snum, sex, major, good, bad, rnum, outdate, rposition, phonenum, no_snum);
	
	/* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 10;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )262;
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
 sqlstm.arrsiz = 10;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )281;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

	gotoxy(7, 35);
	printf("(수정 1, 이전 페이지 2, 종료 3) >> ___ ");
	gotoxy(43, 35);
	gets(no_page);
	if(no_page[0] == 49)
		edit_student();
	else if(no_page[0] == 50)
		select_student();
	else if(no_page[0] == 51)
		exit(1);
	/* Close the cursor. */
	/* EXEC SQL CLOSE c_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 10;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )296;
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
 sqlstm.arrsiz = 10;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )311;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}
