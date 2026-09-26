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
extern int fn_8228E658();
extern int fn_82456810();
extern int fn_82F622A8();


void fn_82456688(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar1 = param_1[1];
  uVar7 = (ulonglong)uVar1;
  if ((uVar7 <= (param_2 & 0xffffffff)) ||
     (bVar5 = true, (param_2 & 0xffffffff) < (ulonglong)*param_1)) {
    bVar5 = false;
  }
  uVar2 = param_1[2];
  if (bVar5) {
    uVar3 = *param_1;
    if (uVar7 == uVar2) {
      uVar1 = (int)(uVar1 - uVar3) >> 3;
      if (0x1ffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar7 = (longlong)(int)uVar1 + 1;
      uVar1 = (int)(uVar2 - uVar3) >> 3;
      if ((ulonglong)uVar1 < (uVar7 & 0xffffffff)) {
        uVar6 = 0;
        if ((ulonglong)uVar1 <= (0x1fffffff - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar6 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
          uVar6 = uVar7;
        }
        fn_82456810(param_1,uVar6);
      }
    }
    puVar4 = (undefined4 *)param_1[1];
    param_2 = ((ulonglong)(uint)((int)((int)param_2 - uVar3) >> 3) & 0x1fffffff) * 8 +
              (ulonglong)*param_1;
  }
  else {
    if (uVar7 == uVar2) {
      uVar1 = (int)(uVar1 - *param_1) >> 3;
      if (0x1ffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar7 = (longlong)(int)uVar1 + 1;
      uVar1 = (int)(uVar2 - *param_1) >> 3;
      if ((ulonglong)uVar1 < (uVar7 & 0xffffffff)) {
        uVar6 = 0;
        if ((ulonglong)uVar1 <= (0x1fffffff - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar6 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
          uVar6 = uVar7;
        }
        fn_82456810(param_1,uVar6);
      }
    }
    puVar4 = (undefined4 *)param_1[1];
  }
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    fn_8228E658(puVar4,param_2);
  }
  param_1[1] = param_1[1] + 8;
  return;
}

