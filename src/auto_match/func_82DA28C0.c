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


void fn_82DA28C0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_3 == (int *)0x0) {
    param_3 = *(int **)(*(int *)(param_1 + 8) + 0x78);
  }
  iVar1 = *param_3;
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x164) - 1;
  if (-1 < (longlong)uVar3) {
    lVar4 = (uVar3 & 0x3fffffff) << 2;
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x160) + (int)lVar4);
      (**(code **)((uint)*(byte *)((*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0xd) * 0x20 +
                                   *(int *)(*piVar2 + 0xc) + iVar1) * 0x14 + iVar1 + 0x9a4))
                ((int *)(param_1 + 0x10),piVar2,param_3,param_2);
      if (*(char *)(param_2 + 4) != '\0') {
        return;
      }
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (longlong)uVar3);
  }
  return;
}

