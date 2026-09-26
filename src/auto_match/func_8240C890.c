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
extern unsigned int fStack_30;
extern int fn_822315A0();
extern int fn_824556F0();
extern int fn_82458458();
extern int fn_82458910();
extern int fn_8254EDB0();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8240C890(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  int aiStack_40 [2];
  int iStack_38;
  int iStack_34;
  float fStack_30;
  
  uVar4 = param_2[6];
  iVar8 = 0;
  if (uVar4 == 0) {
    iVar8 = 0;
  }
  else if (uVar4 == 1) {
    iVar8 = *(int *)(param_1 + 0xc);
  }
  else if (uVar4 < 3) {
    iVar8 = *(int *)(param_1 + 0x10);
  }
  else if (uVar4 == 3) {
    iVar8 = *(int *)(param_1 + 0x14);
  }
  if (param_2[4] == 8) {
    iVar8 = *(int *)(param_1 + 8);
  }
  piVar7 = (int *)(param_1 + 100);
  if (*(int *)(param_1 + 0x48) != *param_2) {
    piVar7 = (int *)(param_1 + 0x4c);
  }
  *piVar7 = iVar8 + *piVar7;
  if (*(int *)(param_1 + 0x48) == *param_2) {
    iVar8 = param_1 + 0x4c;
  }
  else {
    iVar8 = param_1 + 100;
  }
  *(int *)(iVar8 + 0x10) = param_2[5];
  iVar8 = *(int *)(param_1 + 0x2c);
  if (param_2[6] == 3) {
    fn_824556F0(iVar8,iVar8 + 0x14);
  }
  else if (*(int *)(iVar8 + 0x88) == 0) {
    fn_82458910(&iStack_38,*(undefined4 *)(iVar8 + 0x84),*(undefined4 *)(param_2[1] + 0x2c));
    dVar11 = (double)*(float *)(iVar8 + 0x74);
    if (*(int *)(iStack_38 + 8) != *(int *)(iStack_38 + 0xc)) {
      piVar6 = &iStack_34;
      piVar7 = (int *)(*(int *)(iStack_38 + 0xc) + -0x18);
      lVar9 = 5;
      do {
        piVar7 = piVar7 + 1;
        piVar6 = piVar6 + 1;
        *piVar6 = *piVar7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      dVar10 = (double)(*(float *)(iStack_38 + 4) - fStack_30);
      if (dVar10 < dVar11) {
        dVar11 = dVar10;
      }
    }
    fn_82458458(dVar11,aiStack_40,iStack_38);
    if (*(uint *)(iVar8 + 0x70) < (uint)((*(int *)(iStack_38 + 0x1c) - aiStack_40[0]) / 0x14)) {
      fn_824556F0(iVar8,iVar8 + 0x18);
      if (*(int *)(*(int *)(iVar8 + 0x7c) + 0x100) <= *(int *)(iVar8 + 0x50)) {
        fn_8254EDB0((double)*(float *)(iVar8 + 0x60),(double)*(float *)(iVar8 + 100));
        iVar5 = *(int *)(iVar8 + 0x7c);
        uVar1 = *(undefined4 *)(iVar8 + 0x6c);
        uVar2 = *(undefined4 *)(iVar8 + 0x5c);
        uVar3 = *(undefined4 *)(iVar8 + 0x58);
        if (*(int *)(iVar5 + 4) != 0) {
          *(undefined4 *)(iVar5 + 0x1cc) = *(undefined4 *)(iVar8 + 0x54);
          *(undefined4 *)(iVar5 + 0x1dc) = uVar1;
          *(undefined4 *)(iVar5 + 0x1d4) = 1;
          *(undefined4 *)(iVar5 + 0x1d0) = uVar3;
          *(undefined4 *)(iVar5 + 0x1d8) = uVar2;
          *(undefined4 *)(iVar5 + 0x1e0) = lbl_821CA460;
        }
      }
      *(undefined4 *)(iVar8 + 0x88) = 1;
      *(undefined4 *)(iVar8 + 0x8c) = lbl_821CC160;
    }
    if (iStack_34 != 0) {
      fn_822315A0();
      return;
    }
  }
  return;
}

