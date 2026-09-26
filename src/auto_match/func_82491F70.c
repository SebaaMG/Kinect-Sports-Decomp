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
extern int fn_8248F890();
extern int fn_8248F8E8();
extern int fn_824923C0();
extern int fn_82F622A8();
extern int fn_82F68CC0();


void fn_82491F70(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = ((int)param_4 - (int)param_3) / 0x1c;
  if (uVar5 != 0) {
    uVar7 = (ulonglong)param_1[1];
    lVar2 = (longlong)((int)(param_1[1] - *param_1) / 0x1c);
    if ((0x9249249U - lVar2 & 0xffffffff) < (ulonglong)uVar5) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar3 = lVar2 + (int)uVar5;
    uVar6 = (int)(param_1[2] - *param_1) / 0x1c;
    if ((ulonglong)uVar6 < (uVar3 & 0xffffffff)) {
      if ((0x9249249 - (ulonglong)(uVar6 >> 1) & 0xffffffff) < (ulonglong)uVar6) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulonglong)(uVar6 >> 1) + (longlong)(int)uVar6;
      }
      if ((uVar7 & 0xffffffff) < (uVar3 & 0xffffffff)) {
        uVar7 = uVar3;
      }
      uVar1 = fn_8248F890(uVar7 * 0x1c);
      uVar3 = uVar1;
      for (uVar8 = (ulonglong)*param_1; (uVar8 & 0xffffffff) != (param_2 & 0xffffffff);
          uVar8 = uVar8 + 0x1c) {
        if ((uVar3 & 0xffffffff) != 0) {
          fn_82F68CC0(uVar3,uVar8,0x1c);
        }
        uVar3 = uVar3 + 0x1c;
      }
      if ((param_3 & 0xffffffff) != (param_4 & 0xffffffff)) {
        lVar2 = param_3 - uVar3;
        do {
          if ((uVar3 & 0xffffffff) != 0) {
            fn_82F68CC0(uVar3,lVar2 + uVar3,0x1c);
          }
          uVar3 = uVar3 + 0x1c;
        } while ((lVar2 + uVar3 & 0xffffffff) != (param_4 & 0xffffffff));
      }
      uVar6 = param_1[1];
      if ((param_2 & 0xffffffff) != (ulonglong)uVar6) {
        lVar2 = param_2 - uVar3;
        do {
          if ((uVar3 & 0xffffffff) != 0) {
            fn_82F68CC0(uVar3,lVar2 + uVar3,0x1c);
          }
          uVar3 = uVar3 + 0x1c;
        } while ((lVar2 + uVar3 & 0xffffffff) != (ulonglong)uVar6);
      }
      uVar6 = *param_1;
      iVar4 = param_1[1] - uVar6;
      if (uVar6 != 0) {
        for (; uVar6 != param_1[1]; uVar6 = uVar6 + 0x1c) {
        }
        fn_8248F8E8();
      }
      uVar6 = (uint)uVar1;
      *param_1 = uVar6;
      uVar5 = (iVar4 / 0x1c + uVar5) * 0x1c + uVar6;
      param_1[2] = (int)(uVar7 * 0x1c) + uVar6;
    }
    else {
      if ((param_3 & 0xffffffff) != (param_4 & 0xffffffff)) {
        do {
          if ((uVar7 & 0xffffffff) != 0) {
            fn_82F68CC0(uVar7,param_3,0x1c);
          }
          param_3 = param_3 + 0x1c;
          uVar7 = uVar7 + 0x1c;
        } while ((param_3 & 0xffffffff) != (param_4 & 0xffffffff));
      }
      uVar7 = (ulonglong)param_1[1];
      lVar2 = (longlong)(int)uVar5 * 0x1c;
      if (((param_2 & 0xffffffff) != uVar7) && (uVar7 != (lVar2 + uVar7 & 0xffffffff))) {
        fn_824923C0(param_2);
      }
      uVar5 = (int)lVar2 + param_1[1];
    }
    param_1[1] = uVar5;
  }
  return;
}

