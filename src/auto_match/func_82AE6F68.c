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


void fn_82AE6F68(int param_1,uint param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = (ulonglong)param_2;
  if (((ulonglong)param_2 + param_3 & 0xffffffff) <= (ulonglong)param_2) {
    return;
  }
  uVar3 = ((ulonglong)param_2 & 0x3fffffff) << 2;
  do {
    uVar4 = ((2L << (uVar3 + 3 & 0x3f)) - 1U &
             *(ulonglong *)(((int)((uVar3 & 0xffffffff) >> 6) + 1) * 8 + param_1) &
            -1L << (uVar3 & 0x3f)) >> (uVar3 & 0x3f);
    if ((uVar4 & 0xffffffff) != 0) {
      iVar1 = ((int)((uVar2 & 0xfffffff) >> 4) + 1) * 8;
      *(ulonglong *)(iVar1 + param_1) =
           *(longlong *)(iVar1 + param_1) - ((uVar4 & 0xf) << ((uVar2 & 0xf) << 2));
    }
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 + 4;
  } while ((uVar2 & 0xffffffff) < ((ulonglong)param_2 + param_3 & 0xffffffff));
  return;
}

