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
extern int fn_822315A0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


void fn_823B4230(int *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  uVar5 = (uint)param_2;
  if (0x15555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)((param_1[2] - *param_1) / 0xc) < uVar5) {
    iVar4 = 0;
    if (uVar5 != 0) {
      iVar4 = fn_8265C9E0(param_2 * 0xc);
      if (iVar4 == 0) {
        uStack_4c = 0;
        ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_50);
      }
    }
    puVar7 = (undefined4 *)*param_1;
    puVar1 = (undefined4 *)param_1[1];
    if (puVar7 != puVar1) {
      puVar9 = (undefined4 *)(iVar4 + 4);
      puVar6 = puVar7 + 1;
      do {
        if (puVar9 != (undefined4 *)0x4) {
          puVar9[-1] = *puVar7;
          *puVar9 = 0;
          puVar9[1] = 0;
          if (puVar9 != puVar6) {
            puVar9[1] = puVar6[1];
            puVar6[1] = 0;
            uVar2 = *puVar9;
            *puVar9 = *puVar6;
            *puVar6 = uVar2;
          }
        }
        puVar7 = puVar7 + 3;
        puVar9 = puVar9 + 3;
        puVar6 = puVar6 + 3;
      } while (puVar7 != puVar1);
    }
    iVar11 = *param_1;
    iVar3 = param_1[1];
    iVar8 = iVar3 - iVar11;
    if (iVar11 != 0) {
      if (iVar11 != iVar3) {
        piVar10 = (int *)(iVar11 + 8);
        do {
          if (*piVar10 != 0) {
            fn_822315A0();
          }
          iVar11 = iVar11 + 0xc;
          piVar10 = piVar10 + 3;
        } while (iVar11 != iVar3);
      }
      fn_8265CA20(*param_1);
    }
    *param_1 = iVar4;
    param_1[2] = uVar5 * 0xc + iVar4;
    param_1[1] = (iVar8 / 0xc) * 0xc + iVar4;
  }
  return;
}

