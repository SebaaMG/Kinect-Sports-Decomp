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
extern unsigned int *auStack_38;
extern int fn_82381BC0();
extern int fn_8240D928();
extern int fn_825089A0();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_8288DF40();
extern int fn_82897BD0();
extern int fn_828BE158();
extern int fn_828C77A8();
extern int fn_82A4AAA8();
extern unsigned int lbl_821961E4;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_8288F588(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar6;
  int iVar7;
  undefined8 uVar3;
  undefined4 *puVar8;
  ulonglong uVar4;
  undefined8 uVar5;
  double dVar9;
  int aiStack_40 [2];
  undefined1 auStack_38 [56];
  
  piVar6 = (int *)fn_825089A0();
  dVar9 = (double)(**(code **)(*piVar6 + 8))();
  iVar7 = *(int *)(param_1 + 0x50);
  if (iVar7 != 4) {
    if (iVar7 == 2) {
      if (lbl_821961E4 < (float)(dVar9 - (double)*(float *)(param_1 + 0x54))) {
        *(undefined4 *)(param_1 + 0x50) = 3;
        return 1;
      }
    }
    else {
      if (iVar7 == 3) {
        return 1;
      }
      if (lbl_821961E4 < (float)(dVar9 - (double)*(float *)(param_1 + 0x58))) {
        piVar6 = *(int **)(*(int *)(param_1 + 0x10) + 0x230);
        aiStack_40[0] = *piVar6;
        if ((int *)aiStack_40[0] != piVar6) {
          do {
            uVar1 = *(undefined4 *)(aiStack_40[0] + 0x10);
            iVar7 = fn_82A4AAA8(uVar1);
            if (iVar7 == 1) {
              uVar3 = fn_8240D928(uVar1);
              puVar8 = (undefined4 *)fn_8288DF40(auStack_38,param_1 + 0x3c,uVar3);
              if ((1 << (puVar8[1] & 0x3f) & *(uint *)*puVar8) == 0) {
                uVar4 = fn_8265C9E0(0xa8);
                if ((uVar4 & 0xffffffff) == 0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = fn_828C77A8(uVar4,param_1,uVar1,
                                            *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x38),0);
                }
                fn_82886518(uVar3,0xffffffffffffffff,0xffffffffffffffff);
                uVar2 = *(undefined4 *)(param_1 + 0x10);
                uVar5 = fn_82897BD0(uVar1);
                fn_828BE158(uVar2,uVar3,uVar5,0);
              }
            }
            fn_82381BC0(aiStack_40);
          } while (aiStack_40[0] != *(int *)(*(int *)(param_1 + 0x10) + 0x230));
        }
        *(undefined4 *)(param_1 + 0x58) = lbl_821AAD20;
        return 1;
      }
    }
  }
  return 0;
}

