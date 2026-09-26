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
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B9BC8;
extern unsigned int uStack_2c;


void fn_82420180(int *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  uVar4 = (uint)param_2;
  if (0xaaaaaaa < uVar4) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)((param_1[2] - *param_1) / 0x18) < uVar4) {
    iVar3 = 0;
    if (uVar4 != 0) {
      iVar3 = fn_8265C9E0(param_2 * 0x18);
      if (iVar3 == 0) {
        uStack_2c = 0;
        ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_30);
      }
    }
    puVar5 = (undefined4 *)*param_1;
    puVar1 = (undefined4 *)param_1[1];
    if (puVar5 != puVar1) {
      puVar8 = (undefined4 *)(iVar3 + 0xc);
      puVar7 = puVar5 + 3;
      do {
        if (puVar8 != (undefined4 *)0xc) {
          puVar8[-3] = *puVar5;
          puVar8[-2] = &lbl_821B9BC8;
          puVar8[-1] = puVar7[-1];
          puVar8[-2] = &lbl_821B9BC8;
          *puVar8 = *puVar7;
          puVar8[1] = puVar7[1];
          puVar8[2] = puVar7[2];
        }
        puVar5 = puVar5 + 6;
        puVar8 = puVar8 + 6;
        puVar7 = puVar7 + 6;
      } while (puVar5 != puVar1);
    }
    iVar9 = *param_1;
    iVar2 = param_1[1];
    iVar6 = iVar2 - iVar9;
    if (iVar9 != 0) {
      for (; iVar9 != iVar2; iVar9 = iVar9 + 0x18) {
        *(undefined ***)(iVar9 + 4) = &lbl_821B9BC8;
      }
      fn_8265CA20(*param_1);
    }
    *param_1 = iVar3;
    param_1[2] = uVar4 * 0x18 + iVar3;
    param_1[1] = (iVar6 / 0x18) * 0x18 + iVar3;
  }
  return;
}

