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
extern int fn_8279AE60();


undefined8 fn_8279AED8(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  if (*(uint *)(param_1 + 0x28) <= param_2) {
    param_2 = *(uint *)(param_1 + 0x28) - 1;
  }
  if ((((int *)(param_1 + 0x24) == (int *)0x0) || (*(uint *)(param_1 + 0x28) <= param_2)) ||
     (bVar3 = false, (int)param_2 < 0)) {
    bVar3 = true;
  }
  if (bVar3) {
    uVar4 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
    iVar6 = param_2 * 4;
    piVar2 = *(int **)(iVar1 + iVar6);
    if (*piVar2 < 0) {
      uVar7 = (uint)*(ushort *)((int)piVar2 + 0x16);
      uVar8 = (ulonglong)*(char *)((int)piVar2 + 0x1d);
    }
    else {
      uVar7 = piVar2[6];
      uVar8 = (ulonglong)*(short *)(piVar2 + 10);
    }
    uVar5 = param_2;
    if (-1 < (int)param_2) {
      uVar9 = param_2;
      do {
        if ((*(uint *)(param_1 + 0x28) <= param_2) || (bVar3 = false, (int)param_2 < 0)) {
          bVar3 = true;
        }
        if ((bVar3) ||
           ((float)(longlong)*(int *)(*(int *)(iVar6 + iVar1) + 0x10) <
            ((float)(longlong)
                    (int)(piVar2[4] +
                         ((int)((uVar8 & 0xffffffff) >> 0x1f) + -1 + (uint)(uVar8 == 0) &
                         (uint)uVar8) + uVar7) - *(float *)(param_1 + 0x48)) +
            *(float *)(param_1 + 0x40))) break;
        uVar10 = uVar9 - 1;
        if (-1 < (int)param_2) {
          param_2 = param_2 - 1;
          iVar6 = iVar6 + -4;
        }
        uVar5 = uVar9;
        uVar9 = uVar10;
      } while (-1 < (int)uVar10);
    }
    uVar4 = fn_8279AE60(param_1,uVar5);
  }
  return uVar4;
}

