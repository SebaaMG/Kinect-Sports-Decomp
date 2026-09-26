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
extern int fn_822A53D8();
extern int fn_8265CA20();
extern int fn_82F68CC0();


/* WARNING: Removing unreachable block (ram,0x822a51f0) */

uint * fn_822A51A0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_1 != param_2) {
    uVar3 = *param_2;
    uVar7 = (ulonglong)uVar3;
    uVar4 = param_2[1];
    uVar2 = (int)(uVar4 - uVar3) / 0x5c;
    if (uVar2 == 0) {
      uVar7 = (ulonglong)*param_1;
      if (uVar7 == param_1[1]) {
        return param_1;
      }
      if (uVar7 != param_1[1]) {
        uVar8 = uVar7;
        do {
          uVar8 = uVar8 + 0x5c;
        } while ((uVar8 & 0xffffffff) != (ulonglong)param_1[1]);
      }
    }
    else {
      uVar5 = *param_1;
      uVar8 = (ulonglong)uVar5;
      uVar1 = (int)(param_1[1] - uVar5) / 0x5c;
      if (uVar2 <= uVar1) {
        if (uVar3 != uVar4) {
          do {
            fn_82F68CC0(uVar8,uVar7,0x5c);
            uVar7 = uVar7 + 0x5c;
            uVar8 = uVar8 + 0x5c;
          } while ((uVar7 & 0xffffffff) != (ulonglong)uVar4);
        }
        if ((uVar8 & 0xffffffff) != (ulonglong)param_1[1]) {
          do {
            uVar8 = uVar8 + 0x5c;
          } while ((uVar8 & 0xffffffff) != (ulonglong)param_1[1]);
        }
        param_1[1] = ((int)(param_2[1] - *param_2) / 0x5c) * 0x5c + *param_1;
        return param_1;
      }
      if ((uint)((int)(param_1[2] - uVar5) / 0x5c) < uVar2) {
        if (uVar8 != 0) {
          if (uVar5 != param_1[1]) {
            do {
              uVar8 = uVar8 + 0x5c;
            } while ((uVar8 & 0xffffffff) != (ulonglong)param_1[1]);
          }
          fn_8265CA20();
        }
        cVar6 = fn_822A53D8(param_1,(int)(param_2[1] - *param_2) / 0x5c);
        if (cVar6 == '\0') {
          return param_1;
        }
        uVar2 = param_2[1];
        uVar7 = (ulonglong)*param_1;
        for (uVar8 = (ulonglong)*param_2; (uVar8 & 0xffffffff) != (ulonglong)uVar2;
            uVar8 = uVar8 + 0x5c) {
          if ((uVar7 & 0xffffffff) != 0) {
            fn_82F68CC0(uVar7,uVar8,0x5c);
          }
          uVar7 = uVar7 + 0x5c;
        }
      }
      else {
        uVar9 = (longlong)(int)uVar1 * 0x5c + uVar7;
        if ((ulonglong)uVar3 != (uVar9 & 0xffffffff)) {
          do {
            fn_82F68CC0(uVar8,uVar7,0x5c);
            uVar7 = uVar7 + 0x5c;
            uVar8 = uVar8 + 0x5c;
          } while ((uVar7 & 0xffffffff) != (uVar9 & 0xffffffff));
        }
        uVar2 = param_2[1];
        uVar7 = (ulonglong)param_1[1];
        for (; (uVar9 & 0xffffffff) != (ulonglong)uVar2; uVar9 = uVar9 + 0x5c) {
          if ((uVar7 & 0xffffffff) != 0) {
            fn_82F68CC0(uVar7,uVar9,0x5c);
          }
          uVar7 = uVar7 + 0x5c;
        }
      }
    }
    param_1[1] = (uint)uVar7;
  }
  return param_1;
}

