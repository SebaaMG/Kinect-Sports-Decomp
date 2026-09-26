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
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BA0540();
extern int fn_82BA0FD8();
extern int fn_82BBFDD0();
extern int fn_82BBFFC8();
extern int fn_82BC0088();
extern int fn_82BC55C8();
extern int fn_82BC5628();
extern unsigned int lbl_820E3A58;
extern unsigned int lbl_83171CC0;
extern unsigned int lbl_83171CF4;


void fn_82BA3760(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar6;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  iVar2 = lbl_83171CC0;
  if (*(char *)(param_1 + 0x860) != '\0') {
    iVar2 = lbl_83171CF4;
  }
  iVar2 = (**(code **)(&lbl_820E3A58 + iVar2 * 8))(0x90,*(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 100) = iVar2;
  *(undefined4 *)(iVar2 + 0x50) = 0x2d;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x60) + 4);
  if (iVar2 != 0) {
    iVar2 = iVar2 + -1;
  }
  *(int *)(*(int *)(param_1 + 100) + 0xa8) = iVar2;
  iVar2 = *(int *)(param_1 + 0xa8);
  *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) | 8;
  iVar5 = *(int *)(iVar2 + 0x54);
  if (*(int *)(iVar2 + 0x54) != 0) {
    do {
      iVar9 = iVar5;
      *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) | 8;
      uVar11 = *(uint *)(iVar9 + 0x84);
      iVar5 = iVar9;
      if ((((uVar11 >> 1 & 1) != 0) || ((uVar11 & 1) != 0)) || ((uVar11 >> 2 & 1) != 0)) break;
      iVar5 = *(int *)(iVar9 + 0x54);
      iVar2 = iVar9;
    } while (iVar5 != 0);
    if ((iVar5 != 0) && (*(int *)(*(int *)(iVar2 + 0x3c) + 4) == 1)) {
      *(uint *)(iVar5 + 0x84) = *(uint *)(iVar5 + 0x84) | 8;
      fn_82BA0FD8(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x560),
                    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
      for (piVar4 = *(int **)(iVar5 + 0x24); piVar4[1] != 0; piVar4 = (int *)piVar4[1]) {
        cVar6 = (**(code **)(*piVar4 + 0x18))(piVar4);
        if ((cVar6 != '\0') || (((uint)piVar4[0x39] >> 0xd & 1) != 0)) {
          iVar2 = 1;
          piVar4[0x39] = piVar4[0x39] | 0x2000;
          if (0 < piVar4[5]) {
            piVar7 = piVar4 + 0x3a;
            do {
              piVar7 = piVar7 + 1;
              iVar2 = iVar2 + 1;
              *(uint *)(*piVar7 + 0xe4) = *(uint *)(*piVar7 + 0xe4) | 0x2000;
            } while (iVar2 <= piVar4[5]);
          }
        }
      }
      piVar4 = *(int **)(iVar5 + 0x1c);
      piVar7 = *(int **)(iVar5 + 0x70);
      while ((piVar4[2] != 0 &&
             (((piVar8 = piVar7, (piVar4[0x39] & 1U) == 0 ||
               (iVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4), piVar8 = piVar4, iVar2 != 0)) ||
              (cVar6 = (**(code **)(*piVar4 + 0x24))(piVar4), cVar6 != '\0'))))) {
        piVar4 = (int *)piVar4[2];
        piVar7 = piVar8;
      }
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
      puVar3 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
      puVar10 = puVar3 + 1;
      *puVar3 = uVar1;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        fn_82BA03B8(puVar10,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
      }
      for (iVar2 = *(int *)(iVar5 + 0x24); *(int *)(iVar2 + 4) != 0; iVar2 = *(int *)(iVar2 + 4)) {
        piVar4 = (int *)fn_82BC0088(puVar10,puVar10[1]);
        *piVar4 = iVar2;
      }
      piVar4 = (int *)0x0;
      if (puVar10[1] == 0) {
LAB_82ba3a1c:
        piVar4 = piVar7;
      }
      else {
        do {
          piVar8 = *(int **)puVar10[2];
          fn_82BBFFC8(puVar10,0);
          if (((uint)piVar8[0x39] >> 0xd & 1) != 0) {
            if (piVar4 == (int *)0x0) {
              piVar4 = piVar8;
            }
            fn_82BBFDD0(piVar8);
            fn_82BC55C8(iVar5,piVar7,piVar8);
          }
        } while (puVar10[1] != 0);
        if (piVar4 == (int *)0x0) goto LAB_82ba3a1c;
      }
      fn_82BC55C8(iVar5,piVar4,*(undefined4 *)(param_1 + 100));
      iVar2 = iVar5;
      goto LAB_82ba3aa0;
    }
  }
  for (piVar4 = *(int **)(iVar2 + 0x1c); piVar4[2] != 0; piVar4 = (int *)piVar4[2]) {
    if ((((piVar4[0x39] & 1U) != 0) && (iVar5 = (**(code **)(*piVar4 + 0x2c))(piVar4), iVar5 == 0))
       && (cVar6 = (**(code **)(*piVar4 + 0x24))(piVar4), cVar6 == '\0')) {
      fn_82BC5628(iVar2,piVar4,*(undefined4 *)(param_1 + 100));
      break;
    }
  }
LAB_82ba3aa0:
  *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) | 8;
  if (*(int *)(param_1 + 0x68) != 0) {
    fn_82BA0540(*(undefined4 *)(param_1 + 100));
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar3 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar10 = puVar3 + 1;
  *puVar3 = uVar1;
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar10,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  }
  iVar5 = 0;
  for (uVar11 = 1; uVar11 <= *(uint *)(*(int *)(iVar2 + 0x58) + 4); uVar11 = uVar11 + 1) {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x58) + 8) + iVar5);
    puVar3 = (undefined4 *)fn_82BC0088(puVar10,puVar10[1]);
    iVar5 = iVar5 + 4;
    *puVar3 = uVar1;
  }
  while (puVar10[1] != 0) {
    iVar2 = *(int *)puVar10[2];
    fn_82BBFFC8(puVar10,0);
    iVar5 = 0;
    *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) | 8;
    for (uVar11 = 1; uVar11 <= *(uint *)(*(int *)(iVar2 + 0x58) + 4); uVar11 = uVar11 + 1) {
      uVar1 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x58) + 8) + iVar5);
      puVar3 = (undefined4 *)fn_82BC0088(puVar10,puVar10[1]);
      iVar5 = iVar5 + 4;
      *puVar3 = uVar1;
    }
  }
  return;
}

