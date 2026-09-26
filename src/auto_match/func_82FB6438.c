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


ulonglong fn_82FB6438(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  lVar3 = (longlong)((int)(*(int *)(param_1 + 0xa4) - uVar1) / 0x34) + -1;
  if (-1 < lVar3) {
    lVar4 = lVar3 * 0x34;
    do {
      iVar2 = *(int *)((int)lVar4 + uVar1);
      if (((iVar2 == -1) || (iVar2 == param_2)) &&
         ((iVar2 = *(int *)((int)(lVar4 + (ulonglong)uVar1) + 4), iVar2 == -1 || (iVar2 == param_3))
         )) {
        return lVar4 + (ulonglong)uVar1;
      }
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + -0x34;
    } while (-1 < lVar3);
  }
  return (ulonglong)*(uint *)(param_1 + 0xa0);
}

