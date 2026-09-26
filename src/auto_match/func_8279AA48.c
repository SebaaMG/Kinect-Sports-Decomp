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
extern int fn_8279FB38();


undefined4 fn_8279AA48(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  if ((*(byte *)(param_1 + 0x13f) & 3) != 0) {
    fn_8279FB38();
    *(byte *)(param_1 + 0x13f) = *(byte *)(param_1 + 0x13f) & 0xfc;
  }
  if (*(short *)(param_1 + 0x110) == *(short *)(param_1 + 0x138)) goto LAB_8279abfc;
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 == 0) {
LAB_8279abf0:
    iVar9 = 0;
  }
  else {
    uVar4 = (ulonglong)uVar1;
    iVar2 = *(int *)(param_1 + 0x24);
    iVar9 = 0;
    uVar6 = uVar4 - 1;
    piVar3 = *(int **)((int)((uVar6 & 0xffffffff) << 2) + iVar2);
    if (*(int *)(param_1 + 0x114) == 0) {
LAB_8279aad0:
      bVar5 = true;
    }
    else {
      bVar5 = false;
      if ((*(ushort *)(*(int *)(param_1 + 0x114) + 0x68) & 1) != 0) goto LAB_8279aad0;
    }
    if (bVar5) {
      if (*piVar3 < 0) {
        uVar8 = (uint)*(byte *)(piVar3 + 2);
      }
      else {
        uVar8 = piVar3[8];
      }
      if (uVar8 == 0) {
        if (-1 < (int)uVar6) {
          uVar6 = uVar4 - 2;
        }
        iVar9 = 1;
      }
    }
    if ((uVar4 <= (uVar6 & 0xffffffff)) || (bVar5 = false, (int)uVar6 < 0)) {
      bVar5 = true;
    }
    if (bVar5) goto LAB_8279abf0;
    lVar7 = (uVar6 & 0x3fffffff) << 2;
    piVar3 = *(int **)(iVar2 + (int)lVar7);
    if (*piVar3 < 0) {
      uVar8 = (uint)*(ushort *)((int)piVar3 + 0x16);
    }
    else {
      uVar8 = piVar3[6];
    }
    while( true ) {
      if ((uVar4 <= (uVar6 & 0xffffffff)) || (bVar5 = false, (int)uVar6 < 0)) {
        bVar5 = true;
      }
      if (bVar5) break;
      if (iVar9 != 0) {
        if ((float)(longlong)*(int *)(*(int *)((int)lVar7 + iVar2) + 0x10) <
            ((float)(longlong)(int)(piVar3[4] + uVar8) - *(float *)(param_1 + 0x48)) +
            *(float *)(param_1 + 0x40)) break;
      }
      if (-1 < (int)uVar6) {
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -4;
      }
      iVar9 = iVar9 + 1;
    }
    iVar9 = uVar1 - iVar9;
  }
  *(int *)(param_1 + 0x10c) = iVar9;
  *(short *)(param_1 + 0x110) = *(short *)(param_1 + 0x138);
LAB_8279abfc:
  return *(undefined4 *)(param_1 + 0x10c);
}

