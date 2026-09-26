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
extern unsigned int *auStack_b0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_828F0248();
extern int fn_82954D90();
extern int fn_82964588();
extern int fn_82975B00();
extern int fn_8297F1E8();
extern int fn_82F691F0();
extern unsigned int iStack_c0;
extern unsigned int uStack0000001c;
extern unsigned int uStack_bc;


longlong fn_8295BBE0(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uStack0000001c;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 auStack_b0 [44];
  
  param_1[0x42] = 0;
  uVar7 = 0;
  uVar11 = 0;
  uStack_bc = 0;
  iStack_c0 = 0;
  uVar13 = 0;
  lVar12 = 0;
  lVar9 = 0;
  uStack0000001c = param_2;
  lVar5 = fn_8297F1E8();
  if (lVar5 < 0) goto LAB_8295cccc;
  iVar6 = fn_82964588(param_1,0xffffffff82029a34,0x40311,0xffffffffffffffff,4);
  param_1[0x62] = iVar6;
  if (iVar6 == -1) {
LAB_8295c6e4:
    lVar5 = -0x7ff8fff2;
  }
  else {
    iVar6 = (**(code **)(*param_1 + 0x174))(param_1);
    if (-1 < iVar6) {
      param_1[0x44] = 0;
      param_1[0x45] = 0;
      param_1[0x46] = 0;
      param_1[0x48] = 0;
      param_1[0x49] = 0;
      if ((int *)param_1[0x6d] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x6d] + 4))();
        param_1[0x6d] = 0;
      }
      if ((param_1[0x33] & 2U) == 0) {
        param_1[0x6d] = 0;
      }
      if ((param_1[0x33] & 1U) != 0) {
        iVar6 = fn_8265C940((ulonglong)(uint)param_1[3] * 0x30,0x24810000);
        param_1[0x4a] = iVar6;
        if (iVar6 == 0) goto LAB_8295c6e4;
        param_1[0x4b] = 0;
        param_1[0x4c] = param_1[3] << 1;
      }
      uVar8 = 0;
      param_1[0x4f] = -1;
      param_1[0x54] = 0;
      if (param_1[2] != 0) {
        iVar6 = 0;
        do {
          uVar8 = uVar8 + 1;
          piVar4 = (int *)(iVar6 + param_1[5]);
          iVar6 = iVar6 + 4;
          *(undefined4 *)(*piVar4 + 0x30) = 0;
        } while (uVar8 < (uint)param_1[2]);
      }
      uVar8 = 0;
      uVar15 = 0;
      if (param_1[2] != 0) {
        iVar6 = 0;
        do {
          puVar2 = *(uint **)(iVar6 + param_1[5]);
          iVar3 = *(int *)(puVar2[1] * 4 + param_1[4]);
          if ((*puVar2 & 0x10000000) == 0) {
            uVar14 = *(uint *)(iVar3 + 4);
            if ((((uVar14 & 0x10) != 0) && ((uVar14 & 0x200) == 0)) || ((uVar14 & 0x20) != 0)) {
              (**(code **)(*param_1 + 4))(param_1,puVar2,0);
            }
            if ((*(uint *)(iVar3 + 4) & 0x80) != 0) {
              uVar8 = uVar8 + 1;
            }
          }
          uVar15 = uVar15 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar15 < (uint)param_1[2]);
      }
      if (uVar8 <= (uint)param_1[0x13]) {
        if ((((param_1[0x32] & 0xffff0000U) == 0xfffe0000) &&
            (lVar5 = fn_82954D90(param_1,param_1[0x20],param_1[10],0x10,0x204,0x76), lVar5 < 0))
           || (((param_1[0x32] & 0xffff0000U) == 0xffff0000 &&
               (lVar5 = fn_82954D90(param_1,0xffffffffffffffff,param_1[0x13],0x80,0,0x73),
               lVar5 < 0)))) goto LAB_8295cccc;
        uVar8 = 0;
        if (param_1[2] != 0) {
          iVar6 = 0;
          uVar15 = 0;
          uVar14 = uVar7;
          uVar10 = uVar11;
          do {
            puVar2 = *(uint **)(param_1[5] + iVar6);
            uVar16 = uVar15;
            uVar7 = uVar14;
            uVar11 = uVar10;
            if (((((*puVar2 & 0x10000000) == 0) &&
                 ((uVar1 = puVar2[1], param_1[0x22] != uVar1 ||
                  (uVar16 = puVar2[3] + 1, puVar2[3] + 1 <= uVar15)))) &&
                ((param_1[0x20] != uVar1 ||
                 (uVar7 = puVar2[3] + 1, uVar16 = uVar15, uVar7 <= uVar14)))) &&
               ((((param_1[0x21] != uVar1 ||
                  (uVar16 = uVar15, uVar7 = uVar14, uVar11 = puVar2[3] + 1, puVar2[3] + 1 <= uVar10)
                  ) && (uVar16 = uVar15, uVar7 = uVar14, uVar11 = uVar10,
                       (*(uint *)(*(int *)(uVar1 * 4 + param_1[4]) + 4) & 0x80) != 0)) &&
                (uVar13 < puVar2[3] + 1)))) {
              uVar13 = puVar2[3] + 1;
            }
            uVar8 = uVar8 + 1;
            iVar6 = iVar6 + 4;
            uVar15 = uVar16;
            uVar14 = uVar7;
            uVar10 = uVar11;
          } while (uVar8 < (uint)param_1[2]);
        }
        iVar6 = uVar7 << 2;
        lVar12 = fn_8265C940(iVar6,0x24810000);
        if (lVar12 != 0) {
          lVar9 = fn_8265C940(uVar11 << 2,0x24810000);
          if (lVar9 != 0) {
            lVar5 = fn_8265C940(uVar13 << 2,0x24810000);
            uStack_bc = (undefined4)lVar5;
            if (((lVar5 != 0) && (iStack_c0 = fn_8265C940(iVar6,0x24810000), iStack_c0 != 0))
               && (lVar5 = fn_8265C940(uVar11 << 2,0x24810000), lVar5 != 0)) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(lVar12,0,iVar6);
            }
          }
        }
        goto LAB_8295c6e4;
      }
      iVar6 = fn_828F0248(param_1[0x32],0,auStack_b0);
      if (-1 < iVar6) {
        if (param_1[0x13] == 0) {
          fn_82975B00(param_1,0,0x11c1,0xffffffff82038240,auStack_b0[0]);
        }
        else {
          fn_82975B00(param_1,0,0x119e,0xffffffff82038270,auStack_b0[0]);
        }
      }
    }
    lVar5 = -0x7fffbffb;
  }
LAB_8295cccc:
  fn_8265C990(lVar12,0x24810000);
  fn_8265C990(lVar9,0x24810000);
  fn_8265C990(iStack_c0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(uStack_bc,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(param_1[0x44],0x24810000);
  param_1[0x44] = 0;
  fn_8265C990(param_1[0x4a],0x24810000);
  param_1[0x4a] = 0;
  if ((int *)param_1[0x6d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x6d] + 4))();
    param_1[0x6d] = 0;
  }
  return lVar5;
}

