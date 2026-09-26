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
extern unsigned int *auStack_58;
extern unsigned int *auStack_64;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_bc;
extern int fn_827E9B80();
extern int fn_8280AD30();
extern int fn_82810328();
extern int fn_8285A808();
extern int fn_8285A830();
extern int fn_8285A980();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


undefined8 fn_82860588(int param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [88];
  
  uStack_b0 = lbl_821AAD20;
  uStack_ac = lbl_821AAD20;
  uStack_a8 = lbl_821AAD20;
  iVar2 = fn_8285A808();
  piVar3 = (int *)fn_8285A830(param_1,param_2);
  if (*(int *)(iVar2 + 0x94) == 0) {
    fn_82810328(param_4,param_3,auStack_90);
  }
  else {
    fn_8280AD30(iVar2 + 0x50,param_3,auStack_a0);
    fn_8280AD30(iVar2 + 0x10,param_4,auStack_80);
    fn_82810328(auStack_80,auStack_a0,auStack_90);
    param_3 = auStack_a0;
  }
  iVar2 = 0;
  if (*(short *)(*piVar3 + 0x34) != 0) {
    iVar6 = 0;
    dVar8 = (double)lbl_82002AE0;
    do {
      iVar1 = *(int *)(*(int *)(*piVar3 + 0x30) + iVar6);
      fn_8285A980((double)*(float *)(param_1 + 0x30),*(undefined4 *)(iVar1 + 0x14),
                        *(undefined2 *)(iVar1 + 0x18),*(undefined4 *)(param_1 + 0x2c));
      uVar5 = *(ushort *)(iVar1 + 0x18);
      iVar7 = 2;
      if (2 < uVar5) {
        do {
          fn_8285A980((double)*(float *)(param_1 + 0x30),*(undefined4 *)(iVar1 + 0x14),uVar5,
                            *(undefined4 *)(param_1 + 0x2c));
          fn_8285A980((double)*(float *)(param_1 + 0x30),*(undefined4 *)(iVar1 + 0x14),
                            *(undefined2 *)(iVar1 + 0x18),*(undefined4 *)(param_1 + 0x2c));
          iVar4 = fn_827E9B80(dVar8,param_3,auStack_90,auStack_70,auStack_64,auStack_58,
                                  &uStack_b0,auStack_bc,auStack_b8);
          if (iVar4 != 0) {
            iVar2 = *(int *)(iVar1 + 0x34);
            if (*piVar3 == iVar2) {
              iVar2 = *(int *)(iVar1 + 0x38);
            }
            *piVar3 = iVar2;
            return 1;
          }
          uVar5 = *(ushort *)(iVar1 + 0x18);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)uVar5);
      }
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar2 < (int)(uint)*(ushort *)(*piVar3 + 0x34));
  }
  return 0;
}

