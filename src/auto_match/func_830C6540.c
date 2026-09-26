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


ulonglong fn_830C6540(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  sVar3 = (short)param_2;
  uVar7 = (longlong)sVar3 + 0x100;
  uVar4 = (param_2 >> 0x11) + 0x40;
  if (((uVar7 & 0xffffffff) >> 2 | (ulonglong)uVar4) < 0x80) {
    return (ulonglong)*(ushort *)(*(int *)(param_1 + 0x5c0) + uVar4 * 2) << 0x10 |
           (longlong)*(short *)(*(int *)(param_1 + 0x5c4) + (int)((uVar7 & 0xffffffff) << 1)) &
           0xffffffff0000ffffU;
  }
  if ((uVar7 & 0xffffffff) < 0x200) {
    uVar7 = (ulonglong)*(short *)(*(int *)(param_1 + 0x5c4) + (int)((uVar7 & 0xffffffff) << 1));
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x3e);
    uVar7 = (ulonglong)uVar1 - 1;
    uVar5 = (int)sVar3 + (uint)uVar1;
    uVar6 = (int)sVar3 - (int)uVar7 ^ uVar5;
    uVar7 = uVar7 & ~(longlong)((int)(uVar6 | uVar5) >> 0x1f) |
            (longlong)((int)uVar5 >> 0x1f) & -(ulonglong)uVar1 |
            (longlong)((int)uVar6 >> 0x1f) & (longlong)sVar3;
  }
  if (0x7f < uVar4) {
    uVar9 = 1 - (ulonglong)*(ushort *)(param_1 + 0x40);
    uVar10 = ((ulonglong)(uint)(param_2 >> 0x11) & 0x7fffffff) * 2 +
             ((ulonglong)*(uint *)(param_1 + 0x558) & 0x7fffffff) * -2 + 1;
    uVar8 = (ulonglong)*(ushort *)(param_1 + 0x40) - 1;
    iVar2 = (int)uVar10;
    uVar4 = iVar2 - (int)uVar9;
    uVar5 = iVar2 - (int)uVar8 ^ uVar4;
    return ((uVar8 & ~(longlong)((int)(uVar5 | uVar4) >> 0x1f) |
             (longlong)((int)uVar4 >> 0x1f) & uVar9 | (longlong)((int)uVar5 >> 0x1f) & uVar10) &
           0xffff) << 0x10 | uVar7 & 0xffffffff0000ffff;
  }
  return (ulonglong)*(ushort *)(*(int *)(param_1 + 0x5c0) + uVar4 * 2) << 0x10 |
         uVar7 & 0xffffffff0000ffff;
}

