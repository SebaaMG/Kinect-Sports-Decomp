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
extern int fn_82EEB9C0();
extern int fn_82EEBA10();
extern int fn_82F3E928();
extern int fn_82F3E930();
extern int fn_82F3FB10();
extern int fn_82F3FBF0();
extern int fn_82F3FCD0();
extern int fn_82F3FDB0();
extern int fn_82F3FE90();
extern int fn_82F417A0();
extern int fn_82F41BD0();
extern int fn_82F6ADA8();


undefined8 fn_82EEBE20(int param_1,ulonglong param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  int *piVar4;
  int iVar5;
  undefined8 uVar3;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  uVar8 = 0;
  piVar4 = (int *)0x0;
  if ((param_2 & 0x100) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    piVar4 = (int *)fn_82EEB9C0(param_1 + -4);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    iVar5 = fn_823AAD90(piVar4);
    bVar1 = iVar5 != 0;
    if (bVar1) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    uVar7 = (uint)bVar1;
    iVar5 = fn_82F3E930(piVar4);
    if (iVar5 != 0) {
      uVar7 = uVar7 + 1;
      *(undefined4 *)((bVar1 + 3) * 4 + param_1) = 1;
    }
    iVar5 = fn_82BF8B08(piVar4);
    if (iVar5 != 0) {
      iVar5 = uVar7 + 3;
      uVar7 = uVar7 + 1;
      *(undefined4 *)(iVar5 * 4 + param_1) = 2;
    }
    iVar5 = fn_823AAD80(piVar4);
    if (iVar5 != 0) {
      iVar5 = uVar7 + 3;
      uVar7 = uVar7 + 1;
      *(undefined4 *)(iVar5 * 4 + param_1) = 3;
    }
    iVar5 = fn_82F3E928(piVar4);
    if (iVar5 != 0) {
      *(undefined4 *)((uVar7 + 3) * 4 + param_1) = 4;
    }
    goto LAB_82eec1e0;
  }
  if ((*(short *)(param_3 + 0x14) == 0) && (uVar2 = *(ushort *)(param_3 + 4), uVar2 < 5)) {
    if ((param_2 & 0xa00) != 0) {
      piVar4 = (int *)fn_82EEB9C0(param_1 + -4);
      if (piVar4 == (int *)0x0) {
        return 1;
      }
      uVar2 = *(ushort *)(param_3 + 4);
      if (*(int *)((uVar2 + 3) * 4 + param_1) == -1) goto LAB_82eec1dc;
    }
    if ((param_2 & 0x200) != 0) {
      uVar7 = *(uint *)((uVar2 + 3) * 4 + param_1);
      if (uVar7 == 0) {
        uVar8 = 0xffffffff82160060;
LAB_82eebffc:
        uVar8 = fn_82F41BD0(param_3,uVar8);
        if ((int)uVar8 < 0) goto LAB_82eec1e0;
        *(undefined2 *)(param_3 + 0x40) = 0;
        *(undefined4 *)(param_3 + 0x3c) = 1;
        uVar7 = *(uint *)((*(ushort *)(param_3 + 4) + 3) * 4 + param_1);
        if (uVar7 == 0) {
          uVar3 = fn_823AAD90(piVar4);
        }
        else if (uVar7 == 1) {
          uVar3 = fn_82F3E930(piVar4);
        }
        else if (uVar7 < 3) {
          uVar3 = fn_82BF8B08(piVar4);
        }
        else if (uVar7 == 3) {
          uVar3 = fn_823AAD80(piVar4);
        }
        else {
          if (4 < uVar7) goto LAB_82eebfa8;
          uVar3 = fn_82F3E928(piVar4);
        }
        if ((param_2 & 1) != 0) {
          uVar8 = fn_82F417A0(param_3,uVar3);
        }
      }
      else {
        if (uVar7 == 1) {
          uVar8 = 0xffffffff8216006c;
          goto LAB_82eebffc;
        }
        if (uVar7 < 3) {
          uVar8 = 0xffffffff821600a4;
          goto LAB_82eebffc;
        }
        if (uVar7 == 3) {
          uVar8 = 0xffffffff8216007c;
          goto LAB_82eebffc;
        }
        if (uVar7 < 5) {
          uVar8 = 0xffffffff82160094;
          goto LAB_82eebffc;
        }
LAB_82eebfa8:
        uVar8 = 0xffffffff80004005;
      }
      goto LAB_82eec1e0;
    }
    if ((param_2 & 0x400) == 0) {
      if ((param_2 & 0x800) == 0) goto LAB_82eec1e0;
      uVar7 = *(uint *)((uVar2 + 3) * 4 + param_1);
      if (uVar7 == 0) {
        uVar8 = fn_82F3FB10(piVar4,0);
      }
      else if (uVar7 == 1) {
        uVar8 = fn_82F3FBF0(piVar4,0);
      }
      else if (uVar7 < 3) {
        uVar8 = fn_82F3FCD0(piVar4,0);
      }
      else if (uVar7 == 3) {
        uVar8 = fn_82F3FDB0(piVar4,0);
      }
      else {
        if (4 < uVar7) goto LAB_82eebfa8;
        uVar8 = fn_82F3FE90(piVar4,0);
      }
      if (-1 < (int)uVar8) {
        uVar7 = (uint)*(ushort *)(param_3 + 4);
        if (*(ushort *)(param_3 + 4) < 5) {
          iVar5 = 5 - uVar7;
          puVar6 = (undefined4 *)((uVar7 + 3) * 4 + param_1);
          do {
            uVar7 = uVar7 + 1;
            if ((int)uVar7 < 5) {
              *puVar6 = puVar6[1];
            }
            else {
              *puVar6 = 0xffffffff;
            }
            puVar6 = puVar6 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *(undefined4 *)(param_3 + 0x58) = 1;
      }
      goto LAB_82eec1e0;
    }
    if (((((*(short *)(param_3 + 0x40) == 0) && (*(int *)(param_3 + 0x3c) != 6)) &&
         (*(uint *)(param_3 + 0x44) < 0x10000)) && (*(int *)(param_3 + 0x54) == 0)) &&
       ((((((iVar5 = fn_82F6ADA8(0xffffffff82160060,*(undefined4 *)(param_3 + 0x18)),
            iVar5 == 0 && (*(int *)(param_3 + 0x3c) == 1)) ||
           ((iVar5 = fn_82F6ADA8(0xffffffff8216006c,*(undefined4 *)(param_3 + 0x18)),
            iVar5 == 0 && (*(int *)(param_3 + 0x3c) == 1)))) ||
          ((iVar5 = fn_82F6ADA8(0xffffffff821600a4,*(undefined4 *)(param_3 + 0x18)),
           iVar5 == 0 && (*(int *)(param_3 + 0x3c) == 1)))) ||
         ((iVar5 = fn_82F6ADA8(0xffffffff8216007c,*(undefined4 *)(param_3 + 0x18)), iVar5 == 0
          && (*(int *)(param_3 + 0x3c) == 1)))) ||
        ((iVar5 = fn_82F6ADA8(0xffffffff82160094,*(undefined4 *)(param_3 + 0x18)), iVar5 == 0
         && (*(int *)(param_3 + 0x3c) == 1)))))) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      piVar4 = (int *)fn_82EEBA10(param_1 + -4);
      if (piVar4 == (int *)0x0) {
        return 1;
      }
      uVar9 = 0xffffffff;
      iVar5 = fn_82F6ADA8(0xffffffff82160060,*(undefined4 *)(param_3 + 0x18));
      if (iVar5 == 0) {
        iVar5 = fn_823AAD90(piVar4);
        if (iVar5 == 0) {
          uVar8 = fn_82F3FB10(piVar4,*(undefined4 *)(param_3 + 0x48));
          uVar9 = 0;
LAB_82eec2f8:
          if ((int)uVar8 < 0) goto LAB_82eec1e0;
LAB_82eec304:
          uVar7 = 0;
          do {
            if (*(int *)((uVar7 + 3) * 4 + param_1) == -1) break;
            uVar7 = uVar7 + 1 & 0xffff;
          } while (uVar7 < 5);
          if (uVar7 < 5) {
            *(undefined4 *)((uVar7 + 3) * 4 + param_1) = uVar9;
            *(short *)(param_3 + 4) = (short)uVar7;
          }
          else {
            uVar8 = 0xffffffff8000ffff;
          }
          goto LAB_82eec1e0;
        }
      }
      else {
        iVar5 = fn_82F6ADA8(0xffffffff8216006c,*(undefined4 *)(param_3 + 0x18));
        if (iVar5 == 0) {
          iVar5 = fn_82F3E930(piVar4);
          if (iVar5 == 0) {
            uVar8 = fn_82F3FBF0(piVar4,*(undefined4 *)(param_3 + 0x48));
            uVar9 = 1;
            goto LAB_82eec2f8;
          }
        }
        else {
          iVar5 = fn_82F6ADA8(0xffffffff821600a4,*(undefined4 *)(param_3 + 0x18));
          if (iVar5 == 0) {
            iVar5 = fn_82BF8B08(piVar4);
            if (iVar5 == 0) {
              uVar8 = fn_82F3FCD0(piVar4,*(undefined4 *)(param_3 + 0x48));
              uVar9 = 2;
              goto LAB_82eec2f8;
            }
          }
          else {
            iVar5 = fn_82F6ADA8(0xffffffff8216007c,*(undefined4 *)(param_3 + 0x18));
            if (iVar5 == 0) {
              iVar5 = fn_823AAD80(piVar4);
              if (iVar5 == 0) {
                uVar8 = fn_82F3FDB0(piVar4,*(undefined4 *)(param_3 + 0x48));
                uVar9 = 3;
                goto LAB_82eec2f8;
              }
            }
            else {
              iVar5 = fn_82F6ADA8(0xffffffff82160094,*(undefined4 *)(param_3 + 0x18));
              if (iVar5 != 0) goto LAB_82eec304;
              iVar5 = fn_82F3E928(piVar4);
              if (iVar5 == 0) {
                uVar8 = fn_82F3FE90(piVar4,*(undefined4 *)(param_3 + 0x48));
                uVar9 = 4;
                goto LAB_82eec2f8;
              }
            }
          }
        }
      }
      *(undefined4 *)(param_3 + 0x54) = 1;
    }
  }
LAB_82eec1dc:
  uVar8 = 1;
LAB_82eec1e0:
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  return uVar8;
}

