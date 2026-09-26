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
extern int fn_8249D4D8();
extern int fn_82F622A8();


void fn_8249D310(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  uVar1 = param_1[1];
  if ((uVar1 <= param_2) || (bVar4 = true, param_2 < *param_1)) {
    bVar4 = false;
  }
  uVar2 = param_1[2];
  if (bVar4) {
    uVar3 = *param_1;
    if (uVar1 == uVar2) {
      uVar1 = (int)(uVar1 - uVar3) / 0x14;
      if (0xccccccb < uVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar6 = (longlong)(int)uVar1 + 1;
      uVar1 = (int)(uVar2 - uVar3) / 0x14;
      if ((ulonglong)uVar1 < (uVar6 & 0xffffffff)) {
        uVar5 = 0;
        if ((ulonglong)uVar1 <= (0xccccccc - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar5 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          uVar5 = uVar6;
        }
        fn_8249D4D8(param_1,uVar5);
      }
    }
    if (param_1[1] != 0) {
      puVar7 = (undefined4 *)(((int)(param_2 - uVar3) / 0x14) * 0x14 + *param_1 + -4);
      puVar8 = (undefined4 *)(param_1[1] - 4);
      lVar9 = 5;
      do {
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = *puVar7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  else {
    if (uVar1 == uVar2) {
      uVar1 = (int)(uVar1 - *param_1) / 0x14;
      if (0xccccccb < uVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar6 = (longlong)(int)uVar1 + 1;
      uVar1 = (int)(uVar2 - *param_1) / 0x14;
      if ((ulonglong)uVar1 < (uVar6 & 0xffffffff)) {
        uVar5 = 0;
        if ((ulonglong)uVar1 <= (0xccccccc - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar5 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          uVar5 = uVar6;
        }
        fn_8249D4D8(param_1,uVar5);
      }
    }
    if (param_1[1] != 0) {
      puVar7 = (undefined4 *)(param_2 - 4);
      puVar8 = (undefined4 *)(param_1[1] - 4);
      lVar9 = 5;
      do {
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = *puVar7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  param_1[1] = param_1[1] + 0x14;
  return;
}

