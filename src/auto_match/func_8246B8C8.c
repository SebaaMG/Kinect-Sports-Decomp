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
extern int fn_82230040();
extern int fn_8246BA80();
extern int fn_8246BC48();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;


int fn_8246B8C8(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  lVar10 = 1;
  iVar3 = param_1;
  do {
    fn_8246BA80(iVar3);
    lVar10 = lVar10 + -1;
    iVar3 = iVar3 + 0x14;
  } while (-1 < lVar10);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_2 != (uint *)0x0) {
    uVar5 = (ulonglong)*param_2;
    if (uVar5 != (uVar5 - 1) + (ulonglong)(uVar5 == 0)) {
      iVar3 = fn_8251F720(param_2,0);
      uVar8 = 0;
      uVar5 = fn_8251FBA8();
      if ((int)((uVar5 & 0xffffffff) / 100) != 0) {
        uStack_7c = 0;
        puVar7 = (undefined4 *)(iVar3 + 0x14);
        uStack_74 = 0;
        uStack_6c = 0;
        do {
          uVar9 = 0;
          do {
            if (uVar9 == 0) {
              uStack_80 = puVar7[-2];
              uStack_78 = *puVar7;
              uStack_70 = puVar7[-5];
            }
            else {
              uStack_80 = puVar7[-1];
              uStack_78 = puVar7[1];
              uStack_70 = puVar7[-4];
            }
            iVar6 = uVar9 * 0x14 + param_1;
            iVar1 = *(int *)(iVar6 + 4);
            iVar2 = *(int *)(iVar1 + 4);
            piVar4 = (int *)fn_8265C9E0(0x20);
            if (piVar4 == (int *)0x0) {
              uStack_8c = 0;
              ppuStack_90 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
              fn_82230040(&ppuStack_90);
            }
            *piVar4 = iVar1;
            piVar4[1] = iVar2;
            if (piVar4 + 2 != (int *)0x0) {
              fn_82F68CC0(piVar4 + 2,&uStack_80,0x18);
            }
            if (*(int *)(iVar6 + 8) == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
              fn_82F622A8(0xffffffff8219852c);
            }
            uVar9 = uVar9 + 1;
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            *(int **)(iVar1 + 4) = piVar4;
            *(int **)piVar4[1] = piVar4;
          } while (uVar9 < 2);
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 0x19;
          uVar5 = fn_8251FBA8(iVar3);
        } while ((uVar8 & 0xffffffff) < (uVar5 & 0xffffffff) / 100);
      }
      if (iVar3 != 0) {
        fn_8251FA58(iVar3);
      }
    }
  }
  puVar7 = (undefined4 *)(param_1 + -4);
  lVar10 = 2;
  do {
    puVar7[1] = 0;
    puVar7 = puVar7 + 5;
    *puVar7 = 0;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  fn_8246BC48(param_1);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return param_1;
}

