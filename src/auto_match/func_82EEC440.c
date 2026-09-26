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
extern int fn_823AAD80();
extern int fn_823AAD90();
extern int fn_82BF8B08();
extern int fn_82EEBAA0();
extern int fn_82EEBAF0();
extern int fn_82F3E928();
extern int fn_82F3E930();
extern int fn_82F3E938();
extern int fn_82F3EF98();
extern int fn_82F3F038();
extern int fn_82F3F130();
extern int fn_82F41770();
extern int fn_82F417A0();
extern int fn_82F41820();
extern int fn_82F41BD0();
extern int fn_82F6ADA8();


undefined8 fn_82EEC440(int param_1,ulonglong param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  int *piVar4;
  int iVar5;
  longlong lVar3;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar8 = 0;
  piVar4 = (int *)0x0;
  if ((param_2 & 0x100) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    piVar4 = (int *)fn_82EEBAA0(param_1 + -4);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    iVar5 = fn_823AAD90(piVar4);
    bVar1 = iVar5 != 0;
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    uVar7 = (uint)bVar1;
    iVar5 = fn_82F3E930(piVar4);
    if (iVar5 != 0) {
      uVar7 = uVar7 + 1;
      *(undefined4 *)((bVar1 + 8) * 4 + param_1) = 1;
    }
    iVar5 = fn_82BF8B08(piVar4);
    if (iVar5 != 0) {
      iVar5 = uVar7 + 8;
      uVar7 = uVar7 + 1;
      *(undefined4 *)(iVar5 * 4 + param_1) = 2;
    }
    iVar5 = fn_823AAD80(piVar4);
    if (iVar5 != 0) {
      *(undefined4 *)((uVar7 + 8) * 4 + param_1) = 3;
    }
    goto LAB_82eec7ec;
  }
  if ((*(short *)(param_3 + 0x14) == 0) && (uVar2 = *(ushort *)(param_3 + 4), uVar2 < 4)) {
    if ((param_2 & 0xa00) != 0) {
      piVar4 = (int *)fn_82EEBAA0(param_1 + -4);
      if (piVar4 == (int *)0x0) {
        return 1;
      }
      uVar2 = *(ushort *)(param_3 + 4);
      if (*(int *)((uVar2 + 8) * 4 + param_1) == -1) goto LAB_82eec7e8;
    }
    if ((param_2 & 0x200) != 0) {
      uVar7 = *(uint *)((uVar2 + 8) * 4 + param_1);
      if (uVar7 == 0) {
        uVar8 = 0xffffffff821600b8;
LAB_82eec5dc:
        uVar8 = fn_82F41BD0(param_3,uVar8);
        if ((int)uVar8 < 0) goto LAB_82eec7ec;
        iVar5 = (*(ushort *)(param_3 + 4) + 8) * 4;
        uVar7 = *(uint *)(iVar5 + param_1);
        if (uVar7 == 0) {
          *(undefined4 *)(param_3 + 0x3c) = 0;
        }
        else {
          if (uVar7 == 1) {
            uVar6 = 2;
          }
          else {
            if ((2 < uVar7) && (uVar7 != 3)) {
              uVar8 = 0xffffffff80004005;
              goto LAB_82eec63c;
            }
            uVar6 = 1;
          }
          *(undefined4 *)(param_3 + 0x3c) = uVar6;
        }
LAB_82eec63c:
        *(undefined2 *)(param_3 + 0x40) = 0;
        if ((param_2 & 1) == 0) goto LAB_82eec7ec;
        uVar7 = *(uint *)(iVar5 + param_1);
        if (uVar7 == 0) {
          uVar8 = fn_823AAD90(piVar4);
          uVar8 = fn_82F41820(param_3,uVar8);
          goto LAB_82eec7ec;
        }
        if (uVar7 == 1) {
          uVar8 = fn_82F3E930(piVar4);
          lVar3 = fn_82F3E928(piVar4);
          if (lVar3 == 0) {
            uVar8 = 0xffffffff82196582;
          }
          uVar8 = fn_82F41770(param_3,uVar8);
          goto LAB_82eec7ec;
        }
        if (uVar7 < 3) {
          uVar8 = fn_82BF8B08(piVar4);
        }
        else {
          if (uVar7 != 3) goto LAB_82eec598;
          uVar8 = fn_823AAD80(piVar4);
        }
        uVar8 = fn_82F417A0(param_3,uVar8);
      }
      else {
        if (uVar7 == 1) {
          uVar8 = 0xffffffff821600d8;
          goto LAB_82eec5dc;
        }
        if (uVar7 < 3) {
          uVar8 = 0xffffffff821600f8;
          goto LAB_82eec5dc;
        }
        if (uVar7 == 3) {
          uVar8 = 0xffffffff82160118;
          goto LAB_82eec5dc;
        }
LAB_82eec598:
        uVar8 = 0xffffffff80004005;
      }
      goto LAB_82eec7ec;
    }
    if ((param_2 & 0x400) == 0) {
      if ((param_2 & 0x800) == 0) goto LAB_82eec7ec;
      uVar7 = *(uint *)((uVar2 + 8) * 4 + param_1);
      if (uVar7 == 0) {
        uVar8 = fn_82F3E938(piVar4,0);
      }
      else if (uVar7 == 1) {
        uVar8 = fn_82F3EF98(piVar4,0,0);
      }
      else if (uVar7 < 3) {
        uVar8 = fn_82F3F038(piVar4,0);
      }
      else {
        if (uVar7 != 3) goto LAB_82eec598;
        uVar8 = fn_82F3F130(piVar4,0);
      }
      if (-1 < (int)uVar8) {
        for (uVar7 = (uint)*(ushort *)(param_3 + 4); uVar7 < 4; uVar7 = uVar7 + 1 & 0xffff) {
          if (uVar7 + 1 < 4) {
            *(undefined4 *)((uVar7 + 8) * 4 + param_1) = *(undefined4 *)((uVar7 + 9) * 4 + param_1);
          }
          else {
            *(undefined4 *)((uVar7 + 8) * 4 + param_1) = 0xffffffff;
          }
        }
        *(undefined4 *)(param_3 + 0x58) = 1;
      }
      goto LAB_82eec7ec;
    }
    if ((((*(short *)(param_3 + 0x40) == 0) && (*(int *)(param_3 + 0x3c) != 6)) &&
        (*(int *)(param_3 + 0x54) == 0)) &&
       (((((iVar5 = fn_82F6ADA8(0xffffffff821600b8,*(undefined4 *)(param_3 + 0x18)),
           iVar5 == 0 && (*(int *)(param_3 + 0x3c) == 0)) ||
          ((iVar5 = fn_82F6ADA8(0xffffffff821600d8,*(undefined4 *)(param_3 + 0x18)),
           iVar5 == 0 && (*(int *)(param_3 + 0x3c) == 2)))) ||
         ((iVar5 = fn_82F6ADA8(0xffffffff821600f8,*(undefined4 *)(param_3 + 0x18)), iVar5 == 0
          && (*(int *)(param_3 + 0x3c) == 1)))) ||
        ((iVar5 = fn_82F6ADA8(0xffffffff82160118,*(undefined4 *)(param_3 + 0x18)), iVar5 == 0
         && (*(int *)(param_3 + 0x3c) == 1)))))) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      piVar4 = (int *)fn_82EEBAF0(param_1 + -4);
      if (piVar4 == (int *)0x0) {
        return 1;
      }
      uVar6 = 0xffffffff;
      iVar5 = fn_82F6ADA8(0xffffffff821600b8,*(undefined4 *)(param_3 + 0x18));
      if (iVar5 == 0) {
        iVar5 = fn_823AAD90(piVar4);
        if (iVar5 == 0) {
          uVar8 = fn_82F3E938(piVar4,**(undefined4 **)(param_3 + 0x48));
          uVar6 = 0;
LAB_82eec8d4:
          if ((int)uVar8 < 0) goto LAB_82eec7ec;
LAB_82eec8e0:
          uVar7 = 0;
          do {
            if (*(int *)((uVar7 + 8) * 4 + param_1) == -1) break;
            uVar7 = uVar7 + 1 & 0xffff;
          } while (uVar7 < 4);
          if (uVar7 < 4) {
            *(undefined4 *)((uVar7 + 8) * 4 + param_1) = uVar6;
            *(short *)(param_3 + 4) = (short)uVar7;
          }
          else {
            uVar8 = 0xffffffff8000ffff;
          }
          goto LAB_82eec7ec;
        }
      }
      else {
        iVar5 = fn_82F6ADA8(0xffffffff821600d8,*(undefined4 *)(param_3 + 0x18));
        if (iVar5 == 0) {
          iVar5 = fn_82F3E930(piVar4);
          if (iVar5 == 0) {
            uVar8 = fn_82F3EF98(piVar4,*(undefined4 *)(param_3 + 0x44),
                                    *(undefined4 *)(param_3 + 0x48));
            uVar6 = 1;
            goto LAB_82eec8d4;
          }
        }
        else {
          iVar5 = fn_82F6ADA8(0xffffffff821600f8,*(undefined4 *)(param_3 + 0x18));
          if (iVar5 == 0) {
            iVar5 = fn_82BF8B08(piVar4);
            if (iVar5 == 0) {
              uVar8 = fn_82F3F038(piVar4,*(undefined4 *)(param_3 + 0x48));
              uVar6 = 2;
              goto LAB_82eec8d4;
            }
          }
          else {
            iVar5 = fn_82F6ADA8(0xffffffff82160118,*(undefined4 *)(param_3 + 0x18));
            if (iVar5 != 0) goto LAB_82eec8e0;
            iVar5 = fn_823AAD80(piVar4);
            if (iVar5 == 0) {
              uVar8 = fn_82F3F130(piVar4,*(undefined4 *)(param_3 + 0x48));
              uVar6 = 3;
              goto LAB_82eec8d4;
            }
          }
        }
      }
      *(undefined4 *)(param_3 + 0x54) = 1;
    }
  }
LAB_82eec7e8:
  uVar8 = 1;
LAB_82eec7ec:
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  return uVar8;
}

