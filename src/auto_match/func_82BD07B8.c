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
extern int fn_82AB15D0();


longlong fn_82BD07B8(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar2 = (int)param_3;
  iVar1 = (int)param_2;
  if (iVar1 == iVar2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e824c,0xffffffff820e81d8,0x2b2);
  }
  lVar3 = param_2;
  if (iVar2 <= iVar1) {
    lVar3 = param_3;
  }
  if (iVar1 <= iVar2) {
    param_2 = param_3;
  }
  uVar4 = ((int)param_2 + -1) * (int)param_2;
  return (longlong)((int)uVar4 >> 1) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 1) != 0) + lVar3;
}

