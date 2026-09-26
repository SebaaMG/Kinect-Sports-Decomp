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
extern int fn_82F68CC0();
extern unsigned int lbl_831751D0;


void fn_82BE5E88(int param_1,undefined4 *param_2,ushort *param_3)

{
  ushort uVar2;
  ulonglong uVar1;
  undefined4 *puVar3;
  ushort *puVar4;
  
  if (param_3 != (ushort *)0x0) {
    puVar4 = param_3;
    puVar3 = param_2;
    uVar2 = fn_82BE5C78();
    *puVar4 = uVar2;
    if (uVar2 == 0) {
      *puVar3 = 0;
    }
    else if (((*(int *)(param_1 + 0x1c) != 0) && (0 < *(int *)(param_1 + 0x28))) &&
            ((int)(uint)uVar2 <= *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20))) {
      uVar1 = (*(code *)lbl_831751D0)();
      *param_2 = (int)uVar1;
      if ((uVar1 & 0xffffffff) != 0) {
        fn_82F68CC0(uVar1,(ulonglong)*(uint *)(param_1 + 0x20) +
                           (ulonglong)*(uint *)(param_1 + 0x1c),*param_3);
        *(uint *)(param_1 + 0x20) = (uint)*param_3 + *(int *)(param_1 + 0x20);
      }
    }
  }
  return;
}

