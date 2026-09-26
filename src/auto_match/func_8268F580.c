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
extern int fn_8268F498();
extern unsigned int lbl_8200E3B0;


longlong fn_8268F580(longlong param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = ((param_2 & 0xffffffff) >> 3 & 0x1ffffffc) + param_1;
  uVar4 = (param_2 & 0xffffffff) >> 5;
  uVar1 = *(uint *)lVar2 & *(uint *)(&lbl_8200E3B0 + ((uint)((param_2 & 0xffffffff) << 2) & 0x7c));
  if (uVar1 == *(uint *)(&lbl_8200E3B0 + ((uint)((param_2 & 0xffffffff) << 2) & 0x7c))) {
    lVar5 = -(param_2 & 0x1f);
    uVar3 = (uVar4 + 1) * 0x20 & 0xffffffe0;
    do {
      lVar5 = lVar5 + 0x20;
      if ((ulonglong)param_3 <= (uVar3 & 0xffffffff)) break;
      lVar2 = lVar2 + 4;
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 0x20;
    } while (*(int *)lVar2 == -1);
    lVar2 = fn_8268F498(*(undefined4 *)((int)((uVar4 & 0xffffffff) << 2) + (int)param_1));
    lVar2 = lVar2 + lVar5;
  }
  else {
    lVar2 = fn_8268F498(uVar1 >> (int)(param_2 & 0x1f));
  }
  return lVar2;
}

