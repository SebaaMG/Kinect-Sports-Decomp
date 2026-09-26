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
extern int fn_8294B7A8();
extern int fn_8294BB48();
extern int fn_8294C180();
extern int fn_82952570();
extern int fn_829581E8();
extern int fn_82964868();
extern int fn_82969030();
extern int fn_82971580();
extern int fn_82975B00();


longlong fn_82960DD8(int *param_1)

{
  uint *puVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1[0x17] != 0) {
    bVar2 = false;
    param_1[0x40] = 0;
    if (param_1[3] != 0) {
      do {
        puVar1 = *(uint **)(param_1[0x40] * 4 + param_1[6]);
        param_1[0x41] = (int)puVar1;
        if ((*puVar1 & 0xfff00000) == 0x20800000) {
          lVar3 = fn_8294BB48(param_1);
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          bVar2 = (bool)((int)lVar3 == 0 | bVar2);
        }
        iVar5 = param_1[0x40];
        param_1[0x40] = iVar5 + 1U;
      } while (iVar5 + 1U < (uint)param_1[3]);
      if (bVar2) {
        fn_8294B7A8(param_1);
      }
    }
  }
  if (param_1[0xc] != 0) {
    uVar4 = 0;
    do {
      if (0xf < uVar4) goto LAB_82960f28;
      uVar7 = param_1[3];
      bVar2 = true;
      uVar6 = 0;
      if (uVar7 != 0) {
        iVar5 = 0;
        bVar2 = true;
        do {
          param_1[0x41] = *(int *)(iVar5 + param_1[6]);
          lVar3 = fn_8294C180(param_1);
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          bVar2 = (bool)(lVar3 != 0 & bVar2);
          lVar3 = fn_82964868(param_1,param_1[0x41]);
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          uVar6 = uVar6 + 1;
          iVar5 = iVar5 + 4;
          *(undefined4 *)param_1[0x41] = 0;
        } while (uVar6 < uVar7);
      }
      lVar3 = fn_82969030(param_1);
      if ((int)lVar3 < 0) {
        return lVar3;
      }
      uVar4 = uVar4 + 1;
    } while (!bVar2);
    if (0xf < uVar4) {
LAB_82960f28:
      uVar4 = param_1[3];
      bVar2 = true;
      uVar7 = 0;
      if (uVar4 != 0) {
        iVar5 = 0;
        bVar2 = true;
        do {
          param_1[0x41] = *(int *)(iVar5 + param_1[6]);
          lVar3 = fn_8294C180(param_1);
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          if ((int)lVar3 == 0) {
            fn_82975B00(param_1,*(undefined4 *)(param_1[0x41] + 0x3c),0x11c9,
                              0xffffffff8203870c);
            bVar2 = false;
          }
          lVar3 = fn_82964868(param_1,param_1[0x41]);
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + 4;
          *(undefined4 *)param_1[0x41] = 0;
        } while (uVar7 < uVar4);
      }
      lVar3 = fn_82969030(param_1);
      if ((int)lVar3 < 0) {
        return lVar3;
      }
      if (!bVar2) {
        return -0x7fffbffb;
      }
    }
  }
  if (((param_1[0x1c] & 0x1000000U) == 0) &&
     (lVar3 = (**(code **)(*param_1 + 0x16c))(param_1), (int)lVar3 < 0)) {
    return lVar3;
  }
  if (param_1[0x18] != 0) {
    lVar3 = fn_829581E8(param_1);
    if ((int)lVar3 < 0) {
      return lVar3;
    }
    fn_8294B7A8(param_1);
    lVar3 = fn_82971580(param_1);
    if ((int)lVar3 < 0) {
      return lVar3;
    }
    lVar3 = fn_82952570(param_1);
    if ((int)lVar3 < 0) {
      return lVar3;
    }
  }
  return 0;
}

