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
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;


void fn_82302DA8(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  if (0x3ffffff < param_2) {
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)((int)(param_1[2] - *param_1) >> 6) < param_2) {
    uVar4 = 0;
    if (param_2 != 0) {
      uVar4 = fn_8265C9E0(param_2 & 0x3ffffff);
      if (uVar4 == 0) {
        uStack_3c = 0;
        ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_40);
      }
    }
    uVar7 = *param_1;
    uVar1 = param_1[1];
    if (uVar7 != uVar1) {
      iVar6 = uVar4 + 0x20;
      do {
        if (iVar6 != 0x20) {
          fn_8223B688(iVar6 + -0x20,uVar7);
          *(undefined4 *)(iVar6 + -4) = *(undefined4 *)(uVar7 + 0x1c);
          puVar2 = (undefined4 *)(uVar7 + 0x20 & 0xfffffff0);
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          puVar3 = (undefined4 *)((int)in_r0 + iVar6 & 0xfffffff0);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(uVar7 + 0x30);
          *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(uVar7 + 0x34);
          *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(uVar7 + 0x38);
        }
        uVar7 = uVar7 + 0x40;
        iVar6 = iVar6 + 0x40;
      } while (uVar7 != uVar1);
    }
    uVar7 = *param_1;
    uVar5 = (ulonglong)uVar7;
    uVar1 = param_1[1];
    if (uVar5 != 0) {
      if (uVar5 != uVar1) {
        do {
          fn_82230300(uVar5,1,0);
          uVar5 = uVar5 + 0x40;
        } while ((uVar5 & 0xffffffff) != (ulonglong)uVar1);
      }
      fn_8265CA20(*param_1);
    }
    *param_1 = uVar4;
    param_1[2] = param_2 * 0x40 + uVar4;
    param_1[1] = ((int)(uVar1 - uVar7) >> 6) * 0x40 + uVar4;
  }
  return;
}

