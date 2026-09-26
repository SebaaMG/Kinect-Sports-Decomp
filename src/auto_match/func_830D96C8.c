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


ulonglong fn_830D96C8(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar7 = (ulonglong)(param_2 >> 0x10);
  sVar5 = (short)param_2;
  uVar2 = (ulonglong)sVar5;
  lVar1 = ((ulonglong)*(ushort *)(param_1 + 0x32) & 0x3ffffffe) * 4;
  if ((param_2 >> 0x10 & 4U) == 0) {
    lVar4 = -8;
    lVar3 = ((ulonglong)*(ushort *)(param_1 + 0x34) & 0x3ffffffe) << 2;
  }
  else {
    lVar4 = -9;
    lVar3 = ((ulonglong)*(ushort *)(param_1 + 0x34) & 0x3ffffffe) * 4 + 1;
  }
  if (sVar5 != 0x4000) {
    lVar8 = (ulonglong)(*(ushort *)(param_3 + 0x12) >> 1) * 8 + (longlong)((int)sVar5 >> 2);
    lVar6 = (ulonglong)(*(ushort *)(param_3 + 0x10) >> 1) * 8 + (longlong)(param_2 >> 0x12);
    if ((int)lVar8 < -8) {
      uVar2 = uVar2 + (lVar8 + 8U & 0x3fffffff) * -4;
    }
    else if ((int)lVar1 < (int)lVar8) {
      uVar2 = (lVar1 - lVar8 & 0x3fffffffU) * 4 + uVar2;
    }
    if ((int)lVar6 < (int)lVar4) {
      return ((lVar4 - lVar6 & 0x3fffffffU) * 4 + uVar7 & 0xffff) << 0x10 |
             uVar2 & 0xffffffff0000ffff;
    }
    if ((int)lVar3 < (int)lVar6) {
      uVar7 = (lVar3 - lVar6 & 0x3fffffffU) * 4 + uVar7;
    }
  }
  return (uVar7 & 0xffff) << 0x10 | uVar2 & 0xffffffff0000ffff;
}

