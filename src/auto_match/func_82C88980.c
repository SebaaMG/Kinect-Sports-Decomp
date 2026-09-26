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
extern unsigned int lbl_83231E34;


void fn_82C88980(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    sVar3 = (short)((uint)(param_3 * 0xee3 + 0x8000) >> 0x10);
    *(short *)(param_1 + 2) = *(short *)(param_1 + 2) - sVar3;
    sVar4 = (short)((uint)(param_3 * 0x1e7 + 0x8000) >> 0x10);
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) - sVar4;
    *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) - sVar4;
    sVar4 = (short)((uint)(param_3 * 0x1fa + 0x8000) >> 0x10);
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) - sVar4;
    *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) - sVar4;
    sVar4 = (short)((uint)(param_3 * 0x87 + 0x8000) >> 0x10);
    *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x16) + sVar4;
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) - sVar3;
    *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + sVar4;
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) - sVar4;
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) - sVar4;
    sVar3 = (short)((uint)(param_3 * 0xad + 0x8000) >> 0x10);
    sVar5 = (short)((uint)(param_3 * 0x3d + 0x8000) >> 0x10);
    *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + sVar4;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + sVar4;
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) - sVar3;
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) - sVar3;
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) - sVar5;
    *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) - sVar5;
    *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x1a) + sVar5;
    sVar3 = (short)((uint)(param_3 * 0x2a + 0x8000) >> 0x10);
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + sVar5;
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) - sVar3;
    *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) - sVar3;
    *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + sVar3;
    *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + sVar3;
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + sVar3;
    *(short *)(param_1 + 0x12) =
         (short)((uint)(param_3 * 0x43c + 0x8000) >> 0x10) + *(short *)(param_1 + 0x12);
  }
  else {
    uVar6 = -(uint)((param_2 == 2) == lbl_83231E34) & 3;
    iVar1 = (1 << uVar6) * 2;
    *(short *)(iVar1 + param_1) =
         *(short *)(iVar1 + param_1) - (short)((uint)(param_3 * 0x187d + 0x8000) >> 0x10);
    iVar1 = (5 << uVar6) * 2;
    iVar2 = (3 << uVar6) * 2;
    *(short *)(iVar2 + param_1) =
         *(short *)(iVar2 + param_1) - (short)((uint)(param_3 * 0x2c4 + 0x8000) >> 0x10);
    iVar2 = (7 << uVar6) * 2;
    *(short *)(iVar1 + param_1) =
         *(short *)(iVar1 + param_1) - (short)((uint)(param_3 * 0xac + 0x8000) >> 0x10);
    *(short *)(iVar2 + param_1) =
         *(short *)(iVar2 + param_1) - (short)((uint)(param_3 * 0x49 + 0x8000) >> 0x10);
  }
  return;
}

