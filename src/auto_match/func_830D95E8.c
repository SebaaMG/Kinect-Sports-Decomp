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


ulonglong fn_830D95E8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  uVar5 = (ulonglong)(short)param_2;
  uVar1 = param_2 >> 0x10;
  uVar12 = (ulonglong)(int)uVar1;
  uVar2 = (ulonglong)*(ushort *)(param_3 + 0x12) & 0x1ffffffe;
  uVar3 = (ulonglong)*(ushort *)(param_3 + 0x10) & 0x1ffffffe;
  lVar6 = (longlong)(param_2 >> 0x12) + uVar3 * 8;
  bVar4 = false;
  lVar8 = (longlong)((int)(short)param_2 >> 2) + uVar2 * 8;
  lVar10 = ((ulonglong)*(ushort *)(param_1 + 0x34) & 0x1ffffffe) * 8;
  lVar13 = ((ulonglong)*(ushort *)(param_1 + 0x32) & 0x1ffffffe) * 8;
  if ((uVar1 & 4) == 0) {
    lVar11 = -0x12;
  }
  else {
    lVar11 = -0x11;
    lVar10 = lVar10 + 1;
    lVar13 = lVar13 + 1;
  }
  lVar9 = lVar11;
  if (((int)lVar8 < (int)lVar11) || (lVar9 = lVar13, (int)lVar13 < (int)lVar8)) {
    bVar4 = true;
    lVar8 = lVar9;
  }
  iVar7 = (int)lVar6;
  if (((iVar7 < (int)lVar11) || (lVar11 = lVar10, (int)lVar10 < iVar7)) || (lVar11 = lVar6, bVar4))
  {
    uVar5 = (lVar8 + uVar2 * -8 & 0x3fffffff) * 4 + (uVar5 & 3);
    uVar12 = (lVar11 + uVar3 * -8 & 0x3fffffff) * 4 + ((ulonglong)uVar1 & 3);
  }
  return (uVar12 & 0xffff) << 0x10 | uVar5 & 0xffffffff0000ffff;
}

