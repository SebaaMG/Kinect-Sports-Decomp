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
extern int fn_8288D230();
extern int fn_82F63CA0();
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


void fn_8288E548(uint *param_1,ulonglong param_2,undefined4 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uStack00000024;
  
  uVar2 = (ulonglong)param_1[1];
  uVar1 = (int)(param_1[1] - *param_1) >> 2;
  uStack00000024 = param_3;
  if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
    fn_8288D230(param_1,uVar2,param_2 - (longlong)(int)uVar1,&stack0x00000024);
  }
  else if (((param_2 & 0xffffffff) < (ulonglong)uVar1) &&
          (uVar3 = (param_2 & 0x3fffffff) * 4 + (ulonglong)*param_1, (uVar3 & 0xffffffff) != uVar2))
  {
    fn_82F63CA0(uVar3,uVar2,0);
    param_1[1] = (uint)uVar3;
  }
  return;
}

