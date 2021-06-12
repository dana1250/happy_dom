
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
    "manage_stayout.pc"
};


static unsigned int sqlctx = 9599019;


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
5,0,0,1,0,0,30,30,0,0,0,0,0,1,0,
20,0,0,2,0,0,24,159,0,0,1,1,0,1,0,1,97,0,0,
39,0,0,3,0,0,29,173,0,0,0,0,0,1,0,
54,0,0,4,0,0,17,229,0,0,1,1,0,1,0,1,97,0,0,
73,0,0,4,0,0,45,235,0,0,0,0,0,1,0,
88,0,0,4,0,0,13,244,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
123,0,0,4,0,0,15,267,0,0,0,0,0,1,0,
138,0,0,5,0,0,29,269,0,0,0,0,0,1,0,
153,0,0,4,0,0,17,312,0,0,1,1,0,1,0,1,97,0,0,
172,0,0,4,0,0,45,318,0,0,0,0,0,1,0,
187,0,0,4,0,0,13,325,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
222,0,0,6,0,0,24,356,0,0,1,1,0,1,0,1,97,0,0,
241,0,0,7,0,0,29,359,0,0,0,0,0,1,0,
256,0,0,4,0,0,15,372,0,0,0,0,0,1,0,
271,0,0,8,0,0,29,374,0,0,0,0,0,1,0,
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

void search_stayout();
void select_stayout();
void edit_stayout();
void Insert_Stayout();
void stayout();

/* EXEC SQL BEGIN DECLARE SECTION; */ 

/* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

/* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/* EXEC SQL END DECLARE SECTION; */ 


void stayout()
{
	_putenv("NLS_LANG=American_America.KO16KSC5601");//한글을 사용하기 위한 코드
	DB_connect();
	select_stayout();
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

void select_stayout()
{
	clrscr();
	char move_page = 0;
	int moving = 10;
	gotoxy(0,1);
	print_screen("stayoutManagement.txt");
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
				Insert_Stayout();
			else if(moving == 12)
				search_stayout();
			else if(moving == 14)
				edit_stayout();
		}
	}
}
void Insert_Stayout()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar s_sname[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } s_sname;

    /* varchar s_snum[8]; */ 
