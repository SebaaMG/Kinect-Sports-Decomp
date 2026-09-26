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
extern unsigned int *auStack_50;
extern int fn_82230040();
extern int fn_822B1A68();
extern int fn_82359C18();
extern int fn_82383300();
extern int fn_8265C9E0();
extern unsigned int iStack_58;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B904C;
extern unsigned int uStack_54;
extern unsigned int uStack_60;
extern unsigned int uStack_64;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8242D5A8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined **ppuStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined4 *puStack_40;
  
  uVar2 = (((U64)(uStack_60) >> 0) & 0xFFFFFFFF);
  iVar1 = *(int *)(param_1 + 0x174);
  if (*param_2 != 0) {
    fn_822B1A68(*(undefined4 *)(iVar1 + 0x58));
  }
  piVar5 = (int *)(*(int *)(iVar1 + 0x5c) + 0x1c4);
  uVar6 = 0;
  if (*(int *)(*(int *)(iVar1 + 0x5c) + 0x1c8) - *piVar5 >> 2 != 0) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)((*(int **)(iVar7 + *piVar5))[0x10] + 0x114);
      if (iVar4 == 1) {
        iVar4 = param_2[1];
LAB_8242d65c:
        if (iVar4 != 0) {
          (**(code **)(**(int **)(iVar7 + *piVar5) + 0x2c))();
        }
      }
      else {
        if (iVar4 == 2) {
          iVar4 = param_2[5];
          goto LAB_8242d65c;
        }
        if (iVar4 == 3) {
          iVar4 = param_2[3];
          goto LAB_8242d65c;
        }
        if (iVar4 == 4) {
          iVar4 = param_2[4];
          goto LAB_8242d65c;
        }
        if (iVar4 == 5) {
          iVar4 = param_2[2];
          goto LAB_8242d65c;
        }
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 4;
      piVar5 = (int *)(*(int *)(iVar1 + 0x5c) + 0x1c4);
    } while (uVar6 < (uint)(*(int *)(*(int *)(iVar1 + 0x5c) + 0x1c8) - *piVar5 >> 2));
  }
  piVar5 = *(int **)(param_1 + 0x84);
  uStack_60 = 0x8242d88800000000;
  iStack_58 = param_1;
  puStack_40 = (undefined4 *)fn_8265C9E0(0x18);
  if (puStack_40 != (undefined4 *)0x0) {
    *puStack_40 = &lbl_821B904C;
    puStack_40[2] = uVar2;
    puStack_40[3] = (((U64)(uStack_60) >> 32) & 0xFFFFFFFF);
    puStack_40[4] = iStack_58;
    puStack_40[5] = uStack_54;
    lVar3 = (**(code **)(*piVar5 + 0x4c))(piVar5);
    fn_82383300(lVar3 + 0x30,auStack_50);
    fn_82359C18(auStack_50);
    return;
  }
  uStack_64 = 0;
  ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_68);
}

