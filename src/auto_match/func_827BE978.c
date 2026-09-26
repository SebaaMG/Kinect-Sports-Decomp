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
extern int fn_827C1A60();
extern int fn_82F68CC0();


void fn_827BE978(int *param_1,uint *param_2,int param_3,undefined8 param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar2 = fn_827C1A60();
    *param_2 = uVar2;
  }
  fn_82F68CC0(*param_2,param_3,0x11);
  lVar4 = 0;
  iVar3 = 1;
  lVar5 = 0x10;
  do {
    pbVar1 = (byte *)(iVar3 + param_3);
    iVar3 = iVar3 + 1;
    lVar4 = (ulonglong)*pbVar1 + lVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if (((int)lVar4 < 1) || (0x100 < (int)lVar4)) {
    *(undefined4 *)(*param_1 + 0x14) = 8;
    (**(code **)*param_1)(param_1);
  }
  fn_82F68CC0((ulonglong)*param_2 + 0x11,param_4,lVar4);
  *(undefined1 *)(*param_2 + 0x111) = 0;
  return;
}

