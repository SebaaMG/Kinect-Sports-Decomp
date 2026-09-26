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
extern int fn_8272C128();


ulonglong fn_8272D148(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((ulonglong)param_1[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = (ulonglong)param_1[1] - 1;
    uVar6 = 0;
    uVar4 = 0;
    if (uVar5 != 0) {
      do {
        if ((int)uVar5 == -1) break;
        uVar2 = (uVar5 + uVar6 & 0xffffffff) >> 1;
        iVar3 = fn_8272C128(uVar2 * 0x14 + (ulonglong)*param_1,param_2);
        if (iVar3 == 0) {
          return uVar2;
        }
        if (iVar3 < 0) {
          uVar4 = uVar6;
          uVar6 = uVar2 + 1;
        }
        else {
          uVar5 = uVar2 - 1;
        }
      } while (uVar6 < (uVar5 & 0xffffffff));
    }
    if (((uVar6 != (uVar5 & 0xffffffff)) ||
        (iVar3 = fn_8272C128(uVar6 * 0x14 + (ulonglong)*param_1,param_2), iVar3 != 0)) &&
       (uVar6 = uVar4, uVar4 < (uVar5 & 0xffffffff))) {
      uVar1 = *param_1;
      lVar7 = uVar4 * 0x14;
      do {
        iVar3 = fn_8272C128(lVar7 + (ulonglong)uVar1 + 0x14,param_2);
        if (-1 < iVar3) {
          return uVar6;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x14;
      } while ((uVar6 & 0xffffffff) < (uVar5 & 0xffffffff));
    }
  }
  return uVar6;
}

