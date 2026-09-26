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
extern int fn_8268F518();
extern unsigned int lbl_8200E4B0;


longlong fn_8268F620(longlong param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar2 = *(uint *)(((uint)((param_2 & 0xffffffff) >> 3) & 0x1ffffffc) + (int)param_1) |
          *(uint *)(&lbl_8200E4B0 + ((uint)((param_2 & 0xffffffff) << 2) & 0x7c));
  if (uVar2 == *(uint *)(&lbl_8200E4B0 + ((uint)((param_2 & 0xffffffff) << 2) & 0x7c))) {
    uVar4 = ((param_2 & 0xffffffff) >> 5) + 1;
    lVar5 = -(param_2 & 0x1f);
    lVar3 = uVar4 * 4 + param_1;
    iVar1 = *(int *)lVar3;
    while( true ) {
      lVar5 = lVar5 + 0x20;
      if (iVar1 != 0) break;
      lVar3 = lVar3 + 4;
      iVar1 = *(int *)lVar3;
      uVar4 = uVar4 + 1;
    }
    lVar3 = fn_8268F518(*(undefined4 *)((int)((uVar4 & 0xffffffff) << 2) + (int)param_1));
    lVar3 = lVar3 + lVar5;
  }
  else {
    lVar3 = fn_8268F518(uVar2 >> (int)(param_2 & 0x1f));
  }
  return lVar3;
}

