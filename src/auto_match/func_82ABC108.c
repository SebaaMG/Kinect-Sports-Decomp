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
extern unsigned int *auStack_a8;
extern int fn_82A29A38();
extern int fn_82ABA770();
extern int fn_82ABABC0();
extern int fn_82ABACE8();
extern int fn_82ABB0F0();
extern int fn_82ABB1E0();
extern int fn_82ABBB48();
extern int fn_82ABBE60();
extern int fn_82F691F0();
extern unsigned int iStack_ac;
extern unsigned int uStack00000024;
extern unsigned int uStack_b0;


undefined8
fn_82ABC108(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,int param_5,
             uint *param_6,int *param_7,ulonglong param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int *piVar5;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar6;
  ulonglong uVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  longlong lVar19;
  uint *puVar21;
  longlong lVar20;
  ulonglong uVar22;
  uint uVar23;
  uint uStack00000024;
  int *piStack00000044;
  uint uStack_b0;
  int iStack_ac;
  uint auStack_a8 [42];
  
  uVar1 = *(uint *)(param_5 + 0x10);
  puVar2 = *(undefined4 **)(param_5 + 0x1c);
  *(undefined4 *)(param_5 + 0x640) = 0;
  uStack_b0 = 0;
  lVar19 = param_2 + 4;
  iStack_ac = 0;
  uVar22 = 0;
  if (*param_6 == 0) {
    uVar22 = 2;
    *puVar2 = 0x100;
    puVar2[1] = 0x100;
    puVar8 = puVar2 + 2;
    uStack_b0 = 2;
  }
  else {
    puVar8 = puVar2 + *param_6;
  }
  if (((*(uint *)(param_5 + 4) & 0x80000) != 0) &&
     (*(undefined4 **)(param_5 + 0x62c) != (undefined4 *)0x0)) {
    **(undefined4 **)(param_5 + 0x62c) = 0;
  }
  uStack00000024 = param_3;
  piStack00000044 = param_7;
  if (0x2ff < uVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_5 + 0x644,0,0x100);
  }
  uVar9 = (ulonglong)*(uint *)lVar19;
  if (uVar9 != 0xffff) {
    puVar15 = (uint *)((auStack_a8[0] + 400) * 4 + param_5);
    lVar12 = lVar19;
    uVar14 = auStack_a8[0];
    do {
      if ((param_8 & 0xffffffff) <= (*param_6 + uVar22 & 0xffffffff)) goto LAB_82abc82c;
      uVar4 = uVar9 & 0xffff;
      lVar19 = lVar12 + 4;
      iVar16 = (int)(uVar9 & 0x10000000);
      if (0xfffe < uVar4) goto switchD_82abc234_caseD_0;
      if (uVar4 == 0xfffe) {
        uVar9 = uVar9 >> 0xe & 0x1fffc;
        goto LAB_82abc45c;
      }
      puVar21 = (uint *)lVar19;
      puVar7 = puVar8;
      switch((int)uVar4) {
      default:
        goto switchD_82abc234_caseD_0;
      case 1:
        uVar13 = 1;
        uVar23 = ((*puVar21 >> 0x14 & 0x700 | *puVar21 & 0x1800) == 0x300) + 0x47;
        break;
      case 2:
        uVar13 = 2;
        uVar23 = 3;
        break;
      case 3:
        uVar13 = 2;
        uVar23 = 0x5b;
        break;
      case 4:
        uVar13 = 3;
        uVar23 = 0x40;
        break;
      case 5:
        uVar13 = 2;
        uVar23 = 0x49;
        break;
      case 6:
        uVar13 = 1;
        uVar23 = 0x51;
        break;
      case 7:
        uVar13 = 1;
        uVar23 = 0x55;
        break;
      case 8:
        uVar13 = 2;
        uVar23 = 0x22;
        break;
      case 9:
        uVar13 = 2;
        uVar23 = 0x23;
        break;
      case 10:
        uVar13 = 2;
        uVar23 = 0x44;
        break;
      case 0xb:
        uVar13 = 2;
        uVar23 = 0x41;
        break;
      case 0xc:
        uVar23 = 0x50000;
        goto LAB_82abc310;
      case 0xd:
        uVar23 = 0x20000;
LAB_82abc310:
        uVar13 = 2;
        uVar23 = uVar23 | 0x56;
        break;
      case 0xe:
        uVar13 = 1;
        uVar23 = 0x2d;
        break;
      case 0xf:
        uVar13 = 1;
        uVar23 = 0x3c;
        break;
      case 0x10:
        uVar13 = 1;
        uVar23 = 0x39;
        break;
      case 0x11:
        uVar13 = 2;
        uVar23 = 0x24;
        break;
      case 0x12:
        uVar13 = 3;
        uVar23 = 0x3f;
        break;
      case 0x13:
        uVar13 = 1;
        uVar23 = 0x31;
        break;
      case 0x14:
        uVar13 = 2;
        uVar23 = 0x45;
        break;
      case 0x15:
        uVar23 = 0x10000;
        goto LAB_82abc388;
      case 0x16:
        uVar23 = 0x20000;
        goto LAB_82abc388;
      case 0x17:
        uVar23 = 0x30000;
        goto LAB_82abc388;
      case 0x18:
        uVar23 = 0x40000;
LAB_82abc388:
        uVar13 = 2;
        uVar23 = uVar23 | 0x45;
        break;
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x60:
        auStack_a8[0] = 0;
        puVar8 = (uint *)fn_82ABB1E0(param_5,uVar9,puVar8,lVar19,auStack_a8,&uStack_b0,&iStack_ac,
                                       param_4);
        goto LAB_82abc44c;
      case 0x1f:
        iVar16 = (int)lVar12;
        if ((*(uint *)(iVar16 + 8) >> 0x14 & 0x700 | *(uint *)(iVar16 + 8) & 0x1800) != 0x100) {
          if ((*(uint *)(iVar16 + 8) >> 0x14 & 0x700 | *(uint *)(iVar16 + 8) & 0x1800) == 0x600) {
            if (uVar1 < 0x300) {
              fn_82A29A38();
            }
            if ((*(uint *)(iVar16 + 8) >> 0x14 & 0x700 | *(uint *)(iVar16 + 8) & 0x1800) != 0x600) {
              fn_82A29A38();
            }
            uVar13 = puVar15[1];
            puVar15[1] = uVar13 | 1;
            uVar23 = *puVar21 << 0x1c;
            puVar15[1] = uVar23 | uVar13 & 0xfffffff | 1;
            uVar3 = (*puVar21 & 0xf0000) << 8;
            puVar15[1] = uVar3 | uVar23 | uVar13 & 0xffffff | 1;
            uVar10 = (*(uint *)(iVar16 + 8) & 0x7ff) << 5;
            puVar15[1] = uVar10 | uVar3 | uVar23 | uVar13 & 0xff001f | 1;
            puVar15 = puVar15 + 1;
            *puVar15 = *(uint *)(iVar16 + 8) >> 0xf & 0x1e |
                       uVar10 | uVar3 | uVar23 | uVar13 & 0xff0001 | 1;
            puVar7 = (uint *)fn_82ABABC0(param_5,uVar14,puVar8,&uStack_b0);
            uVar22 = (ulonglong)uStack_b0;
            uVar14 = uVar14 + 1;
          }
          else {
            if (uVar1 < 0x300) {
              fn_82A29A38();
            }
            if ((*(uint *)(iVar16 + 8) >> 0x14 & 0x700 | *(uint *)(iVar16 + 8) & 0x1800) != 0xa00) {
              fn_82A29A38();
            }
            uVar13 = *puVar21 & 0x78000000;
            if (uVar13 == 0x10000000) {
              uVar13 = 2;
            }
            else if (uVar13 == 0x18000000) {
              uVar13 = 4;
            }
            else {
              uVar13 = -(uint)(uVar13 == 0x20000000) & 3;
            }
            puVar7 = puVar8 + 1;
            uVar22 = uVar22 + 1;
            uStack_b0 = (uint)uVar22;
            *puVar8 = (*(int *)(iVar16 + 8) + 0x10U & 0xff) << 0x10 | uVar13 << 0x18 | 0x8000019;
          }
        }
      case 0x2f:
        lVar19 = lVar12 + 0xc;
        puVar8 = puVar7;
        goto switchD_82abc234_caseD_0;
      case 0x20:
        uVar13 = 2;
        uVar23 = 0x4e;
        break;
      case 0x21:
        uVar13 = 2;
        uVar23 = 0x13;
        break;
      case 0x22:
      case 0x25:
        auStack_a8[0] = 0;
        puVar8 = (uint *)fn_82ABBB48(param_5,uVar9,puVar8,lVar19,auStack_a8,&uStack_b0,&iStack_ac,
                                       param_4);
        goto LAB_82abc44c;
      case 0x23:
        uVar13 = 1;
        uVar23 = 1;
        break;
      case 0x24:
        uVar13 = 1;
        uVar23 = 0x4c;
        break;
      case 0x2e:
        uVar13 = 1;
        uVar23 = 0x10048;
        break;
      case 0x30:
      case 0x51:
        lVar19 = lVar12 + 0x18;
        goto switchD_82abc234_caseD_0;
      case 0x4e:
        uVar13 = 1;
        uVar23 = 0x2e;
        break;
      case 0x4f:
        uVar13 = 1;
        uVar23 = 0x3d;
        break;
      case 0x5e:
        uVar9 = uVar9 >> 0x10 & 7;
        uVar13 = 2;
        if (uVar9 == 1) {
          uVar23 = 0x30000;
LAB_82abc418:
          uVar23 = uVar23 | 0x56;
        }
        else {
          if (uVar9 == 3) {
            uVar23 = 0x20000;
            goto LAB_82abc418;
          }
          if (uVar9 == 4) {
            uVar23 = 0x50000;
            goto LAB_82abc418;
          }
          if (uVar9 != 5) {
            if (uVar9 == 6) {
              uVar23 = 0x40000;
            }
            else {
              uVar23 = 0x10000;
            }
            goto LAB_82abc418;
          }
          uVar23 = 0x56;
        }
        iVar16 = 0;
        break;
      case 0x5f:
        auStack_a8[0] = 0;
        puVar8 = (uint *)fn_82ABBE60(param_5,puVar8,lVar19,auStack_a8,&uStack_b0,&iStack_ac,
                                       param_4,uVar9 & 0x10000000);
LAB_82abc44c:
        uVar22 = (ulonglong)uStack_b0;
        uVar9 = ((ulonglong)auStack_a8[0] & 0x3fffffff) << 2;
LAB_82abc45c:
        lVar19 = uVar9 + lVar19;
        goto switchD_82abc234_caseD_0;
      }
      *puVar8 = uVar23;
      uStack_b0 = (int)uVar22 + 1;
      uVar3 = *puVar21;
      lVar20 = lVar12 + 8;
      if (((uVar3 & 0x2000) == 0x2000) && (0x2ff < uVar1)) {
        uVar17 = *(undefined4 *)lVar20;
        lVar20 = lVar12 + 0xc;
      }
      else {
        uVar17 = 0;
      }
      uVar18 = 0;
      uVar10 = uVar3;
      uVar11 = uVar17;
      if (iVar16 != 0) {
        uVar18 = *(undefined4 *)lVar20;
        lVar20 = lVar20 + 4;
        uVar10 = uVar3 & 0x8fffe000 | 0x21;
        uVar11 = 0;
      }
      puVar8 = (uint *)fn_82ABA770(puVar8 + 1,uVar10,uVar11,&uStack_b0,param_5);
      uVar10 = 0;
      do {
        lVar19 = lVar20;
        if (uVar13 <= uVar10) break;
        lVar19 = lVar20 + 4;
        if (((*(uint *)lVar20 & 0x2000) == 0x2000) && (0x1ff < uVar1)) {
          uVar11 = *(undefined4 *)lVar19;
          lVar19 = lVar20 + 8;
        }
        else {
          uVar11 = 0;
        }
        puVar8 = (uint *)fn_82ABACE8(puVar8,*(uint *)lVar20,uVar11,&iStack_ac,param_4,uVar23,
                                       uVar10 & 0xff,uVar1);
        uVar10 = uVar10 + 1;
        lVar20 = lVar19;
      } while (uVar10 < 3);
      if (iVar16 == 0) {
        uVar22 = (ulonglong)uStack_b0;
      }
      else {
        puVar8 = (uint *)fn_82ABB0F0(puVar8,uVar3,uVar17,uVar18,0xe40000,&uStack_b0,param_5);
        uVar22 = (ulonglong)uStack_b0;
      }
switchD_82abc234_caseD_0:
      uVar9 = (ulonglong)*(uint *)lVar19;
      lVar12 = lVar19;
    } while (uVar9 != 0xffff);
  }
  piVar5 = piStack00000044;
  if ((*param_6 + uVar22 & 0xffffffff) < (param_8 & 0xffffffff)) {
    if (uVar1 < 0x300) {
      lVar12 = 0;
      if ((*(uint *)(param_5 + 4) & 0x40) != 0) {
        *puVar8 = 0x47;
        puVar8[1] = 0x4d0000;
        puVar8[2] = 1;
        lVar12 = 4;
        puVar8[3] = 0x40032;
        puVar8 = puVar8 + 4;
      }
      uVar22 = lVar12 + uVar22;
    }
    *puVar8 = 0x28;
    if (uVar22 + 1 == 0) {
      fn_82A29A38();
    }
    if (((int)lVar19 + 4) - (int)param_2 >> 2 != uStack00000024 >> 2) {
      fn_82A29A38();
    }
    uVar6 = 0;
    *param_6 = *param_6 + (int)(uVar22 + 1);
    *piVar5 = iStack_ac + 1;
  }
  else {
LAB_82abc82c:
    uVar6 = 0xffffffff88760b69;
  }
  return uVar6;
}

