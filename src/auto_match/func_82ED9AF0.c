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
extern int fn_82ED4C80();
extern int fn_82ED95B8();
extern unsigned int lbl_820525B0;


void fn_82ED9AF0(int param_1,longlong param_2,longlong param_3,ulonglong param_4,uint param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = (int)param_4;
  uVar2 = (longlong)iVar1 * (longlong)(int)param_5;
  uVar5 = lbl_820525B0;
  uVar4 = fn_82ED4C80(lbl_820525B0);
  *(undefined8 *)(param_1 + 0x4f00) = uVar4;
  lVar3 = (longlong)((int)uVar2 >> 2) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 3) != 0);
  uVar4 = fn_82ED4C80(uVar5,param_1,uVar2 + param_2,uVar2 + param_3,lVar3);
  *(undefined8 *)(param_1 + 0x4f08) = uVar4;
  uVar4 = fn_82ED4C80(uVar5,param_1,lVar3 + uVar2 + param_2,lVar3 + uVar2 + param_3,lVar3);
  *(undefined8 *)(param_1 + 0x4f10) = uVar4;
  uVar5 = fn_82ED95B8(uVar5,param_1,param_2,param_3,
                            (longlong)(iVar1 >> 3) + (ulonglong)(iVar1 < 0 && (param_4 & 7) != 0),
                            (longlong)((int)param_5 >> 3) +
                            (ulonglong)((int)param_5 < 0 && (param_5 & 7) != 0),param_4);
  *(undefined8 *)(param_1 + 0x4f18) = uVar5;
  return;
}

