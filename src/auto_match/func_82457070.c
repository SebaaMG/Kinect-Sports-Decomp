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
extern int fn_822C5B18();
extern int fn_82457208();
extern int fn_82F622A8();


void fn_82457070(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = param_1[1];
  uVar6 = (ulonglong)uVar4;
  if ((uVar6 <= (param_2 & 0xffffffff)) ||
     (bVar3 = true, (param_2 & 0xffffffff) < (ulonglong)*param_1)) {
    bVar3 = false;
  }
  uVar1 = param_1[2];
  if (bVar3) {
    uVar2 = *param_1;
    if (uVar6 == uVar1) {
      uVar4 = (int)(uVar4 - uVar2) / 0x18;
      if (0xaaaaaa9 < uVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar6 = (longlong)(int)uVar4 + 1;
      uVar4 = (int)(uVar1 - uVar2) / 0x18;
      if ((ulonglong)uVar4 < (uVar6 & 0xffffffff)) {
        uVar5 = 0;
        if ((ulonglong)uVar4 <= (0xaaaaaaa - (ulonglong)(uVar4 >> 1) & 0xffffffff)) {
          uVar5 = (ulonglong)(uVar4 >> 1) + (longlong)(int)uVar4;
        }
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          uVar5 = uVar6;
        }
        fn_82457208(param_1,uVar5);
      }
    }
    uVar4 = param_1[1];
    if (uVar4 == 0) goto LAB_824571e4;
    param_2 = (longlong)((int)((int)param_2 - uVar2) / 0x18) * 0x18 + (ulonglong)*param_1;
  }
  else {
    if (uVar6 == uVar1) {
      uVar4 = (int)(uVar4 - *param_1) / 0x18;
      if (0xaaaaaa9 < uVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar6 = (longlong)(int)uVar4 + 1;
      uVar4 = (int)(uVar1 - *param_1) / 0x18;
      if ((ulonglong)uVar4 < (uVar6 & 0xffffffff)) {
        uVar5 = 0;
        if ((ulonglong)uVar4 <= (0xaaaaaaa - (ulonglong)(uVar4 >> 1) & 0xffffffff)) {
          uVar5 = (ulonglong)(uVar4 >> 1) + (longlong)(int)uVar4;
        }
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          uVar5 = uVar6;
        }
        fn_82457208(param_1,uVar5);
      }
    }
    uVar4 = param_1[1];
    if (uVar4 == 0) goto LAB_824571e4;
  }
  fn_822C5B18(uVar4,param_2);
LAB_824571e4:
  param_1[1] = param_1[1] + 0x18;
  return;
}

