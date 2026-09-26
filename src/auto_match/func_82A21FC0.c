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
extern int fn_8265C990();
extern int fn_82A1CFC8();
extern int fn_82A1E108();
extern int fn_82A1E810();
extern int fn_82A1FB60();
extern int fn_82A20BD8();
extern int fn_82BA02A8();
extern int fn_82F691F0();
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_8315D3D0;
extern unsigned int lbl_83219B8C;
extern unsigned int lbl_83219B90;
extern unsigned int lbl_83219B94;
extern unsigned int lbl_83219B98;
extern unsigned int *lbl_83219B9C;
extern unsigned int lbl_83219BBC;
extern unsigned int lbl_83219BC4;
extern unsigned int lbl_83219C38;
extern unsigned int lbl_83219C4C;
extern unsigned int lbl_83219C50;
extern unsigned int lbl_83219C58;
extern unsigned int lbl_83219C8C;
extern unsigned int *lbl_83219C90;
extern unsigned int *lbl_83219CAC;
extern unsigned int *lbl_83219CB0;
extern unsigned int lbl_83219D38;


void fn_82A21FC0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  if (lbl_83219BC4 != 0) {
    if (lbl_83219BBC == 0) goto LAB_82a22058;
    lbl_83219C58 = 0;
    lbl_83219C4C = 1;
    while (lbl_83219C50 == 0) {
      fn_82A1E810();
      fn_82A1E108(100);
    }
    lbl_83219C4C = 0;
    lbl_83219C50 = 0;
  }
  if (lbl_83219BBC != 0) {
    (**(code **)(lbl_83219B8C + 4))(lbl_83219BBC);
  }
LAB_82a22058:
  if (lbl_83219BC4 != 0) {
    (**(code **)(lbl_83219B8C + 4))();
  }
  lbl_83219BBC = 0;
  lbl_83219BC4 = 0;
  fn_82A20BD8(1);
  while (piVar4 = lbl_83219C90, piVar1 = lbl_83219B9C, uVar3 = lbl_8315D2EC,
        (int **)lbl_83219C90 != &lbl_83219C90) {
    iVar6 = *lbl_83219C90;
    piVar1 = (int *)lbl_83219C90[1];
    *piVar1 = iVar6;
    *(int **)(iVar6 + 4) = piVar1;
    fn_8265C990(piVar4,uVar3);
  }
  if (lbl_83219B9C != (int *)0x0) {
    uVar5 = 0;
    if (lbl_83219B9C[1] != 0) {
      iVar6 = 0;
      do {
        fn_8265C990(*(undefined4 *)(*piVar1 + iVar6),lbl_8315D2EC);
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar5 < (uint)piVar1[1]);
    }
    if (*piVar1 != 0) {
      fn_8265C990(*piVar1,lbl_8315D2EC);
    }
    fn_8265C990(piVar1,lbl_8315D2EC);
  }
  if (lbl_83219C38 != 0) {
    fn_8265C990(lbl_83219C38,lbl_8315D2EC);
  }
  if (lbl_83219C8C != 0) {
    fn_8265C990(lbl_83219C8C,lbl_8315D2EC);
  }
  piVar1 = lbl_83219CAC;
  if (lbl_83219CAC != (int *)0x0) {
    uVar5 = 0;
    if (lbl_83219CAC[1] != 0) {
      iVar6 = 0;
      do {
        fn_8265C990(*(undefined4 *)(iVar6 + *piVar1),lbl_8315D2EC);
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar5 < (uint)piVar1[1]);
    }
    if (*piVar1 != 0) {
      fn_8265C990(*piVar1,lbl_8315D2EC);
    }
    fn_8265C990(lbl_83219CAC,lbl_8315D2EC);
  }
  piVar1 = lbl_83219CB0;
  iVar6 = lbl_83219B90;
  if (lbl_83219CB0 != (int *)0x0) {
    uVar5 = 0;
    if (lbl_83219CB0[1] != 0) {
      iVar6 = 0;
      do {
        fn_8265C990(*(undefined4 *)(iVar6 + *piVar1),lbl_8315D2EC);
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar5 < (uint)piVar1[1]);
    }
    if (*piVar1 != 0) {
      fn_8265C990(*piVar1,lbl_8315D2EC);
    }
    fn_8265C990(lbl_83219CB0,lbl_8315D2EC);
    iVar6 = lbl_83219B90;
  }
  while (uVar3 = lbl_8315D2EC, *(int *)(iVar6 + 0xc) != 0) {
    puVar2 = *(undefined4 **)(iVar6 + 0xc);
    *(undefined4 *)(iVar6 + 0xc) = *puVar2;
    fn_8265C990(puVar2,uVar3);
  }
  fn_82A1FB60(lbl_83219B94);
  iVar6 = lbl_83219B98;
  if (lbl_83219B98 != 0) {
    fn_82A1CFC8();
    fn_8265C990(iVar6,lbl_8315D2EC);
  }
  lbl_8315D3D0 = *(undefined **)lbl_8315D3D0;
  lbl_83219D38 = fn_82BA02A8;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(0xffffffff83219b90,0,0x148);
}

