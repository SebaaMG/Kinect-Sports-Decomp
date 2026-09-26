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


int fn_82CF76A8(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  
  iVar12 = param_1 + 0x124;
  RtlEnterCriticalSection(iVar12);
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x1c);
  iVar2 = *param_2;
  uVar6 = 0xffffffffffffffff;
  iVar5 = 0x7ffffff;
  if (*(int *)(param_1 + 0x10) + 1 <
      (int)((*(uint *)(param_1 + 0x20) & 0x3fffffff) * 2 - *(uint *)(param_1 + 0x1c))) {
    uVar10 = uVar9 - 1;
    if ((longlong)uVar10 < 0) {
LAB_82cf7760:
      iVar4 = *(int *)(param_1 + 0xc);
      if (*(int *)(param_1 + 8) - iVar4 < iVar2) goto LAB_82cf76f8;
      *(int *)(param_1 + 0xc) = iVar4 + iVar2;
      *param_2 = iVar2;
      uVar11 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      bVar1 = *(uint *)(param_1 + 0x14) < uVar11;
    }
    else {
      uVar11 = *(uint *)(param_1 + 0x18);
      lVar7 = (uVar10 & 0x1fffffff) * 8 + (ulonglong)uVar11 + 4;
      do {
        iVar4 = *(int *)lVar7;
        if ((iVar2 <= iVar4) && (iVar4 < iVar5)) {
          uVar6 = uVar10;
          iVar5 = iVar4;
        }
        uVar10 = uVar10 - 1;
        lVar7 = lVar7 + -8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      if ((int)uVar6 < 0) goto LAB_82cf7760;
      lVar7 = (uVar6 & 0x1fffffff) * 8;
      iVar4 = (int)lVar7;
      piVar3 = (int *)(iVar4 + uVar11);
      iVar4 = *(int *)(iVar4 + uVar11);
      if ((iVar2 * 3 < iVar5 << 1) && (0x400 < iVar2)) {
        *piVar3 = iVar4 + iVar2;
        piVar3[1] = piVar3[1] - iVar2;
      }
      else {
        *param_2 = piVar3[1];
        lVar8 = (ulonglong)*(uint *)(param_1 + 0x1c) - 1;
        *(int *)(param_1 + 0x1c) = (int)lVar8;
        lVar7 = (ulonglong)*(uint *)(param_1 + 0x18) + lVar7;
        lVar8 = (lVar8 - uVar6 & 0x1fffffff) * 8;
        if (0 < (int)lVar8) {
          lVar8 = ((lVar8 - 1U & 0xffffffff) >> 2) + 1;
          do {
            *(undefined4 *)lVar7 = ((undefined4 *)lVar7)[2];
            lVar7 = lVar7 + 4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
      }
      uVar11 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      bVar1 = *(uint *)(param_1 + 0x14) < uVar11;
    }
    if (bVar1) {
      *(uint *)(param_1 + 0x14) = uVar11;
    }
    RtlLeaveCriticalSection(iVar12);
  }
  else {
LAB_82cf76f8:
    RtlLeaveCriticalSection(iVar12);
    iVar4 = 0;
  }
  return iVar4;
}

