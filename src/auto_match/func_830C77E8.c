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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern int fn_830C6D68();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


undefined8 fn_830C77E8(int param_1,int param_2,int param_3,int param_4,int param_5,uint *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  bool bVar13;
  undefined4 uVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 uStack_70;
  short sStack_6c;
  short sStack_6a;
  short sStack_68;
  short sStack_66;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  uVar19 = (ulonglong)*(ushort *)(param_1 + 0x32);
  uVar1 = *param_6;
  uVar18 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0x15c);
  iVar6 = (int)(uint)*(ushort *)(param_1 + 0x32) >> 1;
  if (param_4 != 0) {
    bVar13 = false;
    if (*(int *)(*(int *)(param_1 + 0x518) + param_4 * 4) == 0) goto LAB_830c7838;
  }
  bVar13 = true;
LAB_830c7838:
  uVar14 = 0;
  if (param_5 != 0) {
    uVar14 = fn_830C6D68(param_1,*(undefined4 *)(param_1 + 0x150));
  }
  uStack_60 = 0;
  lVar15 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  if (param_3 != 0) {
    uVar17 = uVar18 - 1;
    if ((*(uint *)(param_2 + -0x18) & 0x20000) != 0) {
      if ((*(uint *)(param_2 + -0x18) & 0x700) < 0x200) {
        uStack_70 = *(uint *)((int)((uVar17 & 0xffffffff) << 2) + iVar2);
      }
      else {
        uVar3 = *(undefined4 *)((int)((uVar17 & 0xffffffff) << 2) + iVar2);
        uVar4 = *(undefined4 *)((int)((uVar17 + uVar19 & 0xffffffff) << 2) + iVar2);
        sStack_6a = (short)uVar4;
        sStack_6c = (short)((uint)uVar4 >> 0x10);
        sStack_68 = (short)((uint)uVar3 >> 0x10);
        sStack_66 = (short)uVar3;
        uStack_70 = CONCAT22((short)((int)sStack_6c + (int)sStack_68 + 1 >> 1),
                             (short)((int)sStack_6a + (int)sStack_66 + 1 >> 1));
      }
      lVar15 = 1;
      uStack_60 = uStack_70;
    }
  }
  if (!bVar13) {
    uVar17 = uVar18 - uVar19;
    puVar16 = (uint *)(param_2 + iVar6 * -0x18);
    if ((*puVar16 & 0x20000) != 0) {
      if ((*puVar16 & 0x700) < 0x200) {
        uStack_70 = *(undefined4 *)((int)((uVar17 & 0xffffffff) << 2) + iVar2);
      }
      else {
        uVar3 = *(undefined4 *)((int)((uVar17 & 0xffffffff) << 2) + iVar2);
        uVar4 = *(undefined4 *)((int)((uVar17 - uVar19 & 0xffffffff) << 2) + iVar2);
        sStack_66 = (short)uVar4;
        sStack_6a = (short)uVar3;
        sStack_6c = (short)((uint)uVar3 >> 0x10);
        sStack_68 = (short)((uint)uVar4 >> 0x10);
        uStack_70 = CONCAT22((short)((int)sStack_6c + (int)sStack_68 + 1 >> 1),
                             (short)((int)sStack_6a + (int)sStack_66 + 1 >> 1));
      }
      lVar5 = lVar15 << 2;
      lVar15 = lVar15 + 1;
      *(uint *)((int)&uStack_60 + (int)lVar5) = uStack_70;
    }
    if (iVar6 != 1) {
      if (param_3 == iVar6 + -1) {
        uVar17 = uVar17 - 1;
        puVar16 = puVar16 + -6;
      }
      else {
        uVar17 = uVar17 + 2;
        puVar16 = puVar16 + 6;
      }
      if ((*puVar16 & 0x20000) != 0) {
        if ((*puVar16 & 0x700) < 0x200) {
          uStack_70 = *(undefined4 *)((int)((uVar17 & 0xffffffff) << 2) + iVar2);
        }
        else {
          uVar3 = *(undefined4 *)((int)((uVar17 & 0xffffffff) << 2) + iVar2);
          uVar4 = *(undefined4 *)((int)((uVar17 - uVar19 & 0xffffffff) << 2) + iVar2);
          sStack_66 = (short)uVar4;
          sStack_6a = (short)uVar3;
          sStack_6c = (short)((uint)uVar3 >> 0x10);
          sStack_68 = (short)((uint)uVar4 >> 0x10);
          uStack_70 = CONCAT22((short)((int)sStack_6c + (int)sStack_68 + 1 >> 1),
                               (short)((int)sStack_6a + (int)sStack_66 + 1 >> 1));
        }
        lVar5 = lVar15 << 2;
        lVar15 = lVar15 + 1;
        *(uint *)((int)&uStack_60 + (int)lVar5) = uStack_70;
      }
    }
  }
  if ((uint)lVar15 < 2) {
    uStack_60 = -(uint)(lVar15 == 1) & uStack_60;
    uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((ushort)uStack_60)) & ((U64)0xFFFF)) << 16));
    uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((ushort)(uStack_60 >> 0x10))) & ((U64)0xFFFF)) << 0));
  }
  else {
    uVar10 = (ushort)((uint)((int)(short)(((U64)(uStack_5c) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_60) >> 16) & 0xFFFF)) >> 0x10);
    uVar9 = (ushort)((uint)((int)(short)(((U64)(uStack_5c) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_58) >> 16) & 0xFFFF)) >> 0x10) ^
            uVar10;
    uVar10 = (ushort)((uint)((int)(short)(((U64)(uStack_58) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_60) >> 16) & 0xFFFF)) >> 0x10) ^
             uVar10;
    uVar12 = (ushort)((uint)((int)(short)(((U64)(uStack_5c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_60) >> 0) & 0xFFFF)) >> 0x10);
    uVar11 = (ushort)((uint)((int)(short)(((U64)(uStack_5c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_58) >> 0) & 0xFFFF)) >> 0x10) ^
             uVar12;
    uVar12 = (ushort)((uint)((int)(short)(((U64)(uStack_58) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_60) >> 0) & 0xFFFF)) >> 0x10) ^
             uVar12;
    uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((((U64)(uStack_58) >> 16) & 0xFFFF) & ~((short)(uVar9 | uVar10) >> 0xf) |
         (short)uVar10 >> 0xf & (((U64)(uStack_60) >> 16) & 0xFFFF) | (short)uVar9 >> 0xf & (((U64)(uStack_5c) >> 16) & 0xFFFF))) & ((U64)0xFFFF)) << 16));
    uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((((U64)(uStack_58) >> 0) & 0xFFFF) & ~((short)(uVar11 | uVar12) >> 0xf) |
         (short)uVar12 >> 0xf & (((U64)(uStack_60) >> 0) & 0xFFFF) | (short)uVar11 >> 0xf & (((U64)(uStack_5c) >> 0) & 0xFFFF))) & ((U64)0xFFFF)) << 0));
  }
  uStack_70 = CONCAT22(((short)((uint)uVar14 >> 0x10) + (((U64)(uStack_70) >> 0) & 0xFFFF) + *(short *)(param_1 + 0x40)
                       & *(ushort *)(param_1 + 0x44)) - *(short *)(param_1 + 0x40),
                       ((((U64)(uStack_70) >> 16) & 0xFFFF) + *(short *)(param_1 + 0x3e) + (short)uVar14 &
                       *(ushort *)(param_1 + 0x42)) - *(short *)(param_1 + 0x3e));
  puVar7 = (undefined4 *)((int)((uVar18 + uVar19 & 0xffffffff) << 2) + iVar2);
  puVar8 = (undefined4 *)(uVar1 * 4 + iVar2);
  puVar7[1] = uStack_70;
  *puVar7 = uStack_70;
  puVar8[1] = uStack_70;
  *puVar8 = uStack_70;
  return 0;
}

