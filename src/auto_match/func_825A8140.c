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
extern unsigned int lbl_821CC160;


void fn_825A8140(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  
  fVar1 = lbl_821CC160;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    fVar3 = lbl_821CC160;
    if (*(int *)(iVar2 + 0x1c) != 0) {
      fVar3 = *(float *)(*(int *)(iVar2 + 0x1c) + 0x118);
    }
    *(float *)(param_1 + 0x18) = fVar3;
    if (*(int *)(iVar2 + 0x1c) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(*(int *)(iVar2 + 0x1c) + 0x40);
    }
    *(uint *)(param_1 + 0x24) = uVar4 & 1;
    if (*(int *)(iVar2 + 0x1c) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(*(int *)(iVar2 + 0x1c) + 0x40);
    }
    *(uint *)(param_1 + 0x28) = uVar4 >> 1 & 1;
    iVar2 = *(int *)(iVar2 + 0x1c);
    if (iVar2 != 0) {
      if ((float *)(param_1 + 0x20) != (float *)0x0) {
        if (fVar1 < *(float *)(iVar2 + 0x114)) {
          fVar1 = *(float *)(iVar2 + 0x124) / *(float *)(iVar2 + 0x114);
        }
        *(float *)(param_1 + 0x20) = fVar1;
      }
      fVar1 = *(float *)(iVar2 + 0x124);
    }
    *(float *)(param_1 + 0x1c) = fVar1;
    return;
  }
  return;
}

