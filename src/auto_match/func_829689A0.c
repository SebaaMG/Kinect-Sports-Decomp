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
extern int fn_82963400();


undefined8 fn_829689A0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  puVar2 = *(uint **)(param_1 * 4 + *(int *)(param_3 + 0x18));
  puVar3 = *(uint **)(param_2 * 4 + *(int *)(param_3 + 0x18));
  uVar4 = *puVar2 & 0xfff00000;
  uVar11 = *puVar3 & 0xfff00000;
  if (uVar11 <= uVar4) {
    if ((uVar11 < uVar4) || (uVar4 = *puVar3 & 0xfffff, uVar11 = *puVar2 & 0xfffff, uVar11 < uVar4))
    {
      return 1;
    }
    if (uVar11 <= uVar4) {
      uVar4 = 0;
      if (puVar2[3] != 0) {
        iVar5 = 0;
        do {
          iVar8 = *(int *)(*(int *)(iVar5 + puVar2[4]) * 4 + *(int *)(param_3 + 0x14));
          iVar9 = *(int *)(*(int *)(iVar5 + puVar3[4]) * 4 + *(int *)(param_3 + 0x14));
          if (*(uint *)(iVar8 + 4) < *(uint *)(iVar9 + 4)) {
            return 0xffffffffffffffff;
          }
          if (*(uint *)(iVar9 + 4) < *(uint *)(iVar8 + 4)) {
            return 1;
          }
          if (*(uint *)(iVar8 + 0x14) < *(uint *)(iVar9 + 0x14)) {
            return 0xffffffffffffffff;
          }
          if (*(uint *)(iVar9 + 0x14) < *(uint *)(iVar8 + 0x14)) {
            return 1;
          }
          if (*(int *)(iVar8 + 0x18) < *(int *)(iVar9 + 0x18)) {
            return 0xffffffffffffffff;
          }
          if (*(int *)(iVar9 + 0x18) < *(int *)(iVar8 + 0x18)) {
            return 1;
          }
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 4;
        } while (uVar4 < puVar2[3]);
      }
      iVar5 = fn_82963400(puVar2);
      if (iVar5 == 0) {
        uVar4 = 0;
        if (puVar2[1] != 0) {
          iVar5 = 0;
          do {
            uVar11 = *(uint *)(*(int *)(*(int *)(iVar5 + puVar2[2]) * 4 + *(int *)(param_3 + 0x14))
                              + 0x30);
            uVar10 = *(uint *)(*(int *)(*(int *)(iVar5 + puVar3[2]) * 4 + *(int *)(param_3 + 0x14))
                              + 0x30);
            if (uVar11 < uVar10) {
              return 0xffffffffffffffff;
            }
            if (uVar10 < uVar11) {
              return 1;
            }
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 4;
          } while (uVar4 < puVar2[1]);
        }
      }
      else {
        uVar11 = 0;
        uVar4 = *puVar2 & 0xfffff;
        if (uVar4 != 0) {
          iVar9 = 0;
          iVar8 = uVar4 << 2;
          iVar5 = *(int *)(param_3 + 0x14);
          do {
            uVar10 = *(uint *)(*(int *)(*(int *)(iVar9 + puVar2[2]) * 4 + iVar5) + 0x30);
            uVar6 = *(uint *)(*(int *)(*(int *)(iVar8 + puVar2[2]) * 4 + iVar5) + 0x30);
            uVar7 = *(uint *)(*(int *)(*(int *)(iVar9 + puVar3[2]) * 4 + iVar5) + 0x30);
            uVar1 = *(uint *)(*(int *)(*(int *)(iVar8 + puVar3[2]) * 4 + iVar5) + 0x30);
            uVar12 = uVar10;
            if ((uVar10 < uVar6) || (uVar12 = uVar6, uVar10 <= uVar6)) {
              uVar10 = uVar6;
            }
            uVar6 = uVar7;
            if ((uVar7 < uVar1) || (uVar6 = uVar1, uVar7 <= uVar1)) {
              uVar7 = uVar1;
            }
            if (uVar12 < uVar6) {
              return 0xffffffffffffffff;
            }
            if (uVar6 < uVar12) {
              return 1;
            }
            if (uVar10 < uVar7) {
              return 0xffffffffffffffff;
            }
            if (uVar7 < uVar10) {
              return 1;
            }
            uVar11 = uVar11 + 1;
            iVar9 = iVar9 + 4;
            iVar8 = iVar8 + 4;
          } while (uVar11 < uVar4);
        }
      }
      return 0;
    }
  }
  return 0xffffffffffffffff;
}