struct { unsigned short len; unsigned char arr[8]; } s_snum;

    /* varchar s_rnum[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } s_rnum;

    /* varchar s_apply[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } s_apply;

    /* varchar s_date[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } s_date;


    char sql[1000];

/* EXEC SQL END DECLARE SECTION; */ 


   /* Register sql_error() as the error handler. */
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


   clrscr();
   gotoxy(0,1);
   print_screen("addStayout.txt");
   
   /* 관생 이름 입력 */
    while(1) {
        gotoxy(18,8); 
        gets(s_sname.arr);
        s_sname.len = strlen(s_sname.arr);

        if(s_sname.len <= 0 ) {
            gotoxy(9,21); 
            printf("관생 이름을 입력하지 않았습니다:)");
        }
        else break;
    }
 
   /* 관생 학번 입력 */
   while(1) {
        gotoxy(54,8);
        gets(s_snum.arr);
        s_snum.len = strlen(s_snum.arr);

        if(s_snum.len < 8) {
            gotoxy(9,21); 
            printf("관생 학번은 숫자 8자리입니다:) 넘 적게 입력했오ㅠ");
        }
        else {
            int i;
            for(i = 0; i < s_snum.len; i++) {
                if ('0' > s_snum.arr[i] || '9' < s_snum.arr[i] ) break;
            }
            if(i >= s_snum.len) break;
            gotoxy(9,21);
            printf("관생 학번은 숫자만 입력 할 수 있습니다:) 똑바루 하라구!");
        }
    }
  
   /* 관생 호실 입력 */
    while(1) {
        gotoxy(18,10);
        gets(s_rnum.arr);
        s_rnum.len = strlen(s_rnum.arr);

        if(s_rnum.len <= 0 ) {
            gotoxy(9,21); 
            printf("호실 번호를 입력하지 않았습니다:)");
        }
        else break;
    }
    
    /* 신청 여부 입력 */
    while(1) {
        gotoxy(54,10);
        gets(s_apply.arr);
        s_apply.len = strlen(s_apply.arr);

        if(s_apply.len == 1) {
            if(s_apply.arr[0] == '0' || s_apply.arr[0] == '1') break;
        }
        gotoxy(9,21); 
        printf("신청 여부는 0(신청X), 1(신청) 두 개의 숫자로만 이루어져있습니다:)");
    }

    /* 날짜 입력 */
    while(1) {
        gotoxy(18,12);
        gets(s_date.arr);
        s_date.len = strlen(s_date.arr);

        if(s_date.len <= 0 ) {
            gotoxy(9,21); 
            printf("날짜가 입력되지 않았습니다:)");
        }
        else break;
    }
    
    sprintf(sql,"insert into STAYOUT_MANAGE values ( '%s', %s, '%s', '%s', TO_DATE('%s', 'YYYY-MM-DD'))" , s_sname.arr, s_snum.arr, s_rnum.arr, s_apply.arr, s_date.arr);

    gotoxy(40,15) ;
    //printf("sql:%s\n", sql);
   /* 실행시킬 SQL 문장*/
    /* EXEC SQL EXECUTE IMMEDIATE :sql ; */ 

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
	char no_page[2];
	gotoxy(7, 25);
	printf("(수정 1, 이전 페이지 2, 종료 3) >> ___ ");
	gotoxy(44, 25);
	gets(no_page);
	if(no_page[0] == 49)
		edit_stayout();
	else if(no_page[0] == 50)
		select_stayout();
	else if(no_page[0] == 51)
		exit(1);
    /* EXEC SQL COMMIT WORK ; */ 

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

