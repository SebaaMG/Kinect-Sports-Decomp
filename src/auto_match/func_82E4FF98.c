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
extern int fn_82E4FE40();
extern int fn_82E4FE80();
extern int fn_82EE00A8();
extern int fn_83143A60();


undefined8 fn_82E4FF98(ushort *param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = 0;
  if (param_1 == (ushort *)0x0) {
    return 0;
  }
  uVar2 = *param_1;
  if (0x48 < uVar2) {
    if (uVar2 < 0x1016) {
      if (uVar2 < 0x1010) {
        if (uVar2 < 0x1009) {
          if (uVar2 == 0x1008) {
            if ((*(int *)(param_1 + 6) != 0) && (uVar6 = 0, *(int *)(param_1 + 4) != 0)) {
              iVar7 = 0;
              do {
                if (*(int *)(*(int *)(param_1 + 6) + iVar7) != 0) {
                  fn_82EE00A8(*(int *)(*(int *)(param_1 + 6) + iVar7));
                }
                uVar6 = uVar6 + 1;
                iVar7 = iVar7 + 4;
              } while (uVar6 < *(uint *)(param_1 + 4));
            }
          }
          else {
            if (uVar2 == 0x49) {
              iVar7 = *(int *)(param_1 + 4);
              if (iVar7 == 0) goto LAB_82e50038;
              iVar3 = *(int *)(iVar7 + 0x10);
              if (iVar3 != 0) {
                if (param_2 != 0) goto LAB_82e500b8;
                (**(code **)(**(int **)(iVar7 + 0x10) + 8))();
              }
              goto LAB_82e500bc;
            }
            if (uVar2 == 0xfff) goto LAB_82e50138;
            if ((uVar2 < 0x1002) || (0x1007 < uVar2)) goto LAB_82e50014;
          }
        }
        else {
          if (uVar2 < 0x100a) {
LAB_82e50014:
            uVar5 = fn_83143A60(param_1);
            if ((int)uVar5 == -0x7ffdfff8) {
              uVar5 = 0xffffffff80030057;
            }
            goto LAB_82e50038;
          }
          if (0x100b < uVar2) {
            if (uVar2 != 0x100c) goto LAB_82e50014;
            if (*(int *)(param_1 + 6) != 0) {
              uVar5 = fn_82E4FE80(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 6),0);
            }
          }
        }
      }
    }
    else {
      if (uVar2 < 0x101e) goto LAB_82e50014;
      if (uVar2 < 0x1020) {
        if ((*(int *)(param_1 + 6) != 0) && (uVar6 = 0, *(int *)(param_1 + 4) != 0)) {
          iVar7 = 0;
          do {
            fn_82E4FE40(*(undefined4 *)(*(int *)(param_1 + 6) + iVar7));
            uVar6 = uVar6 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar6 < *(uint *)(param_1 + 4));
        }
      }
      else if (uVar2 != 0x1040) {
        if (uVar2 == 0x1047) {
          if ((*(int *)(param_1 + 6) != 0) && (uVar6 = 0, *(int *)(param_1 + 4) != 0)) {
            iVar7 = 0;
            do {
              fn_82E4FE40(*(undefined4 *)(*(int *)(param_1 + 6) + iVar7 + 8));
              uVar6 = uVar6 + 1;
              iVar7 = iVar7 + 0xc;
            } while (uVar6 < *(uint *)(param_1 + 4));
          }
        }
        else if (uVar2 != 0x1048) {
          if (uVar2 != 0x1fff) {
            bVar1 = uVar2 == 0xffff;
            goto LAB_82e50244;
          }
          if ((*(int *)(param_1 + 6) != 0) && (uVar6 = 0, *(int *)(param_1 + 4) != 0)) {
            iVar7 = 0;
            do {
              if (*(int *)(*(int *)(param_1 + 6) + iVar7 + 4) != 0) {
                fn_82E4FE40();
              }
              uVar6 = uVar6 + 1;
              iVar7 = iVar7 + 8;
            } while (uVar6 < *(uint *)(param_1 + 4));
          }
        }
      }
    }
    piVar4 = *(int **)(param_1 + 6);
    goto LAB_82e50144;
  }
  if (uVar2 == 0x48) {
LAB_82e500f0:
    piVar4 = *(int **)(param_1 + 4);
LAB_82e5013c:
    if (piVar4 == (int *)0x0) goto LAB_82e50038;
  }
  else {
    if (uVar2 < 0x42) {
      if (uVar2 != 0x41) {
        if (uVar2 < 0x16) {
          if ((0xf < uVar2) || (uVar2 < 8)) goto LAB_82e50038;
          if (uVar2 == 8) {
            if (*(int *)(param_1 + 4) != 0) {
              fn_82EE00A8();
            }
            goto LAB_82e50038;
          }
          if ((9 < uVar2) && (uVar2 < 0xc)) goto LAB_82e50038;
        }
        else if (0x1d < uVar2) {
          if (uVar2 < 0x20) goto LAB_82e500f0;
          bVar1 = uVar2 == 0x40;
LAB_82e50244:
          if (bVar1) goto LAB_82e50038;
        }
        goto LAB_82e50014;
      }
LAB_82e50138:
      piVar4 = *(int **)(param_1 + 6);
      goto LAB_82e5013c;
    }
    if ((((uVar2 == 0x42) || (uVar2 == 0x43)) || (uVar2 == 0x44)) || (uVar2 == 0x45)) {
      piVar4 = *(int **)(param_1 + 4);
      if (piVar4 == (int *)0x0) goto LAB_82e50038;
      if (param_2 == 0) {
        (**(code **)(*piVar4 + 8))();
        goto LAB_82e50038;
      }
    }
    else {
      if (uVar2 == 0x46) goto LAB_82e50138;
      if (uVar2 != 0x47) goto LAB_82e50014;
      if (*(int *)(param_1 + 4) == 0) goto LAB_82e50038;
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 8);
LAB_82e500b8:
      fn_82E4FE40(iVar3);
LAB_82e500bc:
      piVar4 = *(int **)(param_1 + 4);
    }
  }
LAB_82e50144:
  fn_82E4FE40(piVar4);
LAB_82e50038:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return uVar5;
}

