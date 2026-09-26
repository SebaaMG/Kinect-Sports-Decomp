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
extern int fn_82BE5C78();
extern int fn_82BE5CC0();
extern unsigned int lbl_831751D0;


void fn_82BE5DC0(int param_1,int *param_2,ushort *param_3)

{
  ulonglong uVar1;
  ushort uVar4;
  int iVar2;
  undefined4 uVar3;
  int *piVar5;
  ushort *puVar6;
  ulonglong uVar7;
  
  if (param_3 != (ushort *)0x0) {
    puVar6 = param_3;
    piVar5 = param_2;
    uVar4 = fn_82BE5C78();
    *puVar6 = uVar4;
    if (uVar4 == 0) {
      *piVar5 = 0;
    }
    else if (((*(int *)(param_1 + 0x1c) != 0) && (0 < *(int *)(param_1 + 0x28))) &&
            ((int)(uint)uVar4 <= *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20))) {
      iVar2 = (*(code *)lbl_831751D0)((ulonglong)uVar4 << 2);
      *param_2 = iVar2;
      if ((iVar2 != 0) && (*param_3 != 0)) {
        uVar7 = 0;
        do {
          uVar3 = fn_82BE5CC0(param_1);
          uVar1 = uVar7 & 0xffffffff;
          uVar7 = uVar7 + 1 & 0xffff;
          *(undefined4 *)((int)(uVar1 << 2) + *param_2) = uVar3;
        } while (uVar7 < *param_3);
      }
    }
  }
  return;
}

