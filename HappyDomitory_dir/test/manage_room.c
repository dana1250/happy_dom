
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
    "manage_room.pc"
};


static unsigned int sqlctx = 1199571;


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
            void  *sqhstv[6];
   unsigned int   sqhstl[6];
            int   sqhsts[6];
            void  *sqindv[6];
            int   sqinds[6];
   unsigned int   sqharm[6];
   unsigned int   *sqharc[6];
   unsigned short  sqadto[6];
   unsigned short  sqtdso[6];
} sqlstm = {12,6};

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
20,0,0,2,0,0,24,127,0,0,1,1,0,1,0,1,97,0,0,
39,0,0,3,0,0,29,141,0,0,0,0,0,1,0,
54,0,0,4,0,0,17,210,0,0,1,1,0,1,0,1,97,0,0,
73,0,0,4,0,0,45,216,0,0,0,0,0,1,0,
88,0,0,4,0,0,13,225,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,
127,0,0,4,0,0,15,249,0,0,0,0,0,1,0,
142,0,0,5,0,0,29,251,0,0,0,0,0,1,0,
157,0,0,4,0,0,17,296,0,0,1,1,0,1,0,1,97,0,0,
176,0,0,4,0,0,45,302,0,0,0,0,0,1,0,
191,0,0,4,0,0,13,309,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,
230,0,0,6,0,0,24,351,0,0,1,1,0,1,0,1,97,0,0,
249,0,0,7,0,0,29,354,0,0,0,0,0,1,0,
264,0,0,4,0,0,15,367,0,0,0,0,0,1,0,
279,0,0,8,0,0,29,369,0,0,0,0,0,1,0,
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

void search_room();
void select_room();
void edit_room();
void room();
void Insert_Room();

/* EXEC SQL BEGIN DECLARE SECTION; */ 

/* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

/* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/* EXEC SQL END DECLARE SECTION; */ 


void room()
{
	_putenv("NLS_LANG=American_America.KO16KSC5601");//한글을 사용하기 위한 코드
	DB_connect();
	select_room();
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

void select_room()
{
	clrscr();
	char move_page = 0;
	int moving = 10;
	gotoxy(0,1);
	print_screen("roomManagement.txt");
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
				Insert_Room();
			else if(moving == 12)
				search_room();
			else if(moving == 14)
				edit_room();
		}
	}
}
void Insert_Room()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar r_rnum[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } r_rnum;

    /* varchar r_person[4]; */ 
struct { unsigned short len; unsigned char arr[4]; } r_person;

    /* varchar r_stu_A[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } r_stu_A;

    /* varchar r_stu_B[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } r_stu_B;

    /* varchar r_isA[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } r_isA;

    /* varchar r_isB[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } r_isB;


    char sql[1000];

/* EXEC SQL END DECLARE SECTION; */ 


   /* Register sql_error() as the error handler. */
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


   clrscr();
   gotoxy(0,1);
   print_screen("addRoom.txt");
   
   /* 호실 번호 입력 */    
    while(1) {
        gotoxy(18,9);
        gets(r_rnum.arr);
        r_rnum.len = strlen(r_rnum.arr);

        if(r_rnum.len <= 0 ) {
            gotoxy(9,21); 
            printf("호실 번호를 입력하지 않았습니다:)");
        }
        else break;
    }
 
   /* 호실 인원 수 입력 */
    gotoxy(52,9); 
    gets(r_person.arr);
    r_person.len = strlen(r_person.arr);
  
   /* A자리 학생 이름 입력 */
    gotoxy(20,11)  ;
    gets(r_stu_A.arr);
    r_stu_A.len = strlen(r_stu_A.arr);
    
    /* B자리 학생 이름 입력 */
    gotoxy(54,11)  ;
    gets(r_stu_B.arr);
    r_stu_B.len = strlen(r_stu_B.arr);

   /* A학생 존재 여부 입력 */
    gotoxy(25,13) ;
    gets(r_isA.arr);
    r_isA.len = strlen(r_isA.arr);
   
    /* B학생 존재 여부 입력 */
    gotoxy(59,13) ;
    gets(r_isB.arr);
    r_isB.len = strlen(r_isB.arr);


    sprintf(sql,"insert into ROOM_MANAGE values ( '%s', %s, '%s', '%s', '%s', '%s')" , r_rnum.arr, r_person.arr, r_stu_A.arr, r_stu_B.arr, r_isA.arr, r_isB.arr);

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
	gotoxy(43, 25);
	gets(no_page);
	if(no_page[0] == 49)
		edit_room();
	else if(no_page[0] == 50)
		select_room();
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

