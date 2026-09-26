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


void fn_82898770(int param_1,uint param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(), iVar2 == 0)) {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      return;
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
    if (iVar2 == 0) {
      return;
    }
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
      goto LAB_82898824;
    }
  }
  else if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 4))();
    goto LAB_82898824;
  }
  iVar2 = 0;
LAB_82898824:
  iVar2 = iVar2 + ((int)param_2 >> 3) + (uint)((int)param_2 < 0 && (param_2 & 7) != 0);
  bVar1 = (byte)(1 << (param_2 + (((int)param_2 >> 3) +
                                 (uint)((int)param_2 < 0 && (param_2 & 7) != 0)) * -8 & 0x3f));
  if (param_3 == '\0') {
    *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & ~bVar1;
  }
  else {
    *(byte *)(iVar2 + 4) = bVar1 | *(byte *)(iVar2 + 4);
  }
  return;
}

