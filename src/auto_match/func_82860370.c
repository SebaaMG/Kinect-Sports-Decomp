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
extern unsigned int *auStack_68;
extern unsigned int *auStack_74;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_cc;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_827E9B80();
extern int fn_8280AD30();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_8285A808();
extern int fn_8285A830();
extern int fn_8285A980();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


undefined8
fn_82860370(int param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [16];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [104];
  
  dVar10 = (double)lbl_821AAD20;
  fStack_b0 = lbl_821AAD20;
  fStack_ac = lbl_821AAD20;
  fStack_a8 = lbl_821AAD20;
  iVar2 = fn_8285A808();
  piVar3 = (int *)fn_8285A830(param_1,param_2);
  if (*(int *)(iVar2 + 0x94) == 0) {
    fn_82810328(param_4,param_3,auStack_c0);
  }
  else {
    fn_8280AD30(iVar2 + 0x50,param_3,auStack_a0);
    fn_8280AD30(iVar2 + 0x10,param_4,auStack_90);
    fn_82810328(auStack_90,auStack_a0,auStack_c0);
    param_3 = auStack_a0;
  }
  iVar2 = 0;
  if (*(short *)(*piVar3 + 0x34) != 0) {
    iVar7 = 0;
    dVar9 = (double)lbl_82002AE0;
    do {
      iVar1 = *(int *)(*(int *)(*piVar3 + 0x30) + iVar7);
      if ((param_5 == 0) ||
         ((param_5 != *(int *)(iVar1 + 0x34) && (param_5 != *(int *)(iVar1 + 0x38))))) {
        iVar5 = iVar1 + 0x1c;
        if (*piVar3 != *(int *)(iVar1 + 0x34)) {
          iVar5 = iVar1 + 0x28;
        }
        dVar8 = (double)fn_82810280(auStack_c0,iVar5);
        if (dVar8 < dVar10) {
          fn_8285A980((double)*(float *)(param_1 + 0x30),*(undefined4 *)(iVar1 + 0x14),
                            *(undefined2 *)(iVar1 + 0x18),*(undefined4 *)(param_1 + 0x2c));
          uVar6 = *(ushort *)(iVar1 + 0x18);
          iVar5 = 2;
          if (2 < uVar6) {
            do {
              fn_8285A980((double)*(float *)(param_1 + 0x30),*(undefined4 *)(iVar1 + 0x14),
                                uVar6,*(undefined4 *)(param_1 + 0x2c));
              fn_8285A980((double)*(float *)(param_1 + 0x30),*(undefined4 *)(iVar1 + 0x14),
                                *(undefined2 *)(iVar1 + 0x18),*(undefined4 *)(param_1 + 0x2c));
              iVar4 = fn_827E9B80(dVar9,param_3,auStack_c0,auStack_80,auStack_74,auStack_68,
                                      &fStack_b0,auStack_cc,auStack_c8);
              if (iVar4 != 0) {
                iVar2 = *(int *)(iVar1 + 0x34);
                if (*piVar3 == iVar2) {
                  iVar2 = *(int *)(iVar1 + 0x38);
                }
                *piVar3 = iVar2;
                return 1;
              }
              uVar6 = *(ushort *)(iVar1 + 0x18);
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)(uint)uVar6);
          }
        }
      }
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar2 < (int)(uint)*(ushort *)(*piVar3 + 0x34));
  }
  return 0;
}