void search_room()
{
	/* --------------------------------------------------------------------------
	   Retrieve the current maximum employee number
	-------------------------------------------------------------------------- */
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar r_rnum[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } r_rnum;

	/* varchar r_person[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } r_person;

	/* varchar r_stu_a[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } r_stu_a;

	/* varchar r_stu_b[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } r_stu_b;

	/* varchar r_isa[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } r_isa;

	/* varchar r_isb[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } r_isb;


	char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 


	char no_room[10];
	char no_page[2];

	int x, y, count = 0, i;
	int wrong_no = 0;


	/* Register sql_error() as the error handler. */
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


	while(1){
		clrscr();
		gotoxy(0,1);
		print_screen("searchRoom.txt");
		if(wrong_no == 0){
			gotoxy(35, 7);
		}
		else {
			gotoxy(8, 10);
			printf("없는 호실 번호입니다. 다시 입력해주세요.");
			gotoxy(35, 7);
		}

		gets(no_room);
		gotoxy(15,15);
		
		//1부터 49
		if (no_room[0] > 53 || no_room[1]>49 || (no_room[1]==49 && no_room[2]>48)) {
			wrong_no = 1;
		}
		else {
			gotoxy(8, 10);
			printf("                                                                                      ");
			break;
		}
	}
	/* 사용자 입력 */
	
	gotoxy(1, 11);
	printf(" |  방 번호  | 인원수 |    A    |    B   | A재실 | B재실 |");
	gotoxy(1, 12);
	printf(" ---------------------------------------------------------");


	/* 실행시킬 SQL 문장*/
	sprintf(dynstmt, "SELECT * FROM ROOM_MANAGE where to_char(R_RNUM) LIKE '%%%s%%' ", no_room);

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
	y = 13;

	for (;;)
	{
		/* EXEC SQL FETCH c_cursor INTO : r_rnum, : r_person, : r_stu_a, : r_stu_b, : r_isa, : r_isb; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 6;
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
  sqlstm.sqhstv[0] = (         void  *)&r_rnum;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&r_person;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&r_stu_a;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&r_stu_b;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&r_isa;
  sqlstm.sqhstl[4] = (unsigned int  )102;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&r_isb;
  sqlstm.sqhstl[5] = (unsigned int  )102;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
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



		r_rnum.arr[r_rnum.len] = '\0';
		r_person.arr[r_person.len] = '\0';
		r_stu_a.arr[r_stu_a.len] = '\0';
		r_stu_b.arr[r_stu_b.len] = '\0';
		r_isa.arr[r_isa.len] = '\0';
		r_isb.arr[r_isb.len] = '\0';
		gotoxy(x, y);
		printf(" |    %s    |    %s   |  %s | %s |   %s   |   %s   |", r_rnum.arr, r_person.arr, r_stu_a.arr, r_stu_b.arr, r_isa.arr, r_isb.arr);
		y++;
		count++;
	}
	gotoxy(7, 25);
	printf("(수정 1, 이전 페이지 2, 종료 3) >> ___ ");
	gotoxy(43, 25);
	gets(no_page);
	if(no_page[0] == 49)
		edit_room();
	else if(no_page[0] == 50)
		select_room();
	else if(no_page[0] == 51)
		exit(1);
	/* Close the cursor. */
	/* EXEC SQL CLOSE c_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )127;
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
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )142;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}

void edit_room()
{
	/* --------------------------------------------------------------------------
	   Retrieve the current maximum employee number
	-------------------------------------------------------------------------- */
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar R_RNUM[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } R_RNUM;

	/* varchar R_RPERSON[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } R_RPERSON;

	/* varchar R_STU_A[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } R_STU_A;

	/* varchar R_STU_B[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } R_STU_B;

	/* varchar R_ISA[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } R_ISA;

	/* varchar R_ISB[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } R_ISB;


	char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 


	char no_rnum[10];
	char person[10];
	char aname[10];
	char bname[10];
	char isa[10];
	char isb[10];
	char no_page[10];

	int wrong_no = 0;


	/* Register sql_error() as the error handler. */
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

	clrscr();
	gotoxy(0,1);
	print_screen("updateRoom.txt");
	gotoxy(40, 5);
	gets(no_rnum);
	gotoxy(20, 10);

	/* 실행시킬 SQL 문장*/
	sprintf(dynstmt, "SELECT * FROM ROOM_MANAGE where to_char(R_RNUM) LIKE '%%%s%%' ", no_rnum);

	/* select 문장이 제대로 구성되어 있는지 화면에 찍어봄 */
	//printf("dynstmt:%s\n", dynstmt);

	/* EXEC SQL PREPARE S FROM : dynstmt; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )157;
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
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )176;
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

		/* EXEC SQL FETCH c_cursor INTO : R_RNUM, : R_RPERSON, : R_STU_A, : R_STU_B, : R_ISA, : R_ISB; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )191;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&R_RNUM;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&R_RPERSON;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&R_STU_A;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&R_STU_B;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&R_ISA;
  sqlstm.sqhstl[4] = (unsigned int  )102;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&R_ISB;
  sqlstm.sqhstl[5] = (unsigned int  )102;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
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



		R_RNUM.arr[R_RNUM.len] = '\0';
		R_RPERSON.arr[R_RPERSON.len] = '\0';
		R_STU_A.arr[R_STU_A.len] = '\0';
		R_STU_B.arr[R_STU_B.len] = '\0';
		R_ISA.arr[R_ISA.len] = '\0';
		R_ISB.arr[R_ISB.len] = '\0';
	}

	gotoxy(16, 10);
	printf("%s", R_RNUM.arr);
	gotoxy(52, 10);
	printf("%s", R_RPERSON.arr);
	gotoxy(18, 12);
	printf("%s", R_STU_A.arr);
	gotoxy(54, 12);
	printf("%s", R_STU_B.arr);
	gotoxy(23, 14);	
	printf("%s", R_ISA.arr);
	gotoxy(59, 14);	
	printf("%s", R_ISA.arr);
	/* 사용자 입력 */

	gotoxy(16, 18);
	gets(no_rnum);
	gotoxy(52, 18);
	gets(person);
	gotoxy(18, 20);
	gets(aname);
	gotoxy(54, 20);
	gets(bname);
	gotoxy(23, 22);
	gets(isa);
	gotoxy(59, 22);
	gets(isb);

	sprintf(dynstmt,"update ROOM_MANAGE set R_RNUM = '%s', R_RPERSON = '%s', R_STU_A = '%s', R_STU_B = '%s', R_ISA = '%s', R_ISB = '%s' where to_char(R_RNUM) LIKE '%s'  ", no_rnum, person, aname, bname, isa, isb, no_rnum);
	
	gotoxy(40, 25);
	printf("\nstmt:%s\n", dynstmt);
   
	/* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )230;
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
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )249;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

	gotoxy(7, 25);
	printf("(수정 1, 이전 페이지 2, 종료 3) >> ___ ");
	gotoxy(43, 25);
	gets(no_page);
	if(no_page[0] == 49)
		edit_room();
	else if(no_page[0] == 50)
		select_room();
	else if(no_page[0] == 51)
		exit(1);
	/* Close the cursor. */
	/* EXEC SQL CLOSE c_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )264;
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
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )279;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}
