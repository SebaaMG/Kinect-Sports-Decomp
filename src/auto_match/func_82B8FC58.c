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
extern unsigned int *auStack_50;
extern int fn_82924628();
extern unsigned int lbl_8316E320;


void fn_82B8FC58(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_50 [80];
  
  iVar1 = param_1[0x1a];
  iVar2 = param_1[0x1d];
  iVar3 = param_1[8];
  iVar4 = param_1[0xd];
  iVar5 = param_1[6];
  param_1[0x1a] = 1;
  param_1[0x1d] = param_1[0x1e];
  param_1[8] = (int)auStack_50;
  param_1[0xd] = (int)&lbl_8316E320;
  param_1[6] = 0;
  if ((param_1[2] != 1) && (param_1[2] != 4)) {
    iVar7 = param_1[0x15];
    iVar6 = param_1[0x16];
    param_1[0x16] = (int)(param_1 + 9);
    param_1[0x15] = 1;
    fn_82924628();
    param_1[0x15] = iVar7;
    param_1[0x16] = iVar6;
  }
  (**(code **)(*param_1 + 8))(param_1,0,0,param_1 + 9);
  (**(code **)(*param_1 + 4))(param_1,0,0,param_1 + 9);
  param_1[0x1a] = iVar1;
  param_1[0x1d] = iVar2;
  param_1[8] = iVar3;
  param_1[0xd] = iVar4;
  param_1[6] = iVar5;
  return;
}

