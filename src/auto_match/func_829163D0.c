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
extern int fn_82904258();
extern int fn_82914750();
extern int fn_82964628();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


undefined8 fn_829163D0(int param_1,int param_2,uint *param_3,ulonglong param_4)

{
  uint uVar2;
  undefined8 uVar1;
  int iVar3;
  int iVar5;
  ulonglong uVar4;
  uint *puVar6;
  uint uVar7;
  double dVar8;
  
  if (param_2 == 0) {
    if (param_3 == (uint *)0x0) {
      return 0;
    }
    dVar8 = lbl_82005710;
    uVar4 = param_4 & 0xffffffff;
    while (uVar4 != 0) {
      uVar2 = fn_82964628(dVar8,*(int *)(param_1 + 8),
                                *(undefined4 *)(*(int *)(param_1 + 8) + 0x88),0,0);
      *param_3 = uVar2;
      if (uVar2 < *(uint *)(*(int *)(param_1 + 8) + 8)) {
        iVar5 = *(int *)(uVar2 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
      }
      else {
        iVar5 = 0;
      }
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x30) = 0xffffffff;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 - 1;
      uVar4 = param_4;
    }
    return 0;
  }
  iVar5 = *(int *)(param_2 + 4);
  if (iVar5 != 0xf) {
    if (iVar5 == 0xe) {
      uVar1 = fn_82914750(param_1,param_2,param_3,0);
      return uVar1;
    }
    if (iVar5 == 1) {
      while (iVar5 = *(int *)(param_2 + 8), iVar5 != 0) {
        if (*(int *)(iVar5 + 4) == 0xf) {
          iVar3 = 1;
          if (*(int *)(iVar5 + 0x10) == 6) {
            iVar3 = *(int *)(iVar5 + 0x1c);
          }
          uVar1 = fn_829163D0(param_1,iVar5,param_3,iVar3);
        }
        else {
          if ((iVar5 == 0) || (*(int *)(iVar5 + 4) != 0xe)) break;
          iVar3 = *(int *)(iVar5 + 0x18) * *(int *)(iVar5 + 0x14);
          uVar1 = fn_82914750(param_1,iVar5,param_3,0);
        }
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        if (param_3 != (uint *)0x0) {
          param_3 = param_3 + iVar3;
        }
        param_2 = *(int *)(param_2 + 0xc);
        if (param_2 == 0) {
          return 0;
        }
      }
    }
    fn_82904258(param_1,0,0,0xffffffff8202e0c4);
    return 0xffffffff80004005;
  }
  if (param_3 == (uint *)0x0) {
    return 0;
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if (uVar2 == 6) {
    if (*(int *)(param_2 + 0x18) != -1) {
      iVar5 = 0;
      if ((param_4 & 0xffffffff) == 0) {
        return 0;
      }
      param_3 = param_3 + -1;
      do {
        iVar3 = *(int *)(param_2 + 0x18) + iVar5;
        iVar5 = iVar5 + 1;
        param_3 = param_3 + 1;
        *param_3 = *(uint *)(iVar3 * 4 + *(int *)(param_1 + 0x18));
        param_4 = param_4 - 1;
      } while (param_4 != 0);
      return 0;
    }
    if ((param_4 & 0xffffffff) == 0) {
      return 0;
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar5 + (int)param_3) = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5);
      iVar5 = iVar5 + 4;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
    return 0;
  }
  uVar7 = 0;
  dVar8 = lbl_82005710;
  if (uVar2 == 0) {
    if (*(int *)(param_2 + 0x18) != 0) {
      dVar8 = lbl_82005758;
    }
    uVar7 = 0x17;
  }
  else {
    if (uVar2 == 1) {
      uVar4 = (ulonglong)*(int *)(param_2 + 0x18);
    }
    else {
      if (2 < uVar2) {
        if (uVar2 == 3) {
          dVar8 = *(double *)(param_2 + 0x18);
        }
        goto LAB_8291656c;
      }
      uVar4 = (ulonglong)*(uint *)(param_2 + 0x18);
    }
    uVar7 = 2;
    dVar8 = (double)(longlong)uVar4;
  }
LAB_8291656c:
  uVar2 = fn_82964628(dVar8,*(int *)(param_1 + 8),
                            *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
  *param_3 = uVar2;
  if (uVar2 < *(uint *)(*(int *)(param_1 + 8) + 8)) {
    puVar6 = *(uint **)(uVar2 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
  }
  else {
    puVar6 = (uint *)0x0;
  }
  if (puVar6 != (uint *)0x0) {
    puVar6[0xc] = 0xffffffff;
    *puVar6 = *puVar6 | uVar7;
  }
  return 0;
}

