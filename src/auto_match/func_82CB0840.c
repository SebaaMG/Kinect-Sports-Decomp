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
extern int fn_82C4E5E8();
extern int fn_82F691F0();
extern unsigned int uStack00000034;


undefined8
fn_82CB0840(int param_1,uint *param_2,longlong param_3,undefined8 param_4,undefined4 param_5,
             uint param_6,uint param_7,uint param_8)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uStack00000034;
  uint in_stack_00000054;
  
  uVar9 = *(uint *)(param_1 + 0x154);
  uVar12 = *(undefined4 *)(param_1 + 0x6ec);
  lVar8 = (longlong)(int)(((int)in_stack_00000054 >> 1) + *(uint *)(param_1 + 0x4fb4)) *
          (longlong)*(int *)(param_1 + 0xd0) + (longlong)((int)param_8 >> 1) +
          (ulonglong)*(uint *)(param_1 + 0x4fb4);
  iVar14 = *(int *)(param_1 + 0xed4) + (int)lVar8;
  lVar11 = (ulonglong)*(byte *)(param_2 + 1) * 0x14 + (ulonglong)*(uint *)(param_1 + 0x19d0);
  lVar13 = (longlong)(int)(((int)param_7 >> 1) + *(uint *)(param_1 + 0x4fb0)) *
           (longlong)*(int *)(param_1 + 0xcc) + (ulonglong)*(uint *)(param_1 + 0xecc) +
           (longlong)((int)param_6 >> 1) + (ulonglong)*(uint *)(param_1 + 0x4fb0);
  uVar2 = ~param_6 & 1;
  uVar3 = ~param_7 & 1;
  uVar4 = ~param_8 & 1;
  uVar5 = ~in_stack_00000054 & 1;
  lVar8 = (ulonglong)*(uint *)(param_1 + 0xed0) + lVar8;
  if (*(int *)(param_1 + 0x14c) != 0) {
    uVar9 = *(byte *)param_2 & 7;
  }
  if (*(int *)(param_1 + 0x18c) == 0) {
    iVar10 = param_1 + 0xb64;
  }
  else {
    iVar10 = ((*param_2 >> 0x16 & 3) + 0x2df) * 4 + param_1;
  }
  uStack00000034 = param_5;
  if (*(byte *)((int)param_2 + 0x13) == 0) {
    (**(code **)(param_1 + 0xc30))
              (param_1,param_3,lVar13,*(int *)(param_1 + 0xcc),uVar2,uVar3,
               *(undefined4 *)(param_1 + 0x150));
  }
  else {
    if ((*param_2 & 0x10000000) == 0) {
      if (uVar9 == 0) goto LAB_82cb09e8;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x54);
      lVar7 = *plVar1;
      uVar9 = *(uint *)(plVar1 + 1);
      *plVar1 = lVar7 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
      if ((longlong)((ulonglong)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar7 < 0) {
        plVar1 = *(longlong **)(param_1 + 0x54);
        lVar7 = *plVar1;
        uVar9 = *(uint *)(plVar1 + 1);
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
        if ((longlong)((ulonglong)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        uVar9 = (-1 < lVar7 ^ 1) + 1;
      }
      else {
        uVar9 = 0;
LAB_82cb09e8:
        uVar12 = *(undefined4 *)(param_1 + 0x6ec);
        uVar6 = (**(code **)(param_1 + 0xc78))
                          (param_1,iVar10,*(undefined4 *)(param_1 + 0x72c),0,lVar11);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        (**(code **)(param_1 + 0xc80))(uVar12,uVar12,8,*(undefined4 *)(param_1 + 0x798));
      }
    }
    if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
    }
    if (uVar9 == 2) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
    }
    (**(code **)(param_1 + 0xc2c))
              (param_1,param_3,uVar12,lVar13,*(undefined4 *)(param_1 + 0xcc),uVar2,uVar3,
               *(undefined4 *)(param_1 + 0x150));
  }
  param_3 = param_3 + 8;
  lVar13 = lVar13 + 8;
  if (*(byte *)((int)param_2 + 0x12) == 0) {
    (**(code **)(param_1 + 0xc30))
              (param_1,param_3,lVar13,*(undefined4 *)(param_1 + 0xcc),uVar2,uVar3,
               *(undefined4 *)(param_1 + 0x150));
  }
  else {
    if ((*param_2 & 0x10000000) == 0) {
      if (uVar9 == 0) goto LAB_82cb0d54;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x54);
      lVar7 = *plVar1;
      uVar9 = *(uint *)(plVar1 + 1);
      *plVar1 = lVar7 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
      if ((longlong)((ulonglong)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar7 < 0) {
        plVar1 = *(longlong **)(param_1 + 0x54);
        lVar7 = *plVar1;
        uVar9 = *(uint *)(plVar1 + 1);
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
        if ((longlong)((ulonglong)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        uVar9 = (-1 < lVar7 ^ 1) + 1;
      }
      else {
        uVar9 = 0;
LAB_82cb0d54:
        uVar12 = *(undefined4 *)(param_1 + 0x6ec);
        uVar6 = (**(code **)(param_1 + 0xc78))
                          (param_1,iVar10,*(undefined4 *)(param_1 + 0x72c),0,lVar11);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        (**(code **)(param_1 + 0xc80))(uVar12,uVar12,8,*(undefined4 *)(param_1 + 0x798));
      }
    }
    if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
    }
    if (uVar9 == 2) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
    }
    (**(code **)(param_1 + 0xc2c))
              (param_1,param_3,uVar12,lVar13,*(undefined4 *)(param_1 + 0xcc),uVar2,uVar3,
               *(undefined4 *)(param_1 + 0x150));
  }
  param_3 = (ulonglong)*(uint *)(param_1 + 0xec) + param_3;
  lVar13 = (ulonglong)*(uint *)(param_1 + 0xec) + lVar13;
  if (*(byte *)((int)param_2 + 0x11) == 0) {
    (**(code **)(param_1 + 0xc30))
              (param_1,param_3,lVar13,*(undefined4 *)(param_1 + 0xcc),uVar2,uVar3,
               *(undefined4 *)(param_1 + 0x150));
  }
  else {
    if ((*param_2 & 0x10000000) == 0) {
      if (uVar9 == 0) goto LAB_82cb10c8;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x54);
      lVar7 = *plVar1;
      uVar9 = *(uint *)(plVar1 + 1);
      *plVar1 = lVar7 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
      if ((longlong)((ulonglong)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar7 < 0) {
        plVar1 = *(longlong **)(param_1 + 0x54);
        lVar7 = *plVar1;
        uVar9 = *(uint *)(plVar1 + 1);
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
        if ((longlong)((ulonglong)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        uVar9 = (-1 < lVar7 ^ 1) + 1;
      }
      else {
        uVar9 = 0;
LAB_82cb10c8:
        uVar12 = *(undefined4 *)(param_1 + 0x6ec);
        uVar6 = (**(code **)(param_1 + 0xc78))
                          (param_1,iVar10,*(undefined4 *)(param_1 + 0x72c),0,lVar11);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        (**(code **)(param_1 + 0xc80))(uVar12,uVar12,8,*(undefined4 *)(param_1 + 0x798));
      }
    }
    if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
    }
    if (uVar9 == 2) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
    }
    (**(code **)(param_1 + 0xc2c))
              (param_1,param_3,uVar12,lVar13,*(undefined4 *)(param_1 + 0xcc),uVar2,uVar3,
               *(undefined4 *)(param_1 + 0x150));
  }
  if (*(byte *)(param_2 + 4) == 0) {
    (**(code **)(param_1 + 0xc30))
              (param_1,param_3 + 8,lVar13 + 8,*(undefined4 *)(param_1 + 0xcc),uVar2,uVar3,
               *(undefined4 *)(param_1 + 0x150));
  }
  else {
    if ((*param_2 & 0x10000000) == 0) {
      if (uVar9 == 0) goto LAB_82cb1438;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x54);
      lVar7 = *plVar1;
      uVar9 = *(uint *)(plVar1 + 1);
      *plVar1 = lVar7 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
      if ((longlong)((ulonglong)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar7 < 0) {
        plVar1 = *(longlong **)(param_1 + 0x54);
        lVar7 = *plVar1;
        uVar9 = *(uint *)(plVar1 + 1);
        *plVar1 = lVar7 << 1;
        *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
        if ((longlong)((ulonglong)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        uVar9 = (-1 < lVar7 ^ 1) + 1;
      }
      else {
        uVar9 = 0;
LAB_82cb1438:
        uVar12 = *(undefined4 *)(param_1 + 0x6ec);
        uVar6 = (**(code **)(param_1 + 0xc78))
                          (param_1,iVar10,*(undefined4 *)(param_1 + 0x72c),0,lVar11);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        (**(code **)(param_1 + 0xc80))(uVar12,uVar12,8,*(undefined4 *)(param_1 + 0x798));
      }
    }
    if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
    }
    if (uVar9 == 2) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
    }
    (**(code **)(param_1 + 0xc2c))
              (param_1,param_3 + 8,uVar12,lVar13 + 8,*(undefined4 *)(param_1 + 0xcc),uVar2,uVar3,
               *(undefined4 *)(param_1 + 0x150));
  }
  if (*(byte *)((int)param_2 + 0xf) == 0) {
    (**(code **)(param_1 + 0xc44))
              (param_1,param_4,lVar8,*(undefined4 *)(param_1 + 0xd0),uVar4,uVar5,
               *(undefined4 *)(param_1 + 0x150));
  }
  else {
    if ((*param_2 & 0x10000000) == 0) {
      if (uVar9 == 0) goto LAB_82cb17a0;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x54);
      lVar13 = *plVar1;
      uVar9 = *(uint *)(plVar1 + 1);
      *plVar1 = lVar13 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
      if ((longlong)((ulonglong)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar13 < 0) {
        plVar1 = *(longlong **)(param_1 + 0x54);
        lVar13 = *plVar1;
        uVar9 = *(uint *)(plVar1 + 1);
        *plVar1 = lVar13 << 1;
        *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
        if ((longlong)((ulonglong)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        uVar9 = (-1 < lVar13 ^ 1) + 1;
      }
      else {
        uVar9 = 0;
LAB_82cb17a0:
        uVar12 = *(undefined4 *)(param_1 + 0x6ec);
        uVar6 = (**(code **)(param_1 + 0xc78))
                          (param_1,iVar10,*(undefined4 *)(param_1 + 0x72c),0,lVar11);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        (**(code **)(param_1 + 0xc80))(uVar12,uVar12,8,*(undefined4 *)(param_1 + 0x798));
      }
    }
    if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
    }
    if (uVar9 == 2) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
    }
    (**(code **)(param_1 + 0xc48))
              (param_1,param_4,uVar12,lVar8,*(undefined4 *)(param_1 + 0xd0),uVar4,uVar5,
               *(undefined4 *)(param_1 + 0x150));
  }
  if (*(byte *)((int)param_2 + 0xe) == 0) {
    (**(code **)(param_1 + 0xc44))
              (param_1,uStack00000034,iVar14,*(undefined4 *)(param_1 + 0xd0),uVar4,uVar5,
               *(undefined4 *)(param_1 + 0x150));
    return 0;
  }
  if ((*param_2 & 0x10000000) == 0) {
    if (uVar9 != 0) goto LAB_82cb1b50;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x54);
    lVar8 = *plVar1;
    uVar9 = *(uint *)(plVar1 + 1);
    *plVar1 = lVar8 << 1;
    *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
    if ((longlong)((ulonglong)uVar9 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar8 < 0) {
      plVar1 = *(longlong **)(param_1 + 0x54);
      lVar8 = *plVar1;
      uVar9 = *(uint *)(plVar1 + 1);
      *plVar1 = lVar8 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar9 - 1);
      if ((longlong)((ulonglong)uVar9 - 1) < 0) {
        fn_82C4E5E8();
      }
      uVar9 = ((uint)LZCOUNT((uint)((ulonglong)lVar8 >> 0x3f)) >> 5 ^ 1) + 1;
      goto LAB_82cb1b50;
    }
    uVar9 = 0;
  }
  uVar12 = *(undefined4 *)(param_1 + 0x6ec);
  uVar6 = (**(code **)(param_1 + 0xc78))(param_1,iVar10,*(undefined4 *)(param_1 + 0x72c),0,lVar11);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  (**(code **)(param_1 + 0xc80))(uVar12,uVar12,8,*(undefined4 *)(param_1 + 0x798));
LAB_82cb1b50:
  if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
  }
  if (uVar9 != 2) {
    (**(code **)(param_1 + 0xc48))
              (param_1,uStack00000034,uVar12,iVar14,*(undefined4 *)(param_1 + 0xd0),uVar4,uVar5,
               *(undefined4 *)(param_1 + 0x150));
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(undefined4 *)(param_1 + 0x6e8),0,0x100);
}

