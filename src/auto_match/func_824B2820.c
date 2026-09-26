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
extern int fn_824B2B80();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;
extern unsigned int uStack_44;


void fn_824B2820(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint auStack_50 [2];
  uint *puStack_48;
  uint uStack_44;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  auStack_50[1] = 200;
  if ((int)(param_1[1] - *param_1) / 0x50 != 200) {
    uVar1 = fn_8265C9E0(16000);
    if (uVar1 == 0) {
      uStack_3c = 0;
      ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_40);
    }
    auStack_50[0] = param_1[4];
    uVar6 = 0;
    if (auStack_50[0] != 0) {
      uVar6 = param_1[2];
    }
    puVar5 = auStack_50;
    if (199 < auStack_50[0]) {
      puVar5 = auStack_50 + 1;
    }
    uVar4 = *puVar5;
    uVar7 = uVar1;
    puStack_48 = param_1;
    if ((int)uVar4 < 1) {
      uStack_44 = uVar6;
      if ((int)uVar4 < 0) {
        fn_824B2B80(&puStack_48,-uVar4);
      }
    }
    else {
      if ((int)(param_1[1] - uVar6) / 0x50 <= (int)uVar4) {
        uVar4 = uVar4 - (int)(param_1[1] - *param_1) / 0x50;
      }
      uStack_44 = uVar4 * 0x50 + uVar6;
      if (uStack_44 == param_1[3]) {
        uStack_44 = 0;
      }
    }
    for (; uVar6 != uStack_44; uVar6 = -(uint)(param_1[3] != uVar6) & uVar6) {
      if (uVar7 != 0) {
        puVar3 = (undefined8 *)(uVar6 - 8);
        puVar2 = (undefined8 *)(uVar7 - 8);
        lVar8 = 10;
        do {
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
          *puVar2 = *puVar3;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      uVar6 = uVar6 + 0x50;
      if (uVar6 == param_1[1]) {
        uVar6 = *param_1;
      }
      uVar7 = uVar7 + 0x50;
    }
    uVar6 = 0;
    if (param_1[4] != 0) {
      do {
        uVar4 = param_1[2];
        uVar6 = uVar6 + 1;
        param_1[2] = uVar4 + 0x50;
        if (uVar4 + 0x50 == param_1[1]) {
          param_1[2] = *param_1;
        }
      } while (uVar6 < param_1[4]);
    }
    if (*param_1 != 0) {
      fn_8265CA20();
    }
    *param_1 = uVar1;
    param_1[2] = uVar1;
    param_1[1] = uVar1 + 16000;
    param_1[4] = (int)(uVar7 - uVar1) / 0x50;
    if (uVar7 == uVar1 + 16000) {
      uVar7 = uVar1;
    }
    param_1[3] = uVar7;
  }
  return;
}

