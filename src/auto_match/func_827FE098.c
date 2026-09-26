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
extern int fn_827FA1E8();


longlong fn_827FE098(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x98);
  uVar1 = *(ushort *)(iVar3 + 0x2e);
  lVar4 = fn_827FA1E8();
  uVar2 = *(ushort *)(iVar3 + 0x32);
  lVar4 = lVar4 + (ulonglong)uVar1;
  return ((ulonglong)uVar2 * 0xc + lVar4 & 0x3fffffff) * 4 + (longlong)((int)(uVar2 + 7) >> 3) +
         ((lVar4 + 7U & 0xffffffff) >> 3);
}

