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
extern unsigned int uStack_2c;


void fn_8249D4D8(int *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  uVar2 = (uint)param_2;
  if (0xccccccc < uVar2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)((param_1[2] - *param_1) / 0x14) < uVar2) {
    iVar1 = 0;
    if ((uVar2 != 0) && (iVar1 = fn_8265C9E0(param_2 * 0x14), iVar1 == 0)) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    iVar6 = param_1[1];
    iVar5 = iVar1;
    for (iVar7 = *param_1; iVar7 != iVar6; iVar7 = iVar7 + 0x14) {
      if (iVar5 != 0) {
        puVar4 = (undefined4 *)(iVar7 + -4);
        puVar3 = (undefined4 *)(iVar5 + -4);
        lVar8 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      iVar5 = iVar5 + 0x14;
    }
    iVar7 = *param_1;
    iVar6 = param_1[1] - iVar7;
    if (iVar7 != 0) {
      for (; iVar7 != param_1[1]; iVar7 = iVar7 + 0x14) {
      }
      fn_8265CA20();
    }
    *param_1 = iVar1;
    param_1[2] = uVar2 * 0x14 + iVar1;
    param_1[1] = (iVar6 / 0x14) * 0x14 + iVar1;
  }
  return;
}

