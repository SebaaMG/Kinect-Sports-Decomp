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


void fn_82455578(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  int aiStack_40 [2];
  int iStack_38;
  int iStack_34;
  float fStack_30;
  
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x88) == 0) {
      fn_82458910(&iStack_38,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_2 + 0x2c));
      dVar9 = (double)*(float *)(param_1 + 0x74);
      if (*(int *)(iStack_38 + 8) != *(int *)(iStack_38 + 0xc)) {
        piVar5 = &iStack_34;
        piVar6 = (int *)(*(int *)(iStack_38 + 0xc) + -0x18);
        lVar7 = 5;
        do {
          piVar6 = piVar6 + 1;
          piVar5 = piVar5 + 1;
          *piVar5 = *piVar6;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        dVar8 = (double)(*(float *)(iStack_38 + 4) - fStack_30);
        if (dVar8 < dVar9) {
          dVar9 = dVar8;
        }
      }
      fn_82458458(dVar9,aiStack_40,iStack_38);
      if (*(uint *)(param_1 + 0x70) < (uint)((*(int *)(iStack_38 + 0x1c) - aiStack_40[0]) / 0x14)) {
        fn_824556F0(param_1,param_1 + 0x18);
        if (*(int *)(*(int *)(param_1 + 0x7c) + 0x100) <= *(int *)(param_1 + 0x50)) {
          fn_8254EDB0((double)*(float *)(param_1 + 0x60),(double)*(float *)(param_1 + 100));
          iVar4 = *(int *)(param_1 + 0x7c);
          uVar1 = *(undefined4 *)(param_1 + 0x6c);
          uVar2 = *(undefined4 *)(param_1 + 0x5c);
          uVar3 = *(undefined4 *)(param_1 + 0x58);
          if (*(int *)(iVar4 + 4) != 0) {
            *(undefined4 *)(iVar4 + 0x1cc) = *(undefined4 *)(param_1 + 0x54);
            *(undefined4 *)(iVar4 + 0x1dc) = uVar1;
            *(undefined4 *)(iVar4 + 0x1d4) = 1;
            *(undefined4 *)(iVar4 + 0x1d0) = uVar3;
            *(undefined4 *)(iVar4 + 0x1d8) = uVar2;
            *(undefined4 *)(iVar4 + 0x1e0) = lbl_821CA460;
          }
        }
        *(undefined4 *)(param_1 + 0x88) = 1;
        *(undefined4 *)(param_1 + 0x8c) = lbl_821CC160;
      }
      if (iStack_34 != 0) {
        fn_822315A0();
      }
    }
  }
  else {
    fn_824556F0(param_1,param_1 + 0x14);
  }
  return;
}

