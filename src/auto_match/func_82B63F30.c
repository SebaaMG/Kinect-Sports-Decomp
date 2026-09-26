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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82F68CC0();


undefined8 fn_82B63F30(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  
  iVar7 = *param_1;
  if ((((*(uint *)(iVar7 + 0x48) | *(uint *)(iVar7 + 0x44) | *(uint *)(iVar7 + 0x3c) |
        *(uint *)(iVar7 + 0x40)) & 3) != 0) ||
     (iVar3 = param_1[1],
     ((*(uint *)(iVar3 + 0x48) | *(uint *)(iVar3 + 0x44) | *(uint *)(iVar3 + 0x40) |
      *(uint *)(iVar3 + 0x3c)) & 3) != 0)) {
    return 0xffffffff80004005;
  }
  iVar3 = param_1[1];
  uVar4 = (CONCAT44(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 4)) & 0xfffffffffffffeff) -
          0x1a200052;
  if (uVar4 != 0) {
    if (((uVar4 & 0xffffffff) == 1) || ((uVar4 & 0xffffffff) == 2)) {
      iVar5 = 0x10;
      goto LAB_82b63fd8;
    }
    if (((uVar4 & 0xffffffff) != 0x28) && ((uVar4 & 0xffffffff) != 0x29)) {
      return 0xffffffff80004005;
    }
  }
  iVar5 = 8;
LAB_82b63fd8:
  iVar1 = param_1[1];
  uVar8 = 0;
  uVar2 = *(uint *)(iVar1 + 0x68);
  lVar10 = (longlong)(int)(*(uint *)(iVar1 + 0x40) >> 2) * (longlong)*(int *)(iVar1 + 0x60) +
           (longlong)*(int *)(iVar1 + 100) * (longlong)*(int *)(iVar1 + 0x4c) +
           (longlong)(int)(*(uint *)(iVar1 + 0x3c) >> 2) * (longlong)iVar5 +
           (ulonglong)*(uint *)(iVar1 + 0x20);
  lVar9 = (longlong)(int)(*(uint *)(iVar7 + 0x40) >> 2) * (longlong)*(int *)(iVar7 + 0x60) +
          (longlong)*(int *)(iVar7 + 100) * (longlong)*(int *)(iVar7 + 0x4c) +
          (longlong)(int)(*(uint *)(iVar7 + 0x3c) >> 2) * (longlong)iVar5 +
          (ulonglong)*(uint *)(iVar7 + 0x20);
  if (*(int *)(iVar3 + 0x70) != 0) {
    uVar6 = *(uint *)(iVar3 + 0x6c);
    do {
      uVar13 = 0;
      lVar11 = lVar9;
      lVar12 = lVar10;
      if (uVar6 != 0) {
        do {
          fn_82F68CC0(lVar12,lVar11,(longlong)(int)(uVar2 >> 2) * (longlong)iVar5);
          iVar3 = param_1[1];
          iVar7 = *param_1;
          uVar13 = uVar13 + 4;
          uVar6 = *(uint *)(iVar3 + 0x6c);
          lVar12 = (ulonglong)*(uint *)(iVar3 + 0x60) + lVar12;
          lVar11 = (ulonglong)*(uint *)(iVar7 + 0x60) + lVar11;
        } while (uVar13 < uVar6);
      }
      uVar8 = uVar8 + 1;
      lVar10 = (ulonglong)*(uint *)(iVar3 + 100) + lVar10;
      lVar9 = (ulonglong)*(uint *)(iVar7 + 100) + lVar9;
    } while (uVar8 < *(uint *)(iVar3 + 0x70));
  }
  return 0;
}

