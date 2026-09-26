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
extern int fn_82CFEAC8();


undefined8 fn_82CFEB80(int param_1,int param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar3;
  iVar4 = 0;
  if (0 < (int)param_3) {
    do {
      uVar1 = fn_82CFEAC8((*(byte *)(iVar4 + param_2) ^ uVar2) & 0xff);
      iVar4 = iVar4 + 1;
      uVar2 = uVar1 ^ (uVar2 & 0xffffffff) >> 8;
      uVar3 = (uint)uVar2;
    } while (iVar4 < (int)param_3);
  }
  *(uint *)(param_1 + 8) = uVar3;
  return param_3;
}

