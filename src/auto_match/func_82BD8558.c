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


void fn_82BD8558(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  piVar2 = (int *)(param_1 + 0x188);
  uVar1 = ((param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0x44)) + 0x800;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(longlong *)(param_1 + 0x18) = lVar3 + *(longlong *)(param_1 + 0x18);
  *(short *)(param_1 + 0x20) =
       (short)uVar1 -
       (short)(((longlong)((int)uVar1 >> 0xb) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 0x7ff) != 0)
               & 0xffffffff) << 0xb);
  iVar4 = *(int *)(param_1 + 0x188);
  if (iVar4 == 0) {
    return;
  }
  if (iVar4 == *(int *)(param_1 + 0x18c)) {
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  *piVar2 = *(int *)(iVar4 + 4);
  *(undefined4 *)(iVar4 + 4) = 0;
  if (iVar4 == 0) {
    return;
  }
  do {
    *(undefined4 *)(iVar4 + 4) = 0;
    if (*(int *)(param_1 + 0x184) == 0) {
      *(int *)(param_1 + 0x180) = iVar4;
    }
    else {
      *(int *)(*(int *)(param_1 + 0x184) + 4) = iVar4;
    }
    *(int *)(param_1 + 0x184) = iVar4;
    iVar4 = *piVar2;
    if (iVar4 == 0) {
      return;
    }
    if (iVar4 == *(int *)(param_1 + 0x18c)) {
      *(undefined4 *)(param_1 + 0x18c) = 0;
    }
    *piVar2 = *(int *)(iVar4 + 4);
    *(undefined4 *)(iVar4 + 4) = 0;
  } while (iVar4 != 0);
  return;
}

