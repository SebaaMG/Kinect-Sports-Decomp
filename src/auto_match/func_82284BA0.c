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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_8227E4B0();
extern int fn_82672C20();
extern unsigned int iStack_84;
extern unsigned int lbl_820E975C;
extern unsigned int uStack_90;


void fn_82284BA0(int param_1,short *param_2,short *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uStack_90;
  undefined1 auStack_88 [4];
  int iStack_84;
  undefined1 auStack_80 [8];
  short *psStack_78;
  undefined1 auStack_70 [8];
  short *psStack_68;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_50 [8];
  double dStack_48;
  undefined1 auStack_40 [64];
  
  if ((param_4 == 3) || (param_2 == (short *)0x0)) {
LAB_82284be4:
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (*param_2 == 0) goto LAB_82284be4;
  }
  fn_8227E4B0(*(undefined4 *)(param_1 + 0x9c),100000,uVar2,0);
  if ((param_5 != 3) && (param_3 != (short *)0x0)) {
    uVar2 = 1;
    if (*param_3 != 0) goto LAB_82284c20;
  }
  uVar2 = 0;
LAB_82284c20:
  fn_8227E4B0(*(undefined4 *)(param_1 + 0x9c),0x186a1,uVar2,0);
  puVar1 = (undefined4 *)((int)&uStack_90 + 4);
  lVar4 = 4;
  do {
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if (param_2 == (short *)0x0) {
    param_2 = (short *)&lbl_820E975C;
  }
  fn_82273CD8(auStack_80,5);
  psStack_68 = (short *)&lbl_820E975C;
  if (param_3 != (short *)0x0) {
    psStack_68 = param_3;
  }
  psStack_78 = param_2;
  fn_82273CD8(auStack_70,5);
  fn_82273CD8(auStack_60,3);
  uStack_90 = (longlong)param_4;
  dStack_58 = (double)uStack_90;
  fn_82273CD8(auStack_50,3);
  uStack_90 = (longlong)param_5;
  dStack_48 = (double)uStack_90;
  puVar1 = (undefined4 *)fn_82279C58(auStack_88,param_1);
  fn_82672C20(*puVar1,0xffffffff821a8c5c,auStack_80,4);
  if (iStack_84 != 0) {
    fn_822315A0();
  }
  puVar3 = auStack_40;
  lVar4 = 3;
  do {
    puVar3 = puVar3 + -0x10;
    fn_82273C88(puVar3);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  return;
}

