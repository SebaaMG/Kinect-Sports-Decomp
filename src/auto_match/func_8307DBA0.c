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


int fn_8307DBA0(uint param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  iVar5 = 0;
  iVar4 = 0;
  iVar8 = 0;
  uVar6 = 0;
  if (1 < (int)param_1) {
    piVar7 = (int *)(param_2 + -8);
    do {
      piVar1 = piVar7 + 3;
      uVar6 = uVar6 + 2;
      pbVar2 = (byte *)(piVar7 + 4);
      pbVar3 = (byte *)(piVar7 + 7);
      piVar7 = piVar7 + 6;
      iVar5 = (*piVar1 + 0x80) * (uint)*pbVar2 * 2 + iVar5;
      iVar4 = (*piVar7 + 0x80) * (uint)*pbVar3 * 2 + iVar4;
    } while (uVar6 < param_1 - 1);
  }
  if (uVar6 < param_1) {
    param_2 = uVar6 * 0xc + param_2;
    iVar8 = (*(int *)(param_2 + 4) + 0x80) * (uint)*(byte *)(param_2 + 8) * 2;
  }
  return iVar4 + iVar5 + iVar8 + (param_1 * 0x60 + 0x8f & 0xffffff80);
}

