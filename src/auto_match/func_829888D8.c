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
extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_8297F6B8();
extern int fn_82980C18();
extern int fn_82981668();
extern int fn_82981738();
extern int fn_82983380();
extern int fn_829846B0();
extern int fn_82984F30();
extern int fn_829885C0();


int fn_829888D8(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  ulonglong uVar14;
  int *piVar15;
  int *piStack_90;
  int *apiStack_8c [35];
  
  if ((((param_2 != 0) && (*(int *)(param_2 + 4) != 0xe)) ||
      ((param_3 != 0 && (*(int *)(param_3 + 4) != 0xe)))) ||
     ((param_4 != 0 && (*(int *)(param_4 + 4) != 0xe)))) {
    return 0;
  }
  iVar9 = param_2 + 0x30;
  if (param_2 == 0) {
    iVar9 = param_1 + 0x28;
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_2 + 0x10);
  }
  if (param_3 == 0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = *(int **)(param_3 + 0x10);
  }
  if (param_4 == 0) {
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = *(int **)(param_4 + 0x10);
  }
  uVar14 = 0;
  piStack_90 = piVar13;
  apiStack_8c[0] = piVar12;
  uVar3 = fn_82930318(0x50);
  if ((uVar3 & 0xffffffff) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_82933088(uVar3,0,0x1e,0,0,1,iVar9);
  }
  if (iVar4 == 0) {
    return 0;
  }
  iVar5 = fn_82981668(param_1,iVar8);
  if (iVar5 == 0) {
    uVar10 = 0xffffffff8204e864;
    goto LAB_82988c44;
  }
  piVar15 = (int *)(iVar4 + 0x10);
  iVar5 = fn_82984F30(param_1,piVar13,piVar12,&piStack_90,apiStack_8c,piVar15);
  piVar7 = apiStack_8c[0];
  if (iVar5 < 0) {
    uVar10 = 0xffffffff8204e838;
    goto LAB_82988c44;
  }
  piVar6 = piStack_90;
  if ((iVar8 == 0) || (*(int *)(iVar8 + 4) != 9)) {
LAB_82988b98:
    if (*piVar15 == 0) goto LAB_82988c58;
    if (*(int *)(*piVar15 + 4) == 9) {
      uVar3 = fn_82930318(0x28);
      if ((uVar3 & 0xffffffff) != 0) {
        uVar14 = (ulonglong)*(uint *)(*piVar15 + 0x20);
        uVar11 = *(undefined4 *)(*piVar15 + 0x1c);
        goto LAB_82988bf4;
      }
LAB_82988c10:
      uVar14 = 0;
    }
    else {
      uVar3 = fn_82930318(0x28);
      if (uVar3 == 0) goto LAB_82988c10;
      uVar14 = fn_82981738(param_1,*piVar15);
      uVar11 = 1;
LAB_82988bf4:
      uVar14 = fn_82931D88(uVar3,2,0,0,uVar11,uVar14,0x200);
    }
    if ((uVar14 & 0xffffffff) == 0) {
      return 0;
    }
    iVar8 = fn_829846B0(param_1,uVar14,iVar8,0);
    if (iVar8 != 0) {
LAB_82988c58:
      if (param_2 != 0) {
        iVar8 = fn_829885C0(param_1,uVar14,param_2,0,0);
        *(int *)(iVar4 + 0x20) = iVar8;
        if (iVar8 == 0) {
          return 0;
        }
      }
      uVar3 = fn_82930318(0x50);
      if ((uVar3 & 0xffffffff) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = fn_82933088(uVar3,0,0,0,0,1,iVar9);
      }
      *(int *)(iVar4 + 0x24) = iVar9;
      if (iVar9 == 0) {
        return 0;
      }
      uVar3 = fn_82930318(0x14);
      if ((uVar3 & 0xffffffff) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = fn_829304E0(uVar3,0,0,0xffffffff8204e398);
      }
      *(int *)(iVar9 + 0x10) = iVar8;
      if (iVar8 == 0) {
        return 0;
      }
      if (piVar6 != (int *)0x0) {
        iVar8 = (**(code **)(*piVar6 + 4))(piVar6);
        *(int *)(*(int *)(iVar9 + 0x10) + 8) = iVar8;
        if (iVar8 == 0) {
          return 0;
        }
      }
      uVar3 = fn_82930318(0x14);
      if ((uVar3 & 0xffffffff) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = fn_829304E0(uVar3,0,0,0xffffffff8204e390);
      }
      *(int *)(iVar9 + 0x20) = iVar8;
      if (iVar8 == 0) {
        return 0;
      }
      if (param_3 != 0) {
        if ((piVar13 == piVar6) || (iVar8 = fn_8297F6B8(param_1,piVar13,piVar6), iVar8 != 0)) {
          iVar8 = fn_82930458(param_3);
        }
        else {
          iVar8 = fn_829885C0(param_1,piVar6,param_3,0,0);
        }
        *(int *)(*(int *)(iVar9 + 0x20) + 8) = iVar8;
        if (iVar8 == 0) {
          return 0;
        }
      }
      uVar3 = fn_82930318(0x14);
      if ((uVar3 & 0xffffffff) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = fn_829304E0(uVar3,0,0,0xffffffff8204e398);
      }
      *(int *)(*(int *)(iVar9 + 0x10) + 0xc) = iVar8;
      if (iVar8 == 0) {
        return 0;
      }
      if (piVar7 != (int *)0x0) {
        iVar8 = (**(code **)(*piVar7 + 4))(piVar7);
        *(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 0xc) + 8) = iVar8;
        if (iVar8 == 0) {
          return 0;
        }
      }
      uVar3 = fn_82930318(0x14);
      if ((uVar3 & 0xffffffff) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = fn_829304E0(uVar3,0,0,0xffffffff8204e390);
      }
      *(int *)(*(int *)(iVar9 + 0x20) + 0xc) = iVar8;
      if (iVar8 == 0) {
        return 0;
      }
      if (param_4 != 0) {
        if ((piVar12 == piVar7) || (iVar8 = fn_8297F6B8(param_1,piVar12,piVar7), iVar8 != 0)) {
          iVar8 = fn_82930458(param_4);
        }
        else {
          iVar8 = fn_829885C0(param_1,piVar7,param_4,0,0);
        }
        *(int *)(*(int *)(*(int *)(iVar9 + 0x20) + 0xc) + 8) = iVar8;
        if (iVar8 == 0) {
          return 0;
        }
      }
      fn_82983380(param_1,iVar9);
      fn_82983380(param_1,iVar4);
      return iVar4;
    }
  }
  else {
    uVar1 = *(uint *)(iVar8 + 0x1c);
    uVar2 = *(uint *)(iVar8 + 0x20);
    if (((piStack_90 == (int *)0x0) || (piStack_90[1] != 9)) ||
       ((uVar1 <= (uint)piStack_90[7] && (uVar2 <= (uint)piStack_90[8])))) {
LAB_82988ac8:
      if (((piVar7 != (int *)0x0) && (piVar7[1] == 9)) &&
         (((uint)piVar7[7] < uVar1 || ((uint)piVar7[8] < uVar2)))) {
        piVar7 = (int *)(**(code **)(*piVar7 + 4))(piVar7);
        if ((uint)piVar7[7] < uVar1) {
          piVar7[7] = uVar1;
        }
        if ((uint)piVar7[8] < uVar2) {
          piVar7[8] = uVar2;
        }
        iVar5 = fn_829846B0(param_1,piVar7,piVar12,0);
        if (iVar5 == 0) goto LAB_82988c38;
      }
      iVar5 = *piVar15;
      if ((iVar5 != 0) && (*(int *)(iVar5 + 4) == 9)) {
        if (*(uint *)(iVar5 + 0x1c) < uVar1) {
LAB_82988b80:
          *(uint *)(iVar5 + 0x1c) = uVar1;
        }
        else {
          if (uVar2 <= *(uint *)(iVar5 + 0x20)) goto LAB_82988b98;
          if (*(uint *)(iVar5 + 0x1c) < uVar1) goto LAB_82988b80;
        }
        if (*(uint *)(*piVar15 + 0x20) < uVar2) {
          *(uint *)(*piVar15 + 0x20) = uVar2;
        }
      }
      goto LAB_82988b98;
    }
    piVar6 = (int *)(**(code **)(*piStack_90 + 4))();
    if ((uint)piVar6[7] < uVar1) {
      piVar6[7] = uVar1;
    }
    if ((uint)piVar6[8] < uVar2) {
      piVar6[8] = uVar2;
    }
    iVar5 = fn_829846B0(param_1,piVar6,piVar13,0);
    if (iVar5 != 0) goto LAB_82988ac8;
  }
LAB_82988c38:
  uVar10 = 0xffffffff8204e808;
LAB_82988c44:
  fn_82980C18(param_1,iVar9,0xbcc,uVar10);
  return 0;
}

