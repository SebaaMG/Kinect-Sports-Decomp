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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229A0B8();
extern int fn_82672C20();
extern int fn_82F64988();
extern unsigned int uStack_38;
extern unsigned int uStack_48;
extern unsigned int uStack_70;


void fn_82299D40(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  double dVar6;
  undefined8 uStack_70;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  undefined1 auStack_30 [48];
  
  iVar1 = param_1[0x484];
  bVar2 = true;
  if ((-1 < iVar1) && ((iVar1 < 4 || ((7 < iVar1 && (iVar1 < 0xb)))))) {
    bVar2 = false;
  }
  if ((param_1[0x48a] == 0) || ((bVar2 && (param_1[0x485] != 3)))) {
    fn_82F64988(param_1 + 0x83,0x400,param_2);
    fn_82F64988(param_1 + 0x283,0x400,param_3);
    param_1[0x485] = 3;
    fn_8229A0B8(param_1);
  }
  else {
    puVar3 = (undefined4 *)((int)&uStack_70 + 4);
    lVar5 = 3;
    do {
      puVar3[3] = 0;
      puVar3 = puVar3 + 4;
      *puVar3 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uStack_70 = (ulonglong)(uint)param_1[2];
    dVar6 = (double)uStack_70;
    fn_82273CD8(auStack_60,3);
    dStack_58 = dVar6;
    fn_82273CD8(auStack_50,5);
    uStack_48 = (undefined4)param_2;
    fn_82273CD8(auStack_40,5);
    uStack_38 = (undefined4)param_3;
    fn_82672C20(*param_1,0xffffffff821aacd8,auStack_60,3);
    param_1[0x489] = 0;
    param_1[0x483] = 3;
    puVar4 = auStack_30;
    param_1[0x488] = 1;
    lVar5 = 2;
    do {
      puVar4 = puVar4 + -0x10;
      fn_82273C88(puVar4);
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return;
}

