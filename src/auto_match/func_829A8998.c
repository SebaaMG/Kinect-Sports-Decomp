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
extern int fn_8294D3A8();
extern int fn_829581E8();
extern int fn_82964868();
extern int fn_82969030();
extern int fn_82971580();
extern int fn_82975B00();
extern int fn_829A7050();
extern int fn_829A8088();


longlong fn_829A8998(int param_1)

{
  uint *puVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    bVar2 = false;
    *(undefined4 *)(param_1 + 0x100) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        puVar1 = *(uint **)(*(int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18));
        *(uint **)(param_1 + 0x104) = puVar1;
        if ((*puVar1 & 0xfff00000) == 0x20800000) {
          lVar3 = fn_8294BB48(param_1);
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          bVar2 = (bool)((int)lVar3 == 0 | bVar2);
        }
        uVar5 = *(int *)(param_1 + 0x100) + 1;
        *(uint *)(param_1 + 0x100) = uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0xc));
      if (bVar2) {
        fn_8294B7A8(param_1);
      }
    }
  }
  if ((*(uint *)(param_1 + 0xcc) & 4) == 0) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar6 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar5;
        *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x18));
        iVar4 = fn_829A8088(param_1);
        if (iVar4 == 0) {
          fn_8294B7A8(param_1);
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar5 < *(uint *)(param_1 + 0xc));
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar6 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar5;
        puVar1 = *(uint **)(iVar6 + *(int *)(param_1 + 0x18));
        *(uint **)(param_1 + 0x104) = puVar1;
        if (((*puVar1 & 0xfff00000) == 0x50000000) &&
           (lVar3 = fn_829A7050(param_1), (int)lVar3 < 0)) {
          return lVar3;
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar5 < *(uint *)(param_1 + 0xc));
    }
    fn_8294B7A8(param_1);
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar6 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar5;
        puVar1 = *(uint **)(iVar6 + *(int *)(param_1 + 0x18));
        *(uint **)(param_1 + 0x104) = puVar1;
        uVar8 = *puVar1 & 0xfff00000;
        if (((((uVar8 == 0x10300000) || (uVar8 == 0x10500000)) || (uVar8 == 0x10600000)) ||
            ((uVar8 == 0x10700000 || (uVar8 == 0x50000000)))) &&
           (lVar3 = fn_8294D3A8(param_1), (int)lVar3 < 0)) {
          return lVar3;
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar5 < *(uint *)(param_1 + 0xc));
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar5 = 0;
    do {
      if (0xf < uVar5) goto LAB_829a8c30;
      uVar8 = *(uint *)(param_1 + 0xc);
      bVar2 = true;
      uVar7 = 0;
      if (uVar8 != 0) {
        iVar6 = 0;
        bVar2 = true;
        do {
          *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x18));
          lVar3 = fn_8294C180(param_1);
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          bVar2 = (bool)(lVar3 != 0 & bVar2);
          lVar3 = fn_82964868(param_1,*(undefined4 *)(param_1 + 0x104));
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + 4;
          **(undefined4 **)(param_1 + 0x104) = 0;
        } while (uVar7 < uVar8);
      }
      lVar3 = fn_82969030(param_1);
      if ((int)lVar3 < 0) {
        return lVar3;
      }
      uVar5 = uVar5 + 1;
    } while (!bVar2);
    if (0xf < uVar5) {
LAB_829a8c30:
      uVar5 = *(uint *)(param_1 + 0xc);
      bVar2 = true;
      uVar8 = 0;
      if (uVar5 != 0) {
        iVar6 = 0;
        bVar2 = true;
        do {
          *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x18));
          lVar3 = fn_8294C180(param_1);
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          if ((int)lVar3 == 0) {
            fn_82975B00(param_1,*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x3c),0x11c9,
                              0xffffffff8203870c);
            bVar2 = false;
          }
          lVar3 = fn_82964868(param_1,*(undefined4 *)(param_1 + 0x104));
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          uVar8 = uVar8 + 1;
          iVar6 = iVar6 + 4;
          **(undefined4 **)(param_1 + 0x104) = 0;
        } while (uVar8 < uVar5);
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
  if (*(int *)(param_1 + 0x60) != 0) {
    lVar3 = fn_829581E8(param_1);
    if ((int)lVar3 < 0) {
      return lVar3;
    }
    fn_8294B7A8(param_1);
    lVar3 = fn_82971580(param_1);
    if ((int)lVar3 < 0) {
      return lVar3;
    }
  }
  return 0;
}

