extern int *piRam83296194;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_38;
extern int fn_8251CC50();
extern int fn_8251D060();
extern int fn_8251D0F0();
extern int fn_8251D400();
extern int fn_825269D0();
extern int fn_8256A938();
extern int fn_82596630();
extern int fn_82599308();
extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82A1EFC0();
extern unsigned int lbl_832960A0;
extern unsigned int lbl_83296158;
extern unsigned int lbl_8329615C;
extern unsigned int *lbl_8329618C;
extern int (*lbl_832961C0)();


void fn_8251D5C8(void)

{
  bool bVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_38 [8];

  if (piRam83296194 != (int *)0x0) {
    if (lbl_8329618C == (int *)0x0) {
      iVar7 = 0;
      iVar5 = 0;
    }
    else {
      iVar7 = lbl_8329618C[1];
      iVar5 = lbl_8329618C[1];
    }
    piVar4 = piRam83296194;
    if (iVar5 != 0) {
      if (lbl_832961C0 != (code *)0x0) {
        (*lbl_832961C0)(iVar5);
      }
      fn_82596630(iVar5);
      piVar4 = piRam83296194;
    }
    piRam83296194 = (int *)0x0;
    lbl_8329618C = piVar4;
    fn_8251D060();
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(auStack_38,0,8);
    }
  }
  bVar1 = false;
  piVar4 = &lbl_8329615C;
  do {
    if (piVar4[1] != 0) {
      iVar7 = *piVar4;
      if (!bVar1) {
        bVar1 = true;
      }
      if (lbl_8329618C == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = lbl_8329618C[1];
      }
      fn_8251D400(piVar4 + -1);
      if ((uint)LZCOUNT(iVar5 - iVar7) >> 5 != 0) {
        piVar6 = (int *)&lbl_83296158;
        lbl_8329618C = (int *)0x0;
        do {
          if ((piVar6[1] != 0) && (piVar2 = piVar6, *piVar6 != iVar7)) break;
          piVar6 = piVar6 + -0xc;
          piVar2 = lbl_8329618C;
        } while (-0x7cd69f39 < (int)piVar6);
        lbl_8329618C = piVar2;
        fn_8251D060();
      }
      fn_8251CC50(1,0);
    }
    piVar4 = piVar4 + -0xc;
    if ((int)piVar4 < -0x7cd69f34) {
      if (lbl_832960A0 == 0) {
        if (lbl_8329618C == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = lbl_8329618C[1];
        }
        if (iVar7 != 0) {
          return;
        }
      }
      if (lbl_8329618C == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = lbl_8329618C[1];
      }
      if (iVar7 != 0) {
        while (piVar4 = (int *)fn_82599308(), *piVar4 != 0) {
          fn_82A1BB18();
          lVar3 = fn_8259A230();
          fn_825269D0(lVar3 + 0x23,0);
        }
        fn_8256A938();
      }
      fn_8251D0F0();
      return;
    }
  } while( true );
}
