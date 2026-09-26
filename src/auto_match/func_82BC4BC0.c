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
extern int fn_82B7BD28();
extern int fn_82BBFE28();


undefined4 * fn_82BC4BC0(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  param_1[8] = (int)param_2;
  lVar2 = fn_82BBFE28(param_2 + 0x80);
  param_1[7] = (int)lVar2;
  lVar2 = (lVar2 + 1U & 0x3fffffff) << 2;
  iVar1 = *(int *)(param_1[8] + 0xc);
  param_1[9] = iVar1;
  uVar3 = fn_82B7BD28(*(undefined4 *)(iVar1 + 0x5b0),lVar2);
  param_1[2] = uVar3;
  uVar3 = fn_82B7BD28(*(undefined4 *)(param_1[9] + 0x5b0),lVar2);
  param_1[1] = uVar3;
  uVar3 = fn_82B7BD28(*(undefined4 *)(param_1[9] + 0x5b0),lVar2);
  param_1[4] = uVar3;
  uVar3 = fn_82B7BD28(*(undefined4 *)(param_1[9] + 0x5b0),lVar2);
  param_1[3] = uVar3;
  uVar3 = fn_82B7BD28(*(undefined4 *)(param_1[9] + 0x5b0),lVar2);
  *param_1 = uVar3;
  uVar3 = fn_82B7BD28(*(undefined4 *)(param_1[9] + 0x5b0),
                            ((ulonglong)(uint)param_1[7] + 1 & 0x3fffffff) << 2);
  param_1[6] = uVar3;
  uVar3 = fn_82B7BD28(*(undefined4 *)(param_1[9] + 0x5b0),
                            ((ulonglong)(uint)param_1[7] + 1 & 0x3fffffff) << 2);
  param_1[5] = uVar3;
  return param_1;
}

