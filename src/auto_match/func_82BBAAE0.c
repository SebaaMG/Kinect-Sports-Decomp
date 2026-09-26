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
extern int fn_82AB15D0();
extern int fn_82BA0450();
extern int fn_82BC22B8();
extern int fn_82BC2360();


void fn_82BBAAE0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar3;
  char cVar5;
  int iVar4;
  undefined8 uVar2;
  uint uVar6;
  longlong lVar7;
  
  if (((uint)param_1[0x39] >> 9 & 1) == 0) {
    return;
  }
  iVar4 = param_1[6];
  if (iVar4 < 0x19) {
    if (iVar4 == 0x18) {
LAB_82bbad4c:
      piVar3 = (int *)fn_82BA0450(param_1);
      uVar6 = piVar3[0xef] - *(int *)(param_2 + 0x868);
      if (1 < (int)(-((int)uVar6 >> 0x1f) - 1U & uVar6)) {
        return;
      }
      if (param_1[6] != piVar3[6]) {
        return;
      }
      cVar5 = fn_82BC2360(param_1,piVar3);
      if (cVar5 == '\0') {
        return;
      }
      cVar5 = fn_82BC22B8(param_1,piVar3);
      if (cVar5 == '\0') {
        return;
      }
      if (param_1[0x3b] != piVar3[0x3b]) {
        return;
      }
      lVar7 = 0;
      do {
        iVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,0,lVar7);
        if (iVar4 != 1) {
          iVar4 = *param_1;
          uVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,0,lVar7);
          (**(code **)(iVar4 + 0x54))(param_1,0,lVar7,uVar2);
          iVar4 = *param_1;
          uVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,1,lVar7);
          (**(code **)(iVar4 + 0x58))(param_1,1,lVar7,uVar2);
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < 4);
      iVar4 = piVar3[0x3c];
      goto LAB_82bbb160;
    }
    if (iVar4 < 0x12) {
      return;
    }
    if (0x13 < iVar4) {
      if (iVar4 == 0x14) {
LAB_82bbae74:
        iVar4 = (**(code **)(*param_1 + 4))(param_1);
        if (iVar4 != 3) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e09a8,0xffffffff820e0950,0x45e);
        }
        piVar3 = (int *)fn_82BA0450(param_1);
        uVar6 = piVar3[0xef] - *(int *)(param_2 + 0x868);
        if (1 < (int)(-((int)uVar6 >> 0x1f) - 1U & uVar6)) {
          return;
        }
        if (param_1[6] != piVar3[6]) {
          return;
        }
        cVar5 = fn_82BC2360(param_1,piVar3);
        if (cVar5 == '\0') {
          return;
        }
        cVar5 = fn_82BC22B8(param_1,piVar3);
        if (cVar5 == '\0') {
          return;
        }
        if (param_1[0x3b] != piVar3[0x3b]) {
          return;
        }
        if (param_1[0x3c] != piVar3[0x3c]) {
          return;
        }
        if (param_1[0x3d] != piVar3[0x3d]) {
          return;
        }
        lVar7 = 0;
        do {
          iVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,0,lVar7);
          if (iVar4 != 1) {
            iVar4 = *param_1;
            uVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,0,lVar7);
            (**(code **)(iVar4 + 0x54))(param_1,0,lVar7,uVar2);
            iVar4 = *param_1;
            uVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,1,lVar7);
            (**(code **)(iVar4 + 0x58))(param_1,1,lVar7,uVar2);
            iVar4 = *param_1;
            uVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,2,lVar7);
            (**(code **)(iVar4 + 0x58))(param_1,2,lVar7,uVar2);
            iVar4 = *param_1;
            uVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,3,lVar7);
            (**(code **)(iVar4 + 0x58))(param_1,3,lVar7,uVar2);
          }
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < 4);
        iVar4 = piVar3[0x3e];
        goto LAB_82bbb160;
      }
      if (iVar4 < 0x15) {
        return;
      }
      if (iVar4 < 0x17) goto LAB_82bbad4c;
      if (iVar4 != 0x17) {
        return;
      }
    }
  }
  else if (iVar4 != 0x19) {
    if (iVar4 != 0x1a) {
      if (iVar4 < 0x24) {
        return;
      }
      if (iVar4 < 0x27) goto LAB_82bbae74;
      if (iVar4 != 0x31) {
        return;
      }
    }
    goto LAB_82bbad4c;
  }
  piVar3 = (int *)fn_82BA0450(param_1);
  uVar6 = piVar3[0xef] - *(int *)(param_2 + 0x868);
  if (1 < (int)(-((int)uVar6 >> 0x1f) - 1U & uVar6)) {
    return;
  }
  if (param_1[6] != piVar3[6]) {
    return;
  }
  cVar5 = fn_82BC2360(param_1,piVar3);
  if (cVar5 == '\0') {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 4))(param_1);
  if (iVar4 != 2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e09c0,0xffffffff820e0950,0x431);
  }
  if ((param_1[0x3b] != piVar3[0x3b]) || (param_1[0x3c] != piVar3[0x3c])) {
    if (param_1[0x3c] != piVar3[0x3b]) {
      return;
    }
    if (param_1[0x3b] != piVar3[0x3c]) {
      return;
    }
  }
  cVar5 = fn_82BC22B8(param_1,piVar3);
  if (cVar5 == '\0') {
    return;
  }
  if ((param_1[0x3b] == piVar3[0x3b]) && (param_1[0x3c] == piVar3[0x3c])) {
    lVar7 = 0;
    do {
      iVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,0,lVar7);
      if (iVar4 != 1) {
        iVar4 = *param_1;
        uVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,0,lVar7);
        (**(code **)(iVar4 + 0x54))(param_1,0,lVar7,uVar2);
        iVar4 = *param_1;
        uVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,1,lVar7);
        (**(code **)(iVar4 + 0x58))(param_1,1,lVar7,uVar2);
        iVar4 = *param_1;
        uVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,2,lVar7);
        (**(code **)(iVar4 + 0x58))(param_1,2,lVar7,uVar2);
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < 4);
  }
  else {
    lVar7 = 0;
    do {
      iVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,0,lVar7);
      if (iVar4 != 1) {
        iVar4 = *param_1;
        uVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,0,lVar7);
        (**(code **)(iVar4 + 0x54))(param_1,0,lVar7,uVar2);
        iVar4 = *param_1;
        uVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,2,lVar7);
        (**(code **)(iVar4 + 0x58))(param_1,1,lVar7,uVar2);
        iVar4 = *param_1;
        uVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,1,lVar7);
        (**(code **)(iVar4 + 0x58))(param_1,2,lVar7,uVar2);
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < 4);
  }
  iVar4 = piVar3[0x3d];
LAB_82bbb160:
  iVar1 = param_1[5];
  if (((uint)param_1[0x39] >> 9 & 1) == 0) {
    param_1[5] = iVar1 + 1;
    param_1[iVar1 + 0x3b] = iVar4;
    param_1[0x39] = param_1[0x39] | 0x200;
  }
  else {
    param_1[iVar1 + 0x3a] = iVar4;
  }
  return;
}

