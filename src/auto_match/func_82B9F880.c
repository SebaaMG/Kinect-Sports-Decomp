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


ulonglong fn_82B9F880(uint *param_1,uint param_2,ulonglong param_3)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = 0xffffffff9e3779b9;
  uVar5 = uVar6;
  uVar4 = param_2;
  if (2 < param_2) {
    uVar3 = (ulonglong)param_2 / 3;
    do {
      uVar4 = uVar4 - 3;
      puVar2 = param_1 + 1;
      param_3 = param_1[2] + param_3;
      uVar1 = *param_1;
      param_1 = param_1 + 3;
      uVar7 = ((uVar1 - param_3) - (*puVar2 + uVar6)) + uVar5 ^ (param_3 & 0xffffffff) >> 0xd;
      uVar6 = ((*puVar2 + uVar6) - param_3) - uVar7 ^ (uVar7 & 0xffffff) << 8;
      uVar5 = (param_3 - uVar6) - uVar7 ^ (uVar6 & 0xffffffff) >> 0xd;
      uVar8 = (uVar7 - uVar5) - uVar6 ^ (uVar5 & 0xffffffff) >> 0xc;
      uVar6 = (uVar6 - uVar5) - uVar8 ^ (uVar8 & 0xffff) << 0x10;
      uVar7 = (uVar5 - uVar6) - uVar8 ^ (uVar6 & 0xffffffff) >> 5;
      uVar5 = (uVar8 - uVar7) - uVar6 ^ (uVar7 & 0xffffffff) >> 3;
      uVar6 = (uVar6 - uVar7) - uVar5 ^ (uVar5 & 0x3fffff) << 10;
      param_3 = (uVar7 - uVar6) - uVar5 ^ (uVar6 & 0xffffffff) >> 0xf;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  param_3 = ((ulonglong)param_2 & 0x3fffffff) * 4 + param_3;
  if (uVar4 != 1) {
    if (uVar4 != 2) goto LAB_82b9f984;
    uVar6 = param_1[1] + uVar6;
  }
  uVar5 = *param_1 + uVar5;
LAB_82b9f984:
  uVar3 = (uVar5 - param_3) - uVar6 ^ (param_3 & 0xffffffff) >> 0xd;
  uVar6 = (uVar6 - param_3) - uVar3 ^ (uVar3 & 0xffffff) << 8;
  uVar5 = (param_3 - uVar6) - uVar3 ^ (uVar6 & 0xffffffff) >> 0xd;
  uVar3 = (uVar3 - uVar5) - uVar6 ^ (uVar5 & 0xffffffff) >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar3 ^ (uVar3 & 0xffff) << 0x10;
  uVar5 = (uVar5 - uVar6) - uVar3 ^ (uVar6 & 0xffffffff) >> 5;
  uVar3 = (uVar3 - uVar5) - uVar6 ^ (uVar5 & 0xffffffff) >> 3;
  uVar6 = (uVar6 - uVar5) - uVar3 ^ (uVar3 & 0x3fffff) << 10;
  return (uVar5 - uVar6) - uVar3 ^ (uVar6 & 0xffffffff) >> 0xf;
}

