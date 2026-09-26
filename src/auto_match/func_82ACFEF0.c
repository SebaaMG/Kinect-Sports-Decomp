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


ulonglong fn_82ACFEF0(undefined8 param_1,ulonglong param_2,ulonglong param_3,int param_4,
                       uint param_5,uint *param_6)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar4;
  ulonglong uVar3;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar6 = param_2 & 0xf;
  uVar10 = (ulonglong)(*(uint *)(param_5 + 8) >> 1) & 0xf;
  uVar5 = *(uint *)(param_4 + 8) >> 0x13 & 7;
  uVar7 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar8 = uVar10;
  if (uVar5 != 0) {
    piVar9 = (int *)(param_4 + 0x2c);
    do {
      uVar2 = uVar6 & ~(uVar6 - 1);
      uVar6 = uVar6 - uVar2;
      if (((uint *)*piVar9)[3] == param_5) {
        uVar7 = uVar2 | uVar7;
        uVar4 = *(uint *)*piVar9 >> 5 & 3;
        iVar1 = uVar4 << 1;
        uVar8 = uVar8 & ~(ulonglong)(uint)(1 << uVar4);
        uVar12 = 0x1f - (int)LZCOUNT((int)uVar2) << iVar1 | uVar12 & ~(3 << iVar1);
      }
      uVar11 = uVar11 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar11 < uVar5);
  }
  uVar6 = uVar6 & ~param_3;
  for (; uVar8 != 0; uVar8 = uVar8 - uVar2) {
    uVar2 = uVar8 & ~(uVar8 - 1);
    uVar3 = uVar6 & ~(uVar6 - 1);
    uVar5 = (uint)((0x1fU - LZCOUNT((int)uVar2) & 0xffffffff) << 1);
    uVar6 = uVar6 - uVar3;
    uVar12 = 0x1f - (int)LZCOUNT((int)uVar3) << (uVar5 & 0x3e) | uVar12 & ~(3 << (uVar5 & 0x3e));
    uVar7 = uVar3 | uVar7;
  }
  uVar5 = 0;
  do {
    uVar6 = 0x20U - (LZCOUNT((int)uVar10) + 1) & 0x1f;
    uVar6 = 0x100000001 << uVar6 | 0x100000001U >> 0x40 - uVar6;
    uVar10 = uVar10 - (uVar6 & 0xffffffff);
    uVar5 = uVar5 << 2 |
            uVar12 >> ((uint)((0x1fU - LZCOUNT((int)uVar6) & 0xffffffff) << 1) & 0x3e) & 3;
  } while (uVar10 != 0);
  *param_6 = uVar5;
  return param_2 & 0xfffffff0 | uVar7 & 0xffffffff0000000f;
}

