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


ulonglong fn_8275FCA0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  pbVar1 = *(byte **)(param_1 + 0x28);
  uVar7 = 0;
  iVar6 = 0;
  uVar5 = 0;
  for (lVar4 = ((ulonglong)(*pbVar1 >> 3) & 3) + 1; lVar4 != 0; lVar4 = lVar4 + -1) {
    iVar2 = iVar6 + 1;
    iVar6 = iVar6 + 1;
    uVar7 = (uint)pbVar1[iVar2] << (uVar5 & 0x3f) | uVar7;
    uVar5 = uVar5 + 8;
  }
  uVar3 = 0;
  uVar5 = uVar7;
  if (uVar7 == 0) {
    return uVar3;
  }
  do {
    uVar7 = uVar7 - 1;
    uVar3 = (ulonglong)pbVar1[uVar7] ^ uVar3 * 0x21;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  return uVar3;
}

