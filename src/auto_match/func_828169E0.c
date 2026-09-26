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
extern int fn_82311AB8();
extern int fn_8265CA20();
extern int fn_82816710();
extern int fn_82F622A8();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_828169E0(int *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar7;
  int iVar8;
  ulonglong uVar6;
  int iVar9;
  longlong lVar10;
  undefined **appuStack_20 [8];
  
  uVar1 = (param_1[1] - *param_1) / 0x14;
  if ((0xcccccccU - param_2 & 0xffffffff) < (ulonglong)uVar1) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar6 = (int)uVar1 + param_2;
  uVar1 = (param_1[2] - *param_1) / 0x14;
  if ((ulonglong)uVar1 < (uVar6 & 0xffffffff)) {
    uVar3 = 0;
    if ((ulonglong)uVar1 <= (0xccccccc - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
      uVar3 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
    }
    if ((uVar3 & 0xffffffff) < (uVar6 & 0xffffffff)) {
      uVar3 = uVar6;
    }
    if ((uVar3 & 0xffffffff) < 0xccccccd) {
      if ((ulonglong)(uint)((param_1[2] - *param_1) / 0x14) < (uVar3 & 0xffffffff)) {
        iVar2 = fn_82816710(uVar3,0);
        iVar8 = param_1[1];
        iVar7 = iVar2;
        for (iVar9 = *param_1; iVar9 != iVar8; iVar9 = iVar9 + 0x14) {
          if (iVar7 != 0) {
            puVar5 = (undefined4 *)(iVar9 + -4);
            puVar4 = (undefined4 *)(iVar7 + -4);
            lVar10 = 5;
            do {
              puVar5 = puVar5 + 1;
              puVar4 = puVar4 + 1;
              *puVar4 = *puVar5;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          iVar7 = iVar7 + 0x14;
        }
        iVar9 = *param_1;
        iVar8 = param_1[1] - iVar9;
        if (iVar9 != 0) {
          for (; iVar9 != param_1[1]; iVar9 = iVar9 + 0x14) {
          }
          fn_8265CA20();
        }
        *param_1 = iVar2;
        param_1[2] = (int)uVar3 * 0x14 + iVar2;
        param_1[1] = (iVar8 / 0x14) * 0x14 + iVar2;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  return;
}

