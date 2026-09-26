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
extern int fn_82311AB8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern int fn_82F68CC0();
extern int fn_82F69290();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821AD03C;
extern unsigned int uStack_4c;


void fn_82491EF0(uint *param_1)

{
  ulonglong uVar1;
  int iVar3;
  ulonglong uVar2;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined **appuStack_20 [8];
  
  uVar4 = (int)(param_1[1] - *param_1) / 0x1c;
  if (0x9249248 < uVar4) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar2 = (longlong)(int)uVar4 + 1;
  uVar4 = (int)(param_1[2] - *param_1) / 0x1c;
  if ((ulonglong)uVar4 < (uVar2 & 0xffffffff)) {
    uVar1 = 0;
    if ((ulonglong)uVar4 <= (0x9249249 - (ulonglong)(uVar4 >> 1) & 0xffffffff)) {
      uVar1 = (ulonglong)(uVar4 >> 1) + (longlong)(int)uVar4;
    }
    if ((uVar1 & 0xffffffff) < (uVar2 & 0xffffffff)) {
      uVar1 = uVar2;
    }
    if ((uVar1 & 0xffffffff) < 0x924924a) {
      if ((ulonglong)(uint)((int)(param_1[2] - *param_1) / 0x1c) < (uVar1 & 0xffffffff)) {
        uVar2 = 0;
        if (((uVar1 & 0xffffffff) != 0) && (uVar2 = fn_8265C9E0(uVar1 * 0x1c), uVar2 == 0)) {
          uStack_4c = 0;
          ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
          fn_82230040(&ppuStack_50);
        }
        uVar4 = param_1[1];
        uVar5 = uVar2;
        for (uVar6 = (ulonglong)*param_1; (uVar6 & 0xffffffff) != (ulonglong)uVar4;
            uVar6 = uVar6 + 0x1c) {
          if ((uVar5 & 0xffffffff) != 0) {
            fn_82F68CC0(uVar5,uVar6,0x1c);
          }
          uVar5 = uVar5 + 0x1c;
        }
        uVar4 = *param_1;
        iVar3 = param_1[1] - uVar4;
        if (uVar4 != 0) {
          for (; uVar4 != param_1[1]; uVar4 = uVar4 + 0x1c) {
          }
          fn_8265CA20();
        }
        uVar4 = (uint)uVar2;
        *param_1 = uVar4;
        param_1[2] = (int)uVar1 * 0x1c + uVar4;
        param_1[1] = (iVar3 / 0x1c) * 0x1c + uVar4;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  return;
}

