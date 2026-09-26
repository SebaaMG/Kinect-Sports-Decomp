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
extern int fn_8223B688();
extern int fn_822C1B68();
extern int fn_82F622A8();


void fn_822C1730(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = param_1[1];
  uVar6 = (ulonglong)uVar1;
  if ((uVar6 <= (param_2 & 0xffffffff)) ||
     (bVar4 = true, (param_2 & 0xffffffff) < (ulonglong)*param_1)) {
    bVar4 = false;
  }
  uVar2 = param_1[2];
  if (bVar4) {
    uVar3 = *param_1;
    if (uVar6 == uVar2) {
      uVar1 = (int)(uVar1 - uVar3) / 0x38;
      if (0x4924923 < uVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar6 = (longlong)(int)uVar1 + 1;
      uVar1 = (int)(uVar2 - uVar3) / 0x38;
      if ((ulonglong)uVar1 < (uVar6 & 0xffffffff)) {
        uVar5 = 0;
        if ((ulonglong)uVar1 <= (0x4924924 - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar5 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          uVar5 = uVar6;
        }
        fn_822C1B68(param_1,uVar5);
      }
    }
    param_2 = (longlong)((int)((int)param_2 - uVar3) / 0x38) * 0x38 + (ulonglong)*param_1;
  }
  else if (uVar6 == uVar2) {
    uVar1 = (int)(uVar1 - *param_1) / 0x38;
    if (0x4924923 < uVar1) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar6 = (longlong)(int)uVar1 + 1;
    uVar1 = (int)(uVar2 - *param_1) / 0x38;
    if ((ulonglong)uVar1 < (uVar6 & 0xffffffff)) {
      uVar5 = 0;
      if ((ulonglong)uVar1 <= (0x4924924 - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
        uVar5 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
      }
      if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
        uVar5 = uVar6;
      }
      fn_822C1B68(param_1,uVar5);
    }
  }
  uVar6 = (ulonglong)param_1[1];
  if (uVar6 != 0) {
    fn_8223B688(uVar6,param_2);
    fn_8223B688(uVar6 + 0x1c,param_2 + 0x1c);
  }
  param_1[1] = param_1[1] + 0x38;
  return;
}

