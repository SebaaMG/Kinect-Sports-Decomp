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
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern int fn_82931D48();
extern int fn_8297F6B8();
extern int fn_82981668();
extern int fn_82981738();
extern int fn_82981C40();
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_60;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_90;


bool fn_829846B0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  if (param_4 == 0) {
    if (param_2 == (undefined1 *)0x0) {
      if (param_3 != (undefined1 *)0x0) {
        return false;
      }
      return true;
    }
  }
  else if (param_2 == (undefined1 *)0x0) {
    return true;
  }
  if (param_3 == (undefined1 *)0x0) {
    return false;
  }
  fn_82931D48(auStack_70);
  fn_82931D48(auStack_a0);
  puVar5 = param_2;
  if (*(int *)(param_2 + 4) != 9) {
    uStack_60 = 4;
    uStack_54 = 1;
    uStack_50 = fn_82981738(param_1,param_2);
    puVar5 = auStack_70;
    if ((param_4 != 0) && (iVar2 = fn_82981668(param_1,param_2), iVar2 != 0)) {
      uStack_60 = 1;
    }
  }
  puVar7 = param_3;
  if (*(int *)(param_3 + 4) != 9) {
    uStack_90 = 4;
    uStack_84 = 1;
    uStack_80 = fn_82981738(param_1,param_3);
    puVar7 = auStack_a0;
    if ((param_4 != 0) && (iVar2 = fn_82981668(param_1,param_3), iVar2 != 0)) {
      uStack_90 = 1;
    }
  }
  iVar2 = *(int *)(puVar5 + 0x10);
  if ((iVar2 == 4) || (iVar3 = *(int *)(puVar7 + 0x10), iVar3 == 4)) {
    uVar6 = (longlong)*(int *)(puVar5 + 0x20) * (longlong)*(int *)(puVar5 + 0x1c);
    if (param_4 == 0) {
      if (iVar2 != *(int *)(puVar7 + 0x10)) {
        return false;
      }
      if ((uVar6 & 0xffffffff) !=
          ((longlong)*(int *)(puVar7 + 0x20) * (longlong)*(int *)(puVar7 + 0x1c) & 0xffffffffU)) {
        return false;
      }
      uVar8 = 0;
      if ((uVar6 & 0xffffffff) == 0) {
        return true;
      }
      do {
        iVar2 = fn_82981C40(param_1,param_2,uVar8,auStack_70);
        if (iVar2 < 0) {
          return false;
        }
        iVar2 = fn_82981C40(param_1,param_3,uVar8,auStack_a0);
        if (iVar2 < 0) {
          return false;
        }
        iVar2 = fn_8297F6B8(param_1,auStack_70,auStack_a0);
        if (iVar2 == 0) {
          return false;
        }
        uVar8 = uVar8 + 1;
      } while ((uVar8 & 0xffffffff) < (uVar6 & 0xffffffff));
      return true;
    }
    if (((longlong)*(int *)(puVar7 + 0x20) * (longlong)*(int *)(puVar7 + 0x1c) & 0xffffffffU) <
        (uVar6 & 0xffffffff)) {
      return false;
    }
    uVar8 = 0;
    if ((uVar6 & 0xffffffff) == 0) {
      return true;
    }
    do {
      iVar2 = fn_82981C40(param_1,param_2,uVar8,auStack_70);
      if (iVar2 < 0) {
        return false;
      }
      iVar2 = fn_82981C40(param_1,param_3,uVar8,auStack_a0);
      if (iVar2 < 0) {
        return false;
      }
      iVar2 = fn_829846B0(param_1,auStack_70,auStack_a0,1);
      if (iVar2 == 0) {
        return false;
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xffffffff) < (uVar6 & 0xffffffff));
    return true;
  }
  if (iVar2 == 0) {
LAB_829847e4:
    if (iVar3 == 3) {
      return false;
    }
    return true;
  }
  if (iVar2 == 1) {
    if (iVar3 == 0) {
      return true;
    }
    if (iVar3 == 1) {
LAB_82984808:
      if (*(uint *)(puVar7 + 0x20) < *(uint *)(puVar5 + 0x20)) {
        return false;
      }
      return true;
    }
    if (iVar3 == 2) {
      uVar4 = *(uint *)(puVar7 + 0x1c);
      if ((uVar4 == 1) && (*(uint *)(puVar7 + 0x20) < *(uint *)(puVar5 + 0x20))) {
        return false;
      }
      iVar2 = *(int *)(puVar7 + 0x20);
      if ((iVar2 == 1) && (uVar4 < *(uint *)(puVar5 + 0x20))) {
        return false;
      }
      if (uVar4 == 1) {
        return true;
      }
      if (iVar2 == 1) {
        return true;
      }
      iVar3 = *(int *)(puVar5 + 0x20);
LAB_8298486c:
      if (uVar4 * iVar2 != iVar3) {
        return false;
      }
      return true;
    }
    goto LAB_829847e4;
  }
  if (iVar2 == 2) {
    if (iVar3 == 0) {
      return true;
    }
    if (iVar3 == 1) {
      uVar4 = *(uint *)(puVar5 + 0x1c);
      if ((uVar4 == 1) && (*(uint *)(puVar7 + 0x20) < *(uint *)(puVar5 + 0x20))) {
        return false;
      }
      iVar2 = *(int *)(puVar5 + 0x20);
      if ((iVar2 == 1) && (*(uint *)(puVar7 + 0x20) < uVar4)) {
        return false;
      }
      if (uVar4 == 1) {
        return true;
      }
      if (iVar2 == 1) {
        return true;
      }
      iVar3 = *(int *)(puVar7 + 0x20);
      goto LAB_8298486c;
    }
    if (iVar3 == 2) {
      if (*(uint *)(puVar7 + 0x1c) < *(uint *)(puVar5 + 0x1c)) {
        return false;
      }
      goto LAB_82984808;
    }
    goto LAB_829847e4;
  }
  if (iVar2 != 3) {
    return true;
  }
  if (iVar3 != 3) {
    return false;
  }
  iVar2 = *(int *)(puVar7 + 0x14);
  if (iVar2 == 0x16) {
    return true;
  }
  iVar3 = *(int *)(puVar5 + 0x14);
  if ((0x2e < iVar3) && (iVar3 < 0x33)) {
    if (iVar3 == iVar2) {
      return true;
    }
    return iVar2 == 0x2f;
  }
  if (iVar2 == 0x18) {
    if (((iVar3 == 0x18) || (iVar3 == 0x19)) ||
       ((iVar3 == 0x1b || (((iVar3 == 0x1d || (iVar3 == 0x1e)) || (iVar3 == 0x1a))))))
    goto LAB_829849c8;
    bVar1 = iVar3 == 0x1c;
  }
  else {
    if ((iVar2 == 0x21) || (iVar2 == 0x2f)) {
      if ((((iVar3 != 0x21) && (iVar3 != 0x22)) && (iVar3 != 0x23)) &&
         ((iVar3 != 0x24 && (iVar3 != 0x25)))) {
        return false;
      }
      goto LAB_829849c8;
    }
    bVar1 = iVar3 == iVar2;
  }
  if (!bVar1) {
    return false;
  }
LAB_829849c8:
  iVar2 = fn_8297F6B8(param_1,*(undefined4 *)(puVar5 + 0x18),*(undefined4 *)(puVar7 + 0x18));
  if (iVar2 == 0) {
    return false;
  }
  return true;
}