void search_stayout()
{
	/* --------------------------------------------------------------------------
	   Retrieve the current maximum employee number
	-------------------------------------------------------------------------- */
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar D_SNAME[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_SNAME;

	/* varchar D_SNUM[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_SNUM;

	/* varchar D_RNUM[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_RNUM;

	/* varchar D_OUTCNT[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_OUTCNT;

	/* varchar D_OUTDATE[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } D_OUTDATE;


	char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 


	char no_sname[10];
	char no_snum[10];
	char no_rnum[10];
	char no_date[10];
	char no_page[2];

	int x, y, count = 0, i;
	int wrong_no = 0;


	/* Register sql_error() as the error handler. */
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

	clrscr();
	gotoxy(0,1);
	print_screen("searchStayout.txt");
	gotoxy(19, 7);
	gets(no_sname);
	gotoxy(46, 7);
	gets(no_snum);
	gotoxy(19, 9);
	gets(no_rnum);
	gotoxy(46, 9);
	gets(no_date);
	/* 사용자 입력 */
	gotoxy(0, 13);
	printf(" %s, %s, %s, %s 로 검색한 결과입니다.", no_sname, no_snum, no_rnum, no_date);
	gotoxy(0, 14);
	printf(" (이름, 학번, 방번호, 외박신청일수, 외박신청일)");
	gotoxy(1, 15);
	printf(" ---------------------------------------------------------");


	/* 실행시킬 SQL 문장*/
	sprintf(dynstmt, "SELECT * FROM STAYOUT_MANAGE where to_char(S_SNAME) LIKE '%%%s%%' OR to_char(S_SNUM) LIKE '%%%s%%' OR to_char(S_RNUM) LIKE '%%%s%%' OR to_char(S_DATE, 'YY/MM/DD') LIKE '%%%s%%' ", no_sname, no_snum, no_rnum, no_date);

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
	y = 16;

	for (;;)
	{
		/* EXEC SQL FETCH c_cursor INTO : D_SNAME, : D_SNUM, : D_RNUM, : D_OUTCNT, : D_OUTDATE; */ 

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
  sqlstm.sqhstv[2] = (         void  *)&D_RNUM;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&D_OUTCNT;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&D_OUTDATE;
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



		D_SNAME.arr[D_SNAME.len] = '\0';
		D_SNUM.arr[D_SNUM.len] = '\0';
		D_RNUM.arr[D_RNUM.len] = '\0';
		D_OUTCNT.arr[D_OUTCNT.len] = '\0';
		D_OUTDATE.arr[D_OUTDATE.len] = '\0';
		gotoxy(x, y);
		printf(" | %s | %s | %s | %s | %s |", D_SNAME.arr,D_SNUM.arr, D_RNUM.arr, D_OUTCNT.arr, D_OUTDATE.arr);
		y++;
		count++;
	}
	gotoxy(7, 25);
	printf("(수정 1, 이전 페이지 2, 종료 3) >> ___ ");
	gotoxy(44, 25);
	gets(no_page);
	if(no_page[0] == 49)
		edit_stayout();
	else if(no_page[0] == 50)
		select_stayout();
	else if(no_page[0] == 51)
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

void edit_stayout()
{
	/* --------------------------------------------------------------------------
	   Retrieve the current maximum employee number
	-------------------------------------------------------------------------- */
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar S_SNAME[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } S_SNAME;

	/* varchar S_SNUM[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } S_SNUM;

	/* varchar S_RNUM[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } S_RNUM;

	/* varchar S_APPLY[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } S_APPLY;

	/* varchar S_DATE[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } S_DATE;


	char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 


	char no_snum[10];
	char name[10];
	char rnum[10];
	char apply[10];
	char date[10];
	char no_page[10];

	int wrong_no = 0;


	/* Register sql_error() as the error handler. */
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

	clrscr();
	gotoxy(0,1);
	print_screen("updateStayout.txt");
	gotoxy(35, 5);
	gets(no_snum);
	gotoxy(20, 10);

	/* 실행시킬 SQL 문장*/
	sprintf(dynstmt, "SELECT * FROM STAYOUT_MANAGE where to_char(S_SNUM) LIKE '%%%s%%' ", no_snum);

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

		/* EXEC SQL FETCH c_cursor INTO : S_SNAME, : S_SNUM, : S_RNUM, : S_APPLY, : S_DATE; */ 

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
  sqlstm.sqhstv[0] = (         void  *)&S_SNAME;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&S_SNUM;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&S_RNUM;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&S_APPLY;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&S_DATE;
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



		S_SNAME.arr[S_SNAME.len] = '\0';
		S_RNUM.arr[S_RNUM.len] = '\0';
		S_APPLY.arr[S_APPLY.len] = '\0';
		S_DATE.arr[S_DATE.len] = '\0';
	}

	gotoxy(16, 10);
	printf("%s", S_SNAME.arr);
	gotoxy(54, 10);
	printf("%s", S_RNUM.arr);
	gotoxy(16, 12);
	printf("%s", S_APPLY.arr);
	gotoxy(54, 12);	
	printf("%s", S_DATE.arr);
	/* 사용자 입력 */

	gotoxy(16, 16);
	gets(name);
	gotoxy(54, 16);
	gets(rnum);
	gotoxy(16, 18);
	gets(apply);
	gotoxy(54, 18);
	gets(date);

	sprintf(dynstmt,"update STAYOUT_MANAGE set S_SNAME = '%s', S_RNUM = '%s', S_APPLY = '%s', S_DATE = '%s' where to_char(S_SNUM) LIKE '%s'  ", name, rnum, apply, date,no_snum);
	
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
 //if (sqlca.sqlcode == 1403) break;
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
	if(no_page[0] == 49)
		edit_stayout();
	else if(no_page[0] == 50)
		select_stayout();
	else if(no_page[0] == 51)
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
