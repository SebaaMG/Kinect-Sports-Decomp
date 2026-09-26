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
extern int fn_822959F8();
extern int fn_82297DB0();
extern int fn_82311AB8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern int fn_82F68B6C();
extern int fn_82F69290();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821AD03C;
extern unsigned int uStack_4c;


void fn_82357530(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined **appuStack_20 [8];
  
  uVar1 = (param_1[1] - *param_1) / 0x1c;
  if (0x9249248 < uVar1) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar5 = (longlong)(int)uVar1 + 1;
  uVar1 = (param_1[2] - *param_1) / 0x1c;
  if ((uVar5 & 0xffffffff) <= (ulonglong)uVar1) {
    return;
  }
  uVar4 = 0;
  if ((ulonglong)uVar1 <= (0x9249249 - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
    uVar4 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
  }
  if ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    uVar4 = uVar5;
  }
  puVar3 = (uint *)fn_82F68B6C();
  if (0x9249249 < (uVar4 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((int)(puVar3[2] - *puVar3) / 0x1c) < (uVar4 & 0xffffffff)) {
    uVar5 = 0;
    if (((uVar4 & 0xffffffff) != 0) && (uVar5 = fn_8265C9E0(uVar4 * 0x1c), uVar5 == 0)) {
      uStack_4c = 0;
      ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_50);
    }
    uVar1 = puVar3[1];
    uVar6 = uVar5;
    for (uVar8 = (ulonglong)*puVar3; (uVar8 & 0xffffffff) != (ulonglong)uVar1; uVar8 = uVar8 + 0x1c)
    {
      if ((uVar6 & 0xffffffff) != 0) {
        fn_822959F8(uVar6,uVar8);
      }
      uVar6 = uVar6 + 0x1c;
    }
    uVar1 = *puVar3;
    uVar6 = (ulonglong)uVar1;
    uVar2 = puVar3[1];
    if (uVar6 != 0) {
      if (uVar6 != uVar2) {
        do {
          fn_82297DB0(uVar6,1,0);
          uVar6 = uVar6 + 0x1c;
        } while ((uVar6 & 0xffffffff) != (ulonglong)uVar2);
      }
      fn_8265CA20(*puVar3);
    }
    uVar7 = (uint)uVar5;
    *puVar3 = uVar7;
    puVar3[2] = (int)uVar4 * 0x1c + uVar7;
    puVar3[1] = ((int)(uVar2 - uVar1) / 0x1c) * 0x1c + uVar7;
  }
  return;
}

