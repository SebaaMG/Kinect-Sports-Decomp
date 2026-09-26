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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82904370();
extern unsigned int uStack_64;


longlong fn_82907868(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uStack_64;
  int aiStack_60 [24];
  
  lVar4 = fn_8265C940(param_4 * 0xc,0x24810000);
  if (lVar4 == 0) {
    lVar8 = -0x7ff8fff2;
  }
  else {
    puVar5 = &uStack_64;
    lVar9 = 3;
    lVar8 = lVar4;
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = (int)lVar8;
      lVar8 = (param_4 & 0x3fffffff) * 4 + lVar8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    if ((param_4 & 0xffffffff) != 0) {
      puVar5 = (undefined4 *)(aiStack_60[0] + -4);
      uVar10 = param_4;
      do {
        puVar5 = puVar5 + 1;
        *puVar5 = *(undefined4 *)(param_1 + 0x2c);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if ((param_4 & 0xffffffff) != 0) {
      puVar5 = (undefined4 *)(aiStack_60[1] + -4);
      uVar10 = param_4;
      uVar3 = param_4 & 0xffffffff;
      while (uVar3 != 0) {
        puVar5 = puVar5 + 1;
        *puVar5 = 0xffffffff;
        uVar10 = uVar10 - 1;
        uVar3 = uVar10;
      }
    }
    if ((param_4 & 0xffffffff) != 0) {
      puVar5 = (undefined4 *)(aiStack_60[2] + -4);
      uVar10 = param_4;
      uVar3 = param_4 & 0xffffffff;
      while (uVar3 != 0) {
        puVar5 = puVar5 + 1;
        *puVar5 = 0xffffffff;
        uVar10 = uVar10 - 1;
        uVar3 = uVar10;
      }
    }
    lVar8 = fn_82904370(param_1,param_2,param_4 & 0xfffff | 0x20500000,aiStack_60[1],param_3,
                          aiStack_60[0],0);
    if ((-1 < lVar8) &&
       (lVar8 = fn_82904370(param_1,param_2,param_4 & 0xfffff | 0x11000000,aiStack_60[2],
                              aiStack_60[1],0,0), -1 < lVar8)) {
      iVar7 = 0;
      if ((param_4 & 0xffffffff) != 0) {
        piVar6 = (int *)(aiStack_60[2] + -4);
        do {
          piVar6 = piVar6 + 1;
          iVar2 = *(int *)(*piVar6 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(*(int *)(param_1 + 8) + 0xa8);
          uVar1 = *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(param_1 + 8) + 0xa8) * 4 +
                            *(int *)(*(int *)(param_1 + 8) + 0x10)) + 8);
          *(int *)(iVar2 + 0x10) = iVar7;
          iVar7 = iVar7 + 1;
          *(undefined4 *)(iVar2 + 0xc) = uVar1;
          param_4 = param_4 - 1;
        } while (param_4 != 0);
      }
      lVar8 = 0;
      iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0xa8) * 4 +
                      *(int *)(*(int *)(param_1 + 8) + 0x10));
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
  }
  fn_8265C990(lVar4,0x24810000);
  return lVar8;
}

