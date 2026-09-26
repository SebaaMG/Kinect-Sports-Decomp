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


ulonglong fn_830C6428(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short sVar7;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  sVar7 = (short)param_2;
  uVar9 = (longlong)sVar7 + 0x100;
  uVar2 = *(int *)(param_1 + 0x558) * 2 + (param_2 >> 0x10) + -1 >> 1;
  uVar6 = uVar2 + 0x40;
  if (((uVar9 & 0xffffffff) >> 2 | (ulonglong)uVar6) < 0x80) {
    return (ulonglong)*(ushort *)(*(int *)(param_1 + 0x5bc) + uVar6 * 2) << 0x10 |
           (longlong)*(short *)(*(int *)(param_1 + 0x5c4) + (int)((uVar9 & 0xffffffff) << 1)) &
           0xffffffff0000ffffU;
  }
  if ((uVar9 & 0xffffffff) < 0x200) {
    uVar9 = (ulonglong)*(short *)(*(int *)(param_1 + 0x5c4) + (int)((uVar9 & 0xffffffff) << 1));
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x3e);
    uVar9 = (ulonglong)uVar1 - 1;
    uVar3 = (int)sVar7 + (uint)uVar1;
    uVar5 = (int)sVar7 - (int)uVar9 ^ uVar3;
    uVar9 = uVar9 & ~(longlong)((int)(uVar5 | uVar3) >> 0x1f) |
            (longlong)((int)uVar3 >> 0x1f) & -(ulonglong)uVar1 |
            (longlong)((int)uVar5 >> 0x1f) & (longlong)sVar7;
  }
  if (0x7f < uVar6) {
    uVar1 = *(ushort *)(param_1 + 0x40);
    uVar8 = ((ulonglong)uVar2 & 0x7fffffff) << 1;
    uVar10 = (ulonglong)uVar1 - 2;
    iVar4 = (int)uVar8;
    uVar2 = iVar4 + (uint)uVar1;
    uVar6 = iVar4 - (int)uVar10 ^ uVar2;
    return (((uVar10 & ~(longlong)((int)(uVar6 | uVar2) >> 0x1f) |
             (longlong)((int)uVar2 >> 0x1f) & -(ulonglong)uVar1) & 0xffffffff |
            (longlong)((int)uVar6 >> 0x1f) & uVar8) & 0xffff) << 0x10 | uVar9 & 0xffffffff0000ffff;
  }
  return (ulonglong)*(ushort *)(*(int *)(param_1 + 0x5bc) + uVar6 * 2) << 0x10 |
         uVar9 & 0xffffffff0000ffff;
}

