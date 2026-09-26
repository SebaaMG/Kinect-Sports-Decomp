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
extern int fn_827611B8();


ulonglong fn_82761E40(int param_1,int *param_2)

{
  int iVar1;
  int iVar3;
  ulonglong uVar2;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  iVar3 = (**(code **)(*param_2 + 0x40))(param_2);
  if (iVar3 == 0) {
    pbVar9 = *(byte **)(param_1 + 0x28);
    uVar4 = 0;
    iVar3 = 0;
    uVar8 = 0;
    for (lVar5 = ((ulonglong)(*pbVar9 >> 3) & 3) + 1; lVar5 != 0; lVar5 = lVar5 + -1) {
      iVar1 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      uVar4 = (uint)pbVar9[iVar1] << (uVar8 & 0x3f) | uVar4;
      uVar8 = uVar8 + 8;
    }
    pbVar10 = (byte *)param_2[10];
    uVar8 = 0;
    iVar3 = 0;
    uVar6 = 0;
    for (lVar5 = ((ulonglong)(*pbVar10 >> 3) & 3) + 1; lVar5 != 0; lVar5 = lVar5 + -1) {
      iVar1 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      uVar8 = (uint)pbVar10[iVar1] << (uVar6 & 0x3f) | uVar8;
      uVar6 = uVar6 + 8;
    }
    if (uVar4 == uVar8) {
      lVar5 = 0;
      if (uVar4 != 0) {
        pbVar7 = pbVar9 + uVar4;
        do {
          lVar5 = (ulonglong)*pbVar9 - (ulonglong)*pbVar10;
          if (lVar5 != 0) break;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
        } while (pbVar9 != pbVar7);
      }
      uVar2 = (ulonglong)((int)lVar5 == 0);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = fn_827611B8(param_1,param_2);
  }
  return uVar2;
}

