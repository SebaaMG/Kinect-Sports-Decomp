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


undefined1 fn_824B1410(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (3 < *(uint *)(iVar1 + 0x14)) {
    if (*(int *)(iVar1 + 0x14) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar1 + 0x14) + -1;
      if (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc) >> 5 <= iVar6) {
        iVar6 = iVar6 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 5);
      }
      iVar6 = iVar6 * 0x20 + *(int *)(iVar1 + 0xc);
    }
    uVar4 = 0;
    fVar3 = *(float *)(iVar1 + 0x28);
    fVar2 = lbl_821CC160;
    while ((lbl_821CC160 < fVar3 && (uVar4 < *(int *)(iVar1 + 0x14) - 1U))) {
      uVar4 = uVar4 + 1;
      if (uVar4 < *(uint *)(iVar1 + 0x14)) {
        iVar5 = (*(uint *)(iVar1 + 0x14) - uVar4) + -1;
        if (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc) >> 5 <= iVar5) {
          iVar5 = iVar5 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 5);
        }
        iVar5 = iVar5 * 0x20 + *(int *)(iVar1 + 0xc);
      }
      else {
        iVar5 = 0;
      }
      fVar3 = fVar3 - *(float *)(iVar5 + 0x10);
      if (uVar4 < *(uint *)(iVar1 + 0x14)) {
        iVar5 = (*(uint *)(iVar1 + 0x14) - uVar4) + -1;
        if (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc) >> 5 <= iVar5) {
          iVar5 = iVar5 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 5);
        }
        iVar5 = iVar5 * 0x20 + *(int *)(iVar1 + 0xc);
      }
      else {
        iVar5 = 0;
      }
      fVar2 = *(float *)(iVar5 + 0x10) + fVar2;
    }
    if (uVar4 < *(uint *)(iVar1 + 0x14)) {
      iVar5 = (*(uint *)(iVar1 + 0x14) - uVar4) + -1;
      if (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc) >> 5 <= iVar5) {
        iVar5 = iVar5 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 5);
      }
      iVar5 = iVar5 * 0x20 + *(int *)(iVar1 + 0xc);
    }
    else {
      iVar5 = 0;
    }
    *(bool *)(iVar1 + 0x1c) =
         *(float *)(iVar1 + 0x24) <
         (*(float *)(iVar6 + 4) - *(float *)(iVar5 + 4)) * (*(float *)(iVar1 + 0x28) / fVar2);
  }
  return *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x1c);
}

