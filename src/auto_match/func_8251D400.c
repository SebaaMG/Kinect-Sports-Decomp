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
extern int fn_82488FB8();
extern int fn_82544F40();
extern int fn_82549660();
extern int fn_82558B08();
extern int fn_8256A938();
extern int fn_8256AA98();
extern int fn_82597398();
extern int fn_825979A8();
extern int fn_82598898();
extern int fn_825989D8();
extern int fn_82599418();
extern int fn_827D5650();
extern int fn_827D5740();
extern int fn_827D57E8();
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8327F678;
extern unsigned int *lbl_8327F84C;
extern unsigned int lbl_832960CC;
extern unsigned int lbl_8329618C;
extern int (*lbl_8329619C)();
extern int (*lbl_832961A0)();


void fn_8251D400(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  longlong lVar4;
  
  lbl_8327F678 = -(uint)(lbl_8327F678 == 0) & lbl_8327F678;
  fn_82597398((ulonglong)(uint)param_1[1] + 0x2e8);
  fn_825979A8(param_1[1]);
  if (lbl_8329618C == (undefined4 *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)lbl_8329618C + 4);
  }
  lbl_8329618C = (undefined4 *)(-(uint)(iVar1 != param_1[1]) & (uint)lbl_8329618C);
  if (lbl_8329619C != (code *)0x0) {
    (*lbl_8329619C)(param_1[1]);
  }
  param_1[1] = 0;
  lVar4 = 4;
  iVar1 = 0;
  piVar3 = &lbl_832960CC;
  lbl_8329618C = (undefined4 *)(-(uint)(param_1 != lbl_8329618C) & (uint)lbl_8329618C);
  do {
    if (*piVar3 != 0) {
      iVar1 = iVar1 + 1;
    }
    piVar3 = piVar3 + 0xc;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if (iVar1 == 0) {
    fn_825989D8();
    if (lbl_832961A0 != (code *)0x0) {
      (*lbl_832961A0)(param_1[1]);
    }
    fn_82544F40();
    fn_8256A938();
    fn_8256AA98();
    fn_82549660(0x200000,1);
    do {
      iVar1 = fn_827D5740(lbl_83265A24);
      if (iVar1 != 0) {
        iVar1 = fn_827D5650(lbl_83265A24);
        if (((iVar1 != 0) && (cVar2 = fn_827D57E8(lbl_83265A24), cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*lbl_8327F84C + 0x24))(), cVar2 == '\x01')) goto LAB_8251d580;
      }
      fn_82599418();
      fn_82558B08();
    } while( true );
  }
  fn_82544F40();
  fn_8256A938();
  fn_8256AA98();
LAB_8251d594:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  fn_82488FB8(param_1 + 8);
  return;
LAB_8251d580:
  fn_82598898();
  goto LAB_8251d594;
}

