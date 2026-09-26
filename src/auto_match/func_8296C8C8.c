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
extern unsigned int *auStack_c0;
extern int fn_82963370();
extern int fn_82968398();
extern unsigned int uStack0000002c;
extern unsigned int uStack00000044;
extern unsigned int uStack_d0;


ulonglong fn_8296C8C8(int param_1,int param_2,int param_3,uint param_4,int param_5,uint *param_6,
                       uint param_7)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uStack0000002c;
  uint *puStack0000003c;
  uint uStack00000044;
  uint uStack_d0;
  uint auStack_c0 [48];
  
  uVar14 = 4;
  puVar3 = *(uint **)(param_3 * 4 + *(int *)(param_1 + 0x14));
  uStack_d0 = 4;
  uVar4 = *(uint *)(puVar3[3] * 4 + *(int *)(param_2 + 8));
  uStack0000002c = param_4;
  puStack0000003c = param_6;
  uStack00000044 = param_7;
  if ((((*puVar3 & 0x80000000) != 0) ||
      ((uVar4 == 1 && ((*(uint *)(param_1 + 0x6c) & 0x10000000) != 0)))) ||
     (((1 < uVar4 && ((*(uint *)(param_1 + 0x6c) & 0x20000000) != 0)) ||
      (iVar10 = fn_82963370(*(undefined4 *)(puVar3[0x12] * 4 + *(int *)(param_1 + 0x18))),
      iVar10 != 0)))) {
    uStack_d0 = 1;
  }
  uVar15 = 0;
  puVar16 = auStack_c0;
  auStack_c0[4] = 0xffffffff;
  auStack_c0[5] = 0xffffffff;
  iVar10 = puVar3[3] << 4;
  auStack_c0[0] = 0xffffffff;
  auStack_c0[1] = 0xffffffff;
  auStack_c0[6] = 0xffffffff;
  auStack_c0[7] = 0xffffffff;
  auStack_c0[2] = 0xffffffff;
  auStack_c0[3] = 0xffffffff;
  do {
    bVar9 = false;
    iVar5 = *(int *)(iVar10 + *(int *)(param_2 + 0x18));
    if (iVar5 == -1) {
LAB_8296ca88:
      uVar14 = uVar14 - 1;
    }
    else {
      uVar18 = 0;
      uVar6 = *(uint *)(*(int *)(param_2 + 0x30) + iVar10);
      if (uVar6 == 0) goto LAB_8296ca88;
      iVar12 = *(int *)(param_2 + 0x34);
      iVar1 = *(int *)(param_2 + 0x38);
      iVar2 = *(int *)(param_2 + 0x10);
      do {
        uVar7 = *(uint *)((*(int *)(iVar10 + iVar12) + uVar18) * 4 + iVar1);
        uVar8 = *(uint *)((uVar7 & 0xfffffffc) + iVar2);
        if (uVar8 != 0xffffffff) {
          bVar9 = true;
        }
        if (((((uStack0000002c == uVar8) &&
              (uVar7 = *(uint *)(uVar7 * 4 + *(int *)(param_2 + 0x14)), uVar7 != 0xffffffff)) &&
             (param_6 = puStack0000003c, auStack_c0[uVar7 + 4] == 0xffffffff)) &&
            ((uStack_d0 != 1 || (uVar15 == uVar7)))) &&
           (iVar11 = fn_82968398(param_1,param_2,iVar5,uStack0000002c,uVar7),
           param_6 = puStack0000003c, iVar11 == -1)) {
          auStack_c0[uVar7 + 4] = uVar15;
          uVar14 = uVar14 - 1;
          *puVar16 = uVar7;
          break;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar6);
      if (!bVar9) goto LAB_8296ca88;
    }
    uVar15 = uVar15 + 1;
    iVar10 = iVar10 + 4;
    puVar16 = puVar16 + 1;
  } while (uVar15 < 4);
  uVar14 = (uVar14 & 7) << 0x1d;
  if (uStack00000044 <= uVar14) {
    return uVar14;
  }
  lVar13 = 0;
  if (param_5 < 0) {
    if ((uStack0000002c & 1) == 0) goto LAB_8296cae0;
  }
  else if ((param_5 < 1) || ((uStack0000002c & 1) != 0)) goto LAB_8296cae0;
  lVar13 = 1;
LAB_8296cae0:
  uVar14 = lVar13 << 0x1c | uVar14;
  if (uVar14 < uStack00000044) {
    uVar17 = 0;
    puVar16 = auStack_c0;
    do {
      if ((*puVar16 == 0xffffffff) &&
         (iVar10 = *(int *)((int)((((ulonglong)puVar3[3] & 0x3fffffff) * 4 + uVar17 & 0xffffffff) <<
                                 2) + *(int *)(param_2 + 0x18)), iVar10 != -1)) {
        uVar19 = 0;
        if (uStack_d0 != 0) {
          do {
            uVar20 = uVar19 + uVar17 & 3;
            if ((uVar4 == 1) &&
               ((((*(uint *)(param_1 + 0x70) & 0x20000000) == 0 ||
                 (uVar15 = **(uint **)(puVar3[0x12] * 4 + *(int *)(param_1 + 0x18)),
                 (uVar15 & 0xfff00000) != 0x50000000)) || (3 < (uVar15 & 0xfffff))))) {
              uVar20 = 3 - uVar20;
            }
            iVar5 = (int)((uVar20 & 0xffffffff) << 2);
            if ((*(int *)((int)auStack_c0 + iVar5 + 0x10) == -1) &&
               (iVar12 = fn_82968398(param_1,param_2,iVar10,uStack0000002c,uVar20), iVar12 == -1))
            {
              *(int *)((int)auStack_c0 + iVar5 + 0x10) = (int)uVar17;
              *puVar16 = (uint)uVar20;
              param_6 = puStack0000003c;
              break;
            }
            uVar19 = uVar19 + 1;
            param_6 = puStack0000003c;
          } while ((uVar19 & 0xffffffff) < (ulonglong)uStack_d0);
        }
        if ((ulonglong)uStack_d0 == (uVar19 & 0xffffffff)) {
          return 0xffffffffffffffff;
        }
        if ((((*(uint *)(param_2 + 0x60) & 0x80000000) == 0) || (1 < uVar4)) &&
           (uVar14 = (uVar19 & 0xff) * 0x1000000 + uVar14,
           (ulonglong)uStack00000044 <= (uVar14 & 0xffffffff))) {
          return uVar14;
        }
      }
      uVar17 = uVar17 + 1;
      puVar16 = puVar16 + 1;
    } while ((uVar17 & 0xffffffff) < 4);
    if (param_6 != (uint *)0x0) {
      *param_6 = auStack_c0[0];
      param_6[1] = auStack_c0[1];
      param_6[2] = auStack_c0[2];
      param_6[3] = auStack_c0[3];
    }
  }
  return uVar14;
}

