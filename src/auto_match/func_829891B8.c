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
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_8297F6B8();
extern int fn_8297FC70();
extern int fn_8297FD50();
extern int fn_82980C18();
extern int fn_829814B0();
extern int fn_82981598();
extern int fn_82981668();
extern int fn_82983380();
extern int fn_829846B0();
extern int fn_82984B00();
extern int fn_82984F30();
extern int fn_82986C50();
extern int fn_829885C0();


int fn_829891B8(int param_1,int param_2,int *param_3,int *param_4,undefined8 param_5,int param_6)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piStack_70;
  int *apiStack_6c [27];
  
  piStack_70 = (int *)0x0;
  apiStack_6c[0] = (int *)0x0;
  if ((param_3 != (int *)0x0) && (param_3[1] != 0xe)) {
    return 0;
  }
  if (param_4 == (int *)0x0) {
    piVar10 = param_3 + 0xc;
    if (param_3 == (int *)0x0) {
      piVar10 = (int *)(param_1 + 0x28);
    }
  }
  else {
    if (param_4[1] != 0xe) {
      return 0;
    }
    piVar10 = param_4 + 0xc;
  }
  uVar1 = fn_82930318(0x50);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82933088(uVar1,0,param_2,0,0,param_5,piVar10);
  }
  if (iVar2 == 0) {
    return 0;
  }
  if (param_3 != (int *)0x0) {
    iVar3 = (**(code **)(*param_3 + 4))(param_3);
    *(int *)(iVar2 + 0x20) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if (((((param_2 != 0x23) && (param_2 != 0x24)) && (param_2 != 0x25)) &&
      (((param_2 != 0x26 && (param_2 != 0x27)) &&
       ((param_2 != 0x2d && ((param_2 != 0x2e && (param_2 != 0x28)))))))) &&
     ((param_2 != 0x29 && (((param_2 != 0x2a && (param_2 != 0x2b)) && (param_2 != 0x2c)))))) {
    if (param_4 != (int *)0x0) {
      iVar3 = (**(code **)(*param_4 + 4))(param_4);
      *(int *)(iVar2 + 0x24) = iVar3;
      if (iVar3 == 0) {
        return 0;
      }
    }
    goto LAB_829893fc;
  }
  uVar6 = 8;
  switch(param_2) {
  case 0x23:
    uVar6 = 8;
    break;
  case 0x24:
    uVar6 = 9;
    break;
  case 0x25:
    uVar6 = 10;
    break;
  case 0x26:
    uVar6 = 0xb;
    break;
  case 0x27:
    uVar6 = 0xc;
    break;
  case 0x28:
    uVar6 = 0xd;
    break;
  case 0x29:
    uVar6 = 0xe;
    break;
  case 0x2a:
    uVar6 = 0x15;
    break;
  case 0x2b:
    uVar6 = 0x16;
    break;
  case 0x2c:
    uVar6 = 0x17;
    break;
  case 0x2d:
    param_2 = 1;
    uVar6 = 2;
    goto LAB_829893d4;
  case 0x2e:
    param_2 = 1;
    uVar6 = 3;
  default:
    goto LAB_829893d4;
  }
  param_2 = 0x1b;
LAB_829893d4:
  iVar3 = fn_829891B8(param_1,uVar6,param_3,param_4,0,0);
  *(int *)(iVar2 + 0x24) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  *(int *)(iVar2 + 0x1c) = param_2;
LAB_829893fc:
  piVar11 = (int *)0x0;
  if (*(int *)(iVar2 + 0x20) != 0) {
    piStack_70 = *(int **)(*(int *)(iVar2 + 0x20) + 0x10);
    piVar11 = piStack_70;
  }
  if (((param_2 == 0) || (param_2 == 1)) ||
     (((param_2 == 0x1a || ((param_2 == 0x1b || (param_2 == 0x13)))) || (param_2 == 0x14)))) {
LAB_82989518:
    if (((param_2 == 2) || (param_2 == 3)) || ((param_2 == 0x1a || (param_2 == 0x1b)))) {
      iVar3 = fn_82981598(param_1,piVar11);
      if ((iVar3 != 0) || (iVar3 = fn_8297FC70(param_1,*(undefined4 *)(iVar2 + 0x20)), iVar3 != 0)
         ) {
        uVar6 = 0xbd1;
        uVar7 = 0xffffffff8204e8a0;
        goto LAB_82989a58;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
      if ((((iVar3 == 3) || (iVar3 == 4)) && (param_6 == 0)) &&
         (iVar3 = fn_82981668(param_1,piVar11), iVar3 == 0)) {
        uVar6 = 0xbf9;
        uVar7 = 0xffffffff8204e94c;
        goto LAB_82989a58;
      }
    }
LAB_829895a4:
    piVar9 = (int *)0x0;
    if (*(int *)(iVar2 + 0x24) != 0) {
      apiStack_6c[0] = *(int **)(*(int *)(iVar2 + 0x24) + 0x10);
      piVar9 = apiStack_6c[0];
    }
    piVar4 = piVar11;
    piVar8 = piVar11;
    if ((param_2 == 0x1a) || (param_2 == 0x1b)) {
      iVar3 = fn_829846B0(param_1,piVar11,piVar9,0);
      if (iVar3 == 0) {
LAB_829899e0:
        fn_82984B00(param_1,piVar10,0,piVar11,piVar9,0);
        return 0;
      }
      if (piVar11 == (int *)0x0) goto LAB_8298979c;
      iVar3 = (**(code **)(*piVar11 + 4))(piVar11);
      *(int *)(iVar2 + 0x10) = iVar3;
joined_r0x82989624:
      if (iVar3 == 0) {
        return 0;
      }
LAB_8298979c:
      uVar1 = (ulonglong)*(uint *)(iVar2 + 0x20);
      if (((uVar1 != 0) && (piVar11 != piVar4)) &&
         (iVar3 = fn_8297F6B8(param_1,piVar11,piVar4), iVar3 == 0)) {
        iVar3 = fn_829885C0(param_1,piVar4,uVar1,0,0);
        if (iVar3 == 0) {
          return 0;
        }
        *(int *)(iVar2 + 0x20) = iVar3;
      }
      uVar1 = (ulonglong)*(uint *)(iVar2 + 0x24);
      if (((uVar1 != 0) && (piVar9 != piVar8)) &&
         (iVar3 = fn_8297F6B8(param_1,piVar9,piVar8), iVar3 == 0)) {
        iVar3 = fn_829885C0(param_1,piVar8,uVar1,0,0);
        if (iVar3 == 0) {
          return 0;
        }
        *(int *)(iVar2 + 0x24) = iVar3;
      }
      if (*(int *)(iVar2 + 0x10) == 0) {
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      fn_82983380(param_1,iVar2);
      iVar3 = fn_8297FD50(param_1,iVar2,1);
      if (iVar3 != 0) {
        iVar3 = fn_82986C50(param_1,iVar2);
        if (iVar3 != 0) {
          return iVar3;
        }
        return iVar2;
      }
      return iVar2;
    }
    if ((param_2 == 0xd) || (param_2 == 0xe)) {
      if ((piVar9 == (int *)0x0) || ((piVar9[1] == 9 && ((uint)piVar9[5] < 10)))) {
        iVar3 = fn_829846B0(param_1,piVar11,piVar9,0);
        if (iVar3 != 0) goto LAB_8298979c;
        goto LAB_829899e0;
      }
    }
    else {
      if (((param_2 != 0x15) && (param_2 != 0x16)) && (param_2 != 0x17)) {
        piVar8 = piVar9;
        if (param_2 != 0) {
          if (((param_2 == 7) || (param_2 == 5)) ||
             ((param_2 == 6 || (((param_2 == 2 || (param_2 == 3)) || (param_2 == 1)))))) {
            if (piVar11 != (int *)0x0) {
              iVar3 = (**(code **)(*piVar11 + 4))(piVar11);
              *(int *)(iVar2 + 0x10) = iVar3;
              if (iVar3 == 0) {
                return 0;
              }
            }
          }
          else if (param_2 == 4) {
            if (piVar11 == (int *)0x0) {
              return 0;
            }
            uVar1 = fn_82930318(0x28);
            if ((uVar1 & 0xffffffff) == 0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = (int *)fn_82931D88(uVar1,piVar11[4],0,0,piVar11[7],piVar11[8],0x200);
            }
            if (piVar4 == (int *)0x0) {
              return 0;
            }
            iVar3 = fn_829846B0(param_1,piVar4,piVar11,0);
            if (iVar3 == 0) {
              uVar6 = 0xffffffff8204e90c;
LAB_8298992c:
              fn_82980C18(param_1,iVar2 + 0x30,0xbcc,uVar6);
              *(undefined4 *)(iVar2 + 0x10) = 0;
            }
            else {
              uVar5 = (**(code **)(*piVar4 + 4))(piVar4);
              *(undefined4 *)(iVar2 + 0x10) = uVar5;
            }
          }
          else {
            if ((param_2 != 0x18) && (param_2 != 0x19)) {
              if ((((param_2 != 0xf) && ((param_2 != 0x10 && (param_2 != 0x11)))) &&
                  (param_2 != 0x12)) && ((param_2 != 0x13 && (param_2 != 0x14)))) goto LAB_82989730;
              iVar3 = fn_82984F30(param_1,piVar11,piVar9,&piStack_70,apiStack_6c,
                                    (int *)(iVar2 + 0x10));
              if (-1 < iVar3) {
                *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x14) = 0;
                piVar4 = piStack_70;
                piVar8 = apiStack_6c[0];
                goto LAB_8298979c;
              }
              goto LAB_82989754;
            }
            uVar1 = fn_82930318(0x28);
            if ((uVar1 & 0xffffffff) == 0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = (int *)fn_82931D88(uVar1,0,0,0,1,1,0x200);
            }
            if (piVar4 == (int *)0x0) {
              return 0;
            }
            iVar3 = fn_829846B0(param_1,piVar4,piVar11,0);
            if ((iVar3 == 0) || (iVar3 = fn_829846B0(param_1,piVar4,piVar9,0), iVar3 == 0)) {
              uVar6 = 0xffffffff8204e8c0;
              goto LAB_8298992c;
            }
            uVar5 = (**(code **)(*piVar4 + 4))(piVar4);
            *(undefined4 *)(iVar2 + 0x10) = uVar5;
            piVar8 = piVar4;
          }
          fn_829814B0(param_1,*(undefined4 *)(iVar2 + 0x10),1);
          goto LAB_8298979c;
        }
        if (piVar11 == (int *)0x0) goto LAB_8298979c;
        iVar3 = (**(code **)(*piVar11 + 4))(piVar11);
        *(int *)(iVar2 + 0x10) = iVar3;
        goto joined_r0x82989624;
      }
      if ((piVar9 == (int *)0x0) || ((piVar9[1] == 9 && ((uint)piVar9[5] < 10)))) {
LAB_82989730:
        iVar3 = fn_82984F30(param_1,piVar11,piVar9,&piStack_70,apiStack_6c,iVar2 + 0x10);
        piVar4 = piStack_70;
        piVar8 = apiStack_6c[0];
        if (-1 < iVar3) goto LAB_8298979c;
LAB_82989754:
        uVar6 = 0xbcc;
        uVar7 = 0xffffffff8204e8fc;
        goto LAB_82989a58;
      }
    }
  }
  else {
    if (param_2 != 7) {
      if (((param_2 == 0xd) || (param_2 == 0xe)) ||
         ((param_2 == 0x15 || ((param_2 == 0x16 || (param_2 == 0x17)))))) {
        if ((piVar11 == (int *)0x0) || ((piVar11[1] != 9 || (9 < (uint)piVar11[5]))))
        goto LAB_82989470;
        uVar5 = (**(code **)(*piVar11 + 4))(piVar11);
        *(undefined4 *)(iVar2 + 0x10) = uVar5;
      }
      else if (((piVar11 == (int *)0x0) || (piVar11[1] != 9)) ||
              (iVar3 = fn_82981668(param_1,piVar11), iVar3 == 0)) {
        uVar6 = 0xbce;
        uVar7 = 0xffffffff8204e980;
        goto LAB_82989a58;
      }
      goto LAB_82989518;
    }
    if (((piVar11 != (int *)0x0) && (piVar11[1] == 9)) && ((uint)piVar11[5] < 10))
    goto LAB_829895a4;
  }
LAB_82989470:
  uVar6 = 0xc0a;
  uVar7 = 0xffffffff8204e9a4;
LAB_82989a58:
  fn_82980C18(param_1,piVar10,uVar6,uVar7);
  return 0;
}

