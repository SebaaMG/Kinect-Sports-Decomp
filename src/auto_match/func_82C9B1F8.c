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


ulonglong fn_82C9B1F8(int param_1,uint param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar3 = param_2 & 1;
  uVar4 = (ulonglong)(short)param_3;
  uVar5 = (ulonglong)(param_3 >> 0x10);
  uVar11 = (ulonglong)(uVar3 == 0);
  lVar1 = ((ulonglong)(*(ushort *)(param_1 + 0x32) >> uVar3) * 8 + uVar11) * 4;
  lVar2 = ((ulonglong)(*(ushort *)(param_1 + 0x34) >> uVar3) * 8 + uVar11) * 4;
  uVar6 = (ulonglong)(*(ushort *)(param_4 + 0x10) >> uVar3) * 0x20 + uVar5;
  uVar9 = (ulonglong)(*(ushort *)(param_4 + 0x12) >> uVar3) * 0x20 + uVar4;
  uVar8 = (ulonglong)(uint)((int)((-uVar11 - 7 & 0xffffffff) << 2) << (uint)(uVar3 == 0));
  lVar7 = lVar1 + -4;
  lVar10 = lVar2 + -4;
  if ((uint)LZCOUNT(param_2 - 2) >> 5 == 0) {
    uVar9 = ~(uVar11 * 3) & uVar9;
    uVar6 = ~(uVar11 * 3) & uVar6;
  }
  else {
    uVar8 = uVar8 + 4;
    lVar7 = lVar1 + -8;
    lVar10 = lVar2 + -8;
  }
  if ((int)uVar9 < (int)uVar8) {
    lVar7 = uVar8 - uVar9;
  }
  else {
    if ((int)uVar9 <= (int)lVar7) goto code_r0x82c9b2dc;
    lVar7 = lVar7 - uVar9;
  }
  uVar4 = lVar7 + uVar4;
code_r0x82c9b2dc:
  if ((int)uVar6 < (int)uVar8) {
    return ((uVar8 - uVar6) + uVar5 & 0xffff) << 0x10 | uVar4 & 0xffffffff0000ffff;
  }
  if ((int)lVar10 < (int)uVar6) {
    uVar5 = (lVar10 - uVar6) + uVar5;
  }
  return (uVar5 & 0xffff) << 0x10 | uVar4 & 0xffffffff0000ffff;
}

