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
extern int fn_82BD3690();


void fn_82BCFA58(int param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar1 = (int)param_2;
  uVar5 = (ulonglong)*(uint *)(iVar1 + 0x14);
  if (0 < (int)*(uint *)(iVar1 + 0x14)) {
    lVar4 = (uVar5 + 7 & 0x3fffffff) * 4 + param_2;
    do {
      uVar3 = fn_82BD3690(param_2,uVar5);
      if (-1 < (int)uVar3) {
        iVar2 = ((uVar3 >> 5) + 2) * 4;
        if ((*(uint *)(iVar2 + param_3) >> (uVar3 & 0x1f) & 1) == 0) {
          *(uint *)(iVar2 + *(int *)(param_1 + 0xb0)) =
               1 << (uVar3 & 0x1f) | *(uint *)(iVar2 + *(int *)(param_1 + 0xb0));
          (**(code **)(*(int *)*(undefined4 *)lVar4 + 4))((int *)*(undefined4 *)lVar4,1);
        }
      }
      uVar5 = uVar5 - 1;
      lVar4 = lVar4 + -4;
    } while (0 < (longlong)uVar5);
  }
  if (((0 < *(int *)(iVar1 + 0x10)) && ((*(uint *)(iVar1 + 0xe4) >> 1 & 1) == 0)) &&
     (uVar3 = fn_82BD3690(param_2,0), -1 < (int)uVar3)) {
    iVar1 = ((uVar3 >> 5) + 2) * 4;
    *(uint *)(iVar1 + param_3) = 1 << (uVar3 & 0x1f) | *(uint *)(iVar1 + param_3);
  }
  return;
}

