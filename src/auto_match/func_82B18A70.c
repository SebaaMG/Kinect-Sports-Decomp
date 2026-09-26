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
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AD2020();
extern int fn_82B8D5B0();


void fn_82B18A70(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  
  do {
    for (uVar6 = *(uint *)(param_1 + 4); ((uVar6 & 1) == 0 && (uVar6 != 0));
        uVar6 = *(uint *)((uVar6 & 0xfffffffe) + 4)) {
      if (*(int *)(uVar6 + 0x2c) != param_2) {
        if ((*(uint *)(uVar6 + 0x14) & 1) == 0) {
          uVar5 = *(uint *)(uVar6 + 0x14);
          iVar2 = uVar6 + 0x10;
        }
        else if ((*(uint *)(uVar6 + 0x1c) & 1) == 0) {
          uVar5 = *(uint *)(uVar6 + 0x1c);
          iVar2 = uVar6 + 0x18;
        }
        else {
          uVar5 = *(uint *)(uVar6 + 0x24);
          iVar2 = uVar6 + 0x20;
        }
        uVar5 = -(uint)((uVar5 & 1) == 0) & uVar5;
        while (uVar5 != 0) {
          do {
            if ((*(uint *)(uVar5 + 8) >> 0x1a & 1) != 0) {
              *(int *)(uVar6 + 0x2c) = param_2;
              goto LAB_82b18b68;
            }
            uVar5 = *(uint *)((uVar5 & 0xfffffffe) + 0x28);
          } while (((uVar5 & 1) == 0) && (uVar5 != 0));
          iVar3 = uVar6 + 0x20;
          if (iVar2 == iVar3) break;
          if ((iVar2 == uVar6 + 0x18) || ((*(uint *)(uVar6 + 0x1c) & 1) != 0)) {
            uVar5 = *(uint *)(uVar6 + 0x24);
          }
          else {
            uVar5 = *(uint *)(uVar6 + 0x1c);
            iVar3 = uVar6 + 0x18;
          }
          iVar2 = iVar3;
          if ((uVar5 & 1) != 0) break;
        }
      }
LAB_82b18b68:
      if (*(int *)(uVar6 + 0x2c) == param_2) {
        bVar1 = false;
        iVar2 = fn_82AD2020(param_1,uVar6);
        if (((iVar2 != 0) && ((*(uint *)(iVar2 + 8) & 0x3f80) == 0x2a00)) &&
           ((*(uint *)(iVar2 + 8) >> 0x1a & 1) != 0)) {
          bVar1 = true;
        }
        if ((*(uint *)(uVar6 + 0x30) >> 0x1a & 1) == 0) {
          uVar5 = *(uint *)(uVar6 + 0x30) >> 0x1b;
LAB_82b18bcc:
          if ((uVar5 & 1) != 0) {
            bVar1 = true;
          }
        }
        else if (iVar2 != 0) {
          uVar5 = *(uint *)(iVar2 + 8) >> 0x1a;
          goto LAB_82b18bcc;
        }
        if (bVar1) {
          for (piVar8 = *(int **)(uVar6 + 0xc); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
            if (*(int *)(*piVar8 + 0x2c) != param_2) {
              *(int *)(*piVar8 + 0x2c) = param_2;
            }
          }
          if (iVar2 != 0) {
            uVar5 = *(uint *)(iVar2 + 8);
            iVar3 = fn_82ABDD90(param_1,uVar5 >> 7 & 0x7f,uVar5 >> 0x13 & 7,uVar5 >> 0xe & 7);
            iVar2 = *(int *)(iVar3 + iVar2 + -0x10);
            if (*(int *)(iVar2 + 0x2c) != param_2) {
              *(int *)(iVar2 + 0x2c) = param_2;
            }
          }
        }
      }
    }
    for (uVar6 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)) +
                          0x14); ((uVar6 & 1) == 0 && (uVar6 != 0));
        uVar6 = *(uint *)((uVar6 & 0xfffffffe) + 0x28)) {
      if ((*(uint *)(uVar6 + 8) >> 0x1a & 1) != 0) {
        *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) & 0xfbffffff;
      }
    }
    uVar6 = *(uint *)(param_1 + 4);
    uVar5 = uVar6 & 1;
    uVar4 = -(uint)(uVar5 == 0) & uVar6;
    if ((*(uint *)((-(uint)(uVar5 == 0) & uVar6) + 0x1c) & 1) == 0) {
      uVar4 = *(uint *)(uVar4 + 0x1c);
      uVar4 = -(uint)((uVar4 & 1) == 0) & uVar4;
      iVar2 = (-(uint)(uVar5 == 0) & uVar6) + 0x18;
    }
    else {
      uVar4 = *(uint *)(uVar4 + 0x24);
      uVar4 = -(uint)((uVar4 & 1) == 0) & uVar4;
      iVar2 = (-(uint)(uVar5 == 0) & uVar6) + 0x20;
    }
    if (uVar4 != 0) {
      do {
        do {
          uVar6 = *(uint *)(uVar4 + 8);
          if ((uVar6 >> 0x1a & 1) != 0) {
            if ((uVar6 >> 6 & 1) == 0) {
              uVar5 = uVar6 >> 7 & 0x7f;
              if ((uVar5 < 0x53) || (bVar1 = true, 0x5f < uVar5)) {
                bVar1 = false;
              }
              if (!bVar1) goto LAB_82b18d6c;
            }
            *(uint *)(uVar4 + 8) = uVar6 & 0xfbffffff;
          }
LAB_82b18d6c:
          uVar4 = *(uint *)((uVar4 & 0xfffffffe) + 0x28);
        } while (((uVar4 & 1) == 0) && (uVar4 != 0));
        uVar6 = *(uint *)(param_1 + 4);
        uVar5 = uVar6 & 1;
        if (iVar2 == (-(uint)(uVar5 == 0) & uVar6) + 0x20) break;
        uVar4 = -(uint)(uVar5 == 0) & uVar6;
        iVar2 = uVar4 + 0x20;
        uVar4 = *(uint *)(uVar4 + 0x24);
        if (((uVar4 & 1) != 0) || (uVar4 == 0)) break;
      } while( true );
    }
    if ((*(uint *)(param_1 + 0x2c) & 0x800000) == 0) {
      return;
    }
    bVar1 = false;
    while ((uVar5 == 0 && (uVar6 != 0))) {
      if ((*(int *)(uVar6 + 0x2c) == param_2) &&
         (((*(int *)(uVar6 + 8) != 0 && (iVar2 = *(int *)(*(int *)(uVar6 + 8) + 4), iVar2 != 0)) &&
          ((*(uint *)(iVar2 + 0x44) & 0x40000000) != 0)))) {
        if (*(int *)(iVar2 + 0x2c) != param_2) {
          *(int *)(iVar2 + 0x2c) = param_2;
        }
        for (iVar2 = *(int *)(iVar2 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
          if (((*(uint *)(*(int *)(iVar2 + 4) + 0x1c) & 1) != 0) ||
             (piVar8 = (int *)((*(uint *)(*(int *)(iVar2 + 4) + 0x18) & 0xfffffffe) - 0x28),
             piVar8 == (int *)0x0)) {
LAB_82b18f34:
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          do {
            if ((piVar8[2] & 0x3f80U) == 0x3a80) {
              iVar3 = fn_82ABDD90(param_1,0x75,0,0);
              puVar7 = (uint *)((int)piVar8 + iVar3 + -0x10);
              if (((*puVar7 & 7) == 7) && (puVar7[1] == 2)) break;
            }
            if ((piVar8[9] & 1U) != 0) goto LAB_82b18f34;
            piVar8 = (int *)((piVar8[9] & 0xfffffffeU) - 0x28);
          } while (piVar8 != (int *)0x0);
          if (piVar8 == (int *)0x0) goto LAB_82b18f34;
          if (((uint)piVar8[2] >> 0x1a & 1) == 0) {
            iVar3 = *piVar8;
            piVar8[2] = piVar8[2] | 0x4000000;
            for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
              fn_82B8D5B0(param_1,iVar3,0);
            }
            bVar1 = true;
          }
        }
      }
      uVar6 = *(uint *)((uVar6 & 0xfffffffe) + 4);
      uVar5 = uVar6 & 1;
    }
    if (!bVar1) {
      return;
    }
  } while( true );
}

