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
extern unsigned int *auStack_270;
extern unsigned int *auStack_274;
extern int fn_8281B838();
extern int fn_828222B8();
extern int fn_828222C8();
extern int fn_82822608();
extern int fn_82822650();
extern int fn_828226F0();
extern int fn_82822728();
extern int fn_82822778();
extern int fn_82822798();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_8201EAB4;
extern unsigned int lbl_8320A754;
extern unsigned int lbl_8320A758;
extern unsigned int lbl_8320A764;
extern unsigned int stack0x00000000;
extern unsigned int uStack_278;
extern unsigned int uStack_27d;
extern unsigned int uStack_27e;
extern unsigned int uStack_27f;
extern unsigned int uStack_280;


ulonglong fn_8281BC98(int param_1,ulonglong param_2)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar6;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 uStack_280;
  undefined1 uStack_27f;
  undefined1 uStack_27e;
  undefined1 uStack_27d;
  undefined *puStack_27c;
  undefined4 uStack_278;
  undefined1 auStack_274 [4];
  undefined1 auStack_270 [16];
  int aiStack_260 [63];
  char cStack_161;
  char acStack_160 [352];
  
  iVar7 = 0;
  if ((*(uint *)(param_1 + 0xc) & 8) != 0) {
    fn_828226F0(&stack0x00000000 + -0x160,0x101);
  }
  if ((*(uint *)(param_1 + 0xc) & 0x80) != 0) {
    lbl_8320A764 = lbl_8320A764 + 1;
    fn_82822728(&stack0x00000000 + -0x260,0x40);
  }
  lbl_8320A764 = 0;
  if ((*(uint *)(param_1 + 0xc) & 0x100) == 0) {
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar6 = fn_82822778();
    uVar4 = fn_82822798();
  }
  fn_82822608(&stack0x00000000 + -0x27e,&stack0x00000000 + -0x280,&stack0x00000000 + -0x27f,
                  &stack0x00000000 + -0x27d);
  fn_82822650(&stack0x00000000 + -0x27c,&stack0x00000000 + -0x278);
  uVar14 = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  uVar15 = param_2;
  if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
    uVar14 = *(uint *)(param_1 + 0x78);
    uVar15 = ((ulonglong)uVar14 & 0x7fffffff) * 2 + param_2;
  }
  uVar5 = (*(code *)**(undefined4 **)(param_1 + 0x10))(param_1,uVar15,uVar14);
  if (uVar5 == 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    goto LAB_8281c098;
  }
  uVar14 = (uint)param_2;
  if (*(int *)(param_1 + 0x4c) == 0) {
    pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x14);
    if (pcVar3 != (code *)0x0) goto LAB_8281bf3c;
  }
  else {
    iVar8 = 0;
    piVar9 = (int *)(&stack0x00000000 + -0x260);
    uVar13 = 0;
    do {
      uVar10 = uVar13;
      uVar13 = uVar10 + 4;
      if (*piVar9 == 0) break;
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar8 < 0x40);
    uVar13 = -(uint)(uVar10 != 0) & uVar13;
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 0) {
      pcVar11 = &stack0x00000000 + -0x160;
      pcVar12 = pcVar11;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      lbl_8320A764 = lbl_8320A764 + 1;
      pcVar12 = pcVar12 + (uVar13 - (int)pcVar11) + 0x34;
      if (pcVar12 == (char *)0x0) {
        pcVar12 = (char *)0x1;
      }
      iVar7 = fn_8281BC98(*(int *)(param_1 + 0x4c),pcVar12);
      if (iVar7 != 0) {
        iVar8 = iVar7 + 0x34;
        *(undefined1 *)(iVar7 + 0x10) = uStack_27e;
        *(undefined1 *)(iVar7 + 0x11) = uStack_280;
        *(undefined1 *)(iVar7 + 0x12) = uStack_27f;
        *(undefined1 *)(iVar7 + 0x13) = uStack_27d;
        if (puStack_27c == (undefined *)0x0) {
          puStack_27c = &lbl_8201EAB4;
        }
        *(undefined **)(iVar7 + 0x1c) = puStack_27c;
        *(undefined4 *)(iVar7 + 0x20) = uStack_278;
        *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(param_1 + 0x5c);
        uVar2 = *(undefined4 *)(param_1 + 0x60);
        *(undefined4 *)(iVar7 + 0xc) = uVar6;
        *(uint *)(iVar7 + 0x30) = uVar14;
        *(undefined4 *)(iVar7 + 0x18) = uVar2;
        if (uVar13 == 0) {
          *(undefined4 *)(iVar7 + 0x28) = 0;
        }
        else {
          *(int *)(iVar7 + 0x28) = iVar8;
          fn_82F68CC0(iVar8,&stack0x00000000 + -0x260,uVar13);
          iVar8 = iVar8 + uVar13;
        }
        pcVar12 = &stack0x00000000 + -0x161;
        *(int *)(iVar7 + 0x24) = iVar8;
        pcVar11 = (char *)(iVar8 + -1);
        do {
          pcVar12 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar11 = pcVar11 + 1;
          *pcVar11 = cVar1;
        } while (cVar1 != '\0');
        fn_828222B8(iVar7);
        if ((uVar4 & 0xffffffff) == 0) {
          *(undefined1 *)(iVar7 + 8) = 0;
        }
        else {
          fn_828222C8(uVar4,iVar7);
          *(undefined1 *)(iVar7 + 8) = 1;
        }
      }
      pcVar3 = *(code **)(*(int *)(param_1 + 0x10) + 0x14);
LAB_8281bf3c:
      (*pcVar3)(param_1,uVar5,iVar7);
    }
  }
  if (((*(uint *)(param_1 + 0xc) & 2) != 0) && ((*(uint *)(param_1 + 0xc) & 0x20) != 0)) {
    fn_8281B838(uVar5,uVar15,0xee,&stack0x00000000 + -0x274,&stack0x00000000 + -0x270);
  }
  if (iVar7 != 0) {
    *(uint *)(iVar7 + 0x2c) = (uint)uVar5;
  }
  if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar5,0xbb,*(undefined4 *)(param_1 + 0x78));
  }
  if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar5,0xcc,param_2);
  }
  uVar13 = *(uint *)(param_1 + 0x50);
  if ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x50)) {
    uVar13 = (uint)uVar5;
  }
  *(uint *)(param_1 + 0x50) = uVar13;
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x54);
  if ((ulonglong)*(uint *)(param_1 + 0x54) < (uVar5 & 0xffffffff)) {
    uVar4 = uVar5;
  }
  *(int *)(param_1 + 0x54) = (int)uVar4;
  iVar7 = *(int *)(param_1 + 0x34) - uVar14;
  *(int *)(param_1 + 0x34) = iVar7;
  *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + uVar14;
  if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x78) * 2;
    *(int *)(param_1 + 0x34) = iVar7 + *(int *)(param_1 + 0x78) * -2;
  }
  uVar13 = *(int *)(param_1 + 0x3c) + 1;
  *(uint *)(param_1 + 0x3c) = uVar13;
  if (uVar13 <= *(uint *)(param_1 + 0x40)) {
    uVar13 = *(uint *)(param_1 + 0x40);
  }
  *(uint *)(param_1 + 0x40) = uVar13;
  uVar13 = *(uint *)(param_1 + 0x44);
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x44)) {
    uVar13 = uVar14;
  }
  *(uint *)(param_1 + 0x44) = uVar13;
  uVar13 = *(uint *)(param_1 + 0x48);
  if ((ulonglong)*(uint *)(param_1 + 0x48) < (param_2 & 0xffffffff)) {
    uVar13 = uVar14;
  }
  *(uint *)(param_1 + 0x48) = uVar13;
LAB_8281c098:
  if ((uVar5 & 0xffffffff) == 0) {
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      uVar5 = (**(code **)(param_1 + 0x18))(param_1,param_2);
    }
  }
  else if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    uVar5 = (**(code **)(param_1 + 0x14))(param_1,uVar5,param_2);
  }
  lbl_8320A754 = 0;
  lbl_8320A758 = 0;
  return uVar5;
}

