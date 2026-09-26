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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82E07698();


void fn_82E07080(int param_1,int param_2,int *param_3)

{
  ulonglong uVar1;
  char cVar4;
  int iVar2;
  int iVar3;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar9;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar10;
  int iVar12;
  longlong lVar11;
  int iVar13;
  
  if ((param_2 != *(int *)(param_1 + 0x44)) ||
     (cVar4 = fn_82E07698(param_3,param_1 + 0x5c), cVar4 == '\0')) {
    piVar10 = (int *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (0 < param_3[1]) {
      iVar13 = 0;
      do {
        iVar12 = *param_3 + iVar13;
        iVar2 = fn_82CE5410();
        if (*(uint *)(param_1 + 0x60) == (*(uint *)(param_1 + 100) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),piVar10,0xc);
        }
        puVar9 = (undefined4 *)(*(int *)(param_1 + 0x60) * 0xc + *piVar10);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          *(undefined2 *)(puVar9 + 1) = 0;
          *(undefined2 *)((int)puVar9 + 6) = 0;
          puVar9[2] = 0;
        }
        iVar2 = *(int *)(param_1 + 0x60);
        *(int *)(param_1 + 0x60) = iVar2 + 1;
        puVar9 = (undefined4 *)(iVar2 * 0xc + *piVar10);
        *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(iVar12 + 4);
        *(undefined2 *)((int)puVar9 + 6) = *(undefined2 *)(iVar12 + 6);
        uVar5 = (uint)*(ushort *)(iVar12 + 4);
        if (uVar5 - 1 < 7) {
          if (uVar5 == 2) {
            *puVar9 = *(undefined4 *)(param_1 + 0x54);
            *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 4;
          }
          else if (uVar5 == 3) {
            *puVar9 = *(undefined4 *)(param_1 + 0x50);
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 4;
          }
          else if (uVar5 == 4) {
            *puVar9 = *(undefined4 *)(param_1 + 0x4c);
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 4;
          }
          else if (uVar5 == 5) {
            *puVar9 = *(undefined4 *)(param_1 + 0x4c);
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 8;
          }
          else if ((uVar5 == 6) || (uVar5 != 1)) {
            *puVar9 = *(undefined4 *)(param_1 + 0x48);
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 0x10;
          }
          else {
            *puVar9 = *(undefined4 *)(param_1 + 0x58);
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 4;
          }
        }
        iVar3 = iVar3 + 1;
        iVar13 = iVar13 + 0xc;
      } while (iVar3 < param_3[1]);
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x60)) {
      iVar13 = 0;
      do {
        uVar5 = (uint)*(ushort *)(iVar13 + *piVar10 + 4);
        if (uVar5 - 1 < 7) {
          if (uVar5 == 2) {
            uVar6 = *(undefined4 *)(param_1 + 0x54);
          }
          else if (uVar5 == 3) {
            uVar6 = *(undefined4 *)(param_1 + 0x50);
          }
          else if ((uVar5 == 4) || (uVar5 == 5)) {
            uVar6 = *(undefined4 *)(param_1 + 0x4c);
          }
          else if ((uVar5 == 6) || (uVar5 != 1)) {
            uVar6 = *(undefined4 *)(param_1 + 0x48);
          }
          else {
            uVar6 = *(undefined4 *)(param_1 + 0x58);
          }
          *(undefined4 *)(iVar13 + *piVar10 + 8) = uVar6;
        }
        iVar3 = iVar3 + 1;
        iVar13 = iVar13 + 0xc;
      } while (iVar3 < *(int *)(param_1 + 0x60));
    }
    *(int *)(param_1 + 0x44) = param_2;
    lVar11 = (longlong)*(int *)(param_1 + 0x58) * (longlong)param_2;
    iVar3 = fn_82CE5410();
    iVar13 = (int)lVar11;
    if ((int)(*(uint *)(param_1 + 0x40) & 0x3fffffff) < iVar13) {
      lVar7 = ((ulonglong)*(uint *)(param_1 + 0x40) & 0x3fffffff) << 1;
      if ((int)lVar7 <= iVar13) {
        lVar7 = lVar11;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1 + 0x38,lVar7,1);
    }
    *(int *)(param_1 + 0x3c) = iVar13;
    uVar1 = ((longlong)*(int *)(param_1 + 0x54) * (longlong)param_2 & 0xffffffffU) >> 1;
    iVar3 = fn_82CE5410();
    uVar5 = (uint)uVar1;
    if ((*(uint *)(param_1 + 0x34) & 0x3fffffff) < uVar5) {
      uVar8 = ((ulonglong)*(uint *)(param_1 + 0x34) & 0x3fffffff) << 1;
      if ((uint)uVar8 <= uVar5) {
        uVar8 = uVar1;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1 + 0x2c,uVar8,2);
    }
    *(uint *)(param_1 + 0x30) = uVar5;
    uVar1 = ((longlong)*(int *)(param_1 + 0x50) * (longlong)param_2 & 0xffffffffU) >> 2;
    iVar3 = fn_82CE5410();
    uVar5 = (uint)uVar1;
    if ((*(uint *)(param_1 + 0x28) & 0x3fffffff) < uVar5) {
      uVar8 = ((ulonglong)*(uint *)(param_1 + 0x28) & 0x3fffffff) << 1;
      if ((uint)uVar8 <= uVar5) {
        uVar8 = uVar1;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1 + 0x20,uVar8,4);
    }
    *(uint *)(param_1 + 0x24) = uVar5;
    uVar1 = ((longlong)*(int *)(param_1 + 0x4c) * (longlong)param_2 & 0xffffffffU) >> 2;
    iVar3 = fn_82CE5410();
    uVar5 = (uint)uVar1;
    if ((*(uint *)(param_1 + 0x1c) & 0x3fffffff) < uVar5) {
      uVar8 = ((ulonglong)*(uint *)(param_1 + 0x1c) & 0x3fffffff) << 1;
      if ((uint)uVar8 <= uVar5) {
        uVar8 = uVar1;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1 + 0x14,uVar8,4);
    }
    *(uint *)(param_1 + 0x18) = uVar5;
    uVar1 = ((longlong)*(int *)(param_1 + 0x48) * (longlong)param_2 & 0xffffffffU) >> 4;
    iVar3 = fn_82CE5410();
    uVar5 = (uint)uVar1;
    if ((*(uint *)(param_1 + 0x10) & 0x3fffffff) < uVar5) {
      uVar8 = ((ulonglong)*(uint *)(param_1 + 0x10) & 0x3fffffff) << 1;
      if ((uint)uVar8 <= uVar5) {
        uVar8 = uVar1;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1 + 8,uVar8,0x10);
    }
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  return;
}

