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


void fn_827CB600(int param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  short sVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  if ((int)param_4 < 1) {
    return;
  }
  do {
    pbVar6 = (byte *)*param_2;
    for (uVar8 = (ulonglong)uVar2; uVar8 != 0; uVar8 = uVar8 - 1) {
      iVar4 = *(int *)((*pbVar6 >> 1 & 0x7ffffffc) + iVar3);
      iVar5 = ((pbVar6[1] & 0xfc) * 8 + (uint)(pbVar6[2] >> 3)) * 2;
      sVar1 = *(short *)(iVar5 + iVar4);
      sVar7 = sVar1 + 1;
      *(short *)(iVar5 + iVar4) = sVar7;
      if (sVar7 == 0) {
        *(short *)(iVar5 + iVar4) = sVar1;
      }
      pbVar6 = pbVar6 + 3;
    }
    param_4 = param_4 + -1;
    param_2 = param_2 + 1;
  } while (param_4 != 0);
  return;
}

