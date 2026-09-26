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
extern int fn_82C16F10();


undefined8 fn_82A52590(short *param_1,uint *param_2,ushort *param_3)

{
  short sVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort uVar9;
  
  uVar9 = 0;
  if (param_1 == (short *)0x0) {
    return 0xffffffff80070057;
  }
  if (param_2 == (uint *)0x0) {
    return 0xffffffff80070057;
  }
  sVar1 = *param_1;
  if (((sVar1 == 0x160) || (sVar1 == 0x161)) || (bVar3 = false, sVar1 == 0x165)) {
    bVar3 = true;
  }
  if ((sVar1 == 0x162) || (bVar4 = false, sVar1 == 0x166)) {
    bVar4 = true;
  }
  if ((sVar1 == 0x163) || (bVar5 = false, sVar1 == 0x167)) {
    bVar5 = true;
  }
  if ((bVar3) || (bVar4)) {
    if (!bVar5) goto LAB_82a52644;
  }
  else if (!bVar5) {
    return 0xffffffff80040000;
  }
  if (*(uint *)(param_1 + 2) != *param_2) {
    return 0xffffffff80040000;
  }
LAB_82a52644:
  if (bVar3) {
    if (48000 < *(uint *)(param_1 + 2)) {
      return 0xffffffff80040000;
    }
    uVar8 = (ulonglong)(ushort)param_1[1];
    if (2 < uVar8) {
      return 0xffffffff80040000;
    }
    if (param_1[7] != 0x10) {
      return 0xffffffff80040000;
    }
  }
  else {
    uVar8 = (ulonglong)(ushort)param_1[1];
    if (0x20 < uVar8) {
      return 0xffffffff80040000;
    }
  }
  if (((!bVar5) && (uVar7 = (ulonglong)*(uint *)(param_1 + 2), uVar7 != 0)) && (uVar8 != 0)) {
    uVar6 = fn_82C16F10(param_2);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    sVar1 = param_1[7];
    if (((sVar1 == 0x10) || (sVar1 == 0x14)) || ((sVar1 == 0x18 || (sVar1 == 0x20)))) {
      if (((*(uint *)(param_1 + 4) & 0x80000000) != 0) || (param_1[6] == 0)) {
        return 0xffffffff80070057;
      }
      if (((param_2[2] == *(uint *)(param_1 + 8)) || (!bVar3)) &&
         (((ulonglong)param_2[1] == (uVar8 & 0xffffffff) || (!bVar3)))) {
        if (param_3 != (ushort *)0x0) {
          if ((short)param_3[0xc] < 0) {
            return 0xffffffff80040000;
          }
          if (2 < (short)param_3[0xc]) {
            return 0xffffffff80040000;
          }
          uVar9 = *param_3;
        }
        uVar2 = *param_2;
        if (bVar4) {
          if ((uVar9 & 8) != 0) {
            return 0xffffffff80040000;
          }
          if ((uVar7 & 0xffffffff) < (ulonglong)uVar2) {
            return 0xffffffff80040000;
          }
          if (((ulonglong)uVar2 & 0x7fffffff) << 1 < (uVar7 & 0xffffffff)) {
            return 0xffffffff80040000;
          }
        }
        if (!bVar3) {
          return uVar6;
        }
        if (((uVar7 & 0xffffffff) <= ((ulonglong)uVar2 & 0x3fffffff) << 2) &&
           ((ulonglong)uVar2 <= (uVar7 + (uVar7 & 0x7fffffff) * 2 & 0x7fffffff) << 1)) {
          return uVar6;
        }
      }
    }
  }
  return 0xffffffff80040000;
}

