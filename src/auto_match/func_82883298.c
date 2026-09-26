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
extern int fn_828E62F0();
extern int fn_82F622A8();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_82883298(int *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined **appuStack_20 [8];
  
  uVar2 = param_1[1] - *param_1 >> 3;
  if ((0x1fffffffU - param_2 & 0xffffffff) < (ulonglong)uVar2) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar6 = (int)uVar2 + param_2;
  uVar2 = param_1[2] - *param_1 >> 3;
  if ((ulonglong)uVar2 < (uVar6 & 0xffffffff)) {
    uVar4 = 0;
    if ((ulonglong)uVar2 <= (0x1fffffff - (ulonglong)(uVar2 >> 1) & 0xffffffff)) {
      uVar4 = (ulonglong)(uVar2 >> 1) + (longlong)(int)uVar2;
    }
    if ((uVar4 & 0xffffffff) < (uVar6 & 0xffffffff)) {
      uVar4 = uVar6;
    }
    if ((uVar4 & 0xffffffff) < 0x20000000) {
      if ((ulonglong)(uint)(param_1[2] - *param_1 >> 3) < (uVar4 & 0xffffffff)) {
        iVar3 = fn_828E62F0(param_1 + 3,uVar4);
        iVar1 = param_1[1];
        iVar5 = iVar3;
        for (iVar9 = *param_1; iVar9 != iVar1; iVar9 = iVar9 + 8) {
          if (iVar5 != 0) {
            puVar8 = (undefined1 *)(iVar9 + -1);
            puVar7 = (undefined1 *)(iVar5 + -1);
            lVar10 = 8;
            do {
              puVar8 = puVar8 + 1;
              puVar7 = puVar7 + 1;
              *puVar7 = *puVar8;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          iVar5 = iVar5 + 8;
        }
        iVar9 = *param_1;
        iVar1 = param_1[1];
        if (iVar9 != 0) {
          fn_8265CA20();
        }
        *param_1 = iVar3;
        param_1[2] = (int)((uVar4 & 0xffffffff) << 3) + iVar3;
        param_1[1] = (iVar1 - iVar9 >> 3) * 8 + iVar3;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  return;
}

