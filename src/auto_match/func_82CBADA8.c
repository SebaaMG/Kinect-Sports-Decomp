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


void fn_82CBADA8(longlong param_1,ulonglong param_2,int param_3,int param_4,short *param_5,
                  short *param_6,uint param_7,int param_8)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int in_stack_00000054;
  short asStack_2a0 [336];
  
  sVar1 = param_6[3];
  sVar2 = param_6[2];
  sVar3 = param_6[1];
  sVar4 = *param_6;
  iVar11 = 0;
  lVar10 = (param_1 - param_2) + -1;
  do {
    iVar6 = 0;
    lVar12 = 0xb;
    lVar7 = lVar10;
    do {
      pbVar5 = (byte *)lVar7;
      iVar9 = iVar11 + iVar6;
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 1;
      asStack_2a0[iVar9] =
           (short)((int)((uint)pbVar5[(int)((param_2 & 0xffffffff) << 1)] * (int)sVar2 +
                         (uint)pbVar5[(int)param_2 + (int)((param_2 & 0xffffffff) << 1)] *
                         (int)sVar1 + (uint)pbVar5[(int)param_2] * (int)sVar3 +
                         (uint)*pbVar5 * (int)sVar4 + param_8) >> (param_7 & 0x3f));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    iVar11 = iVar11 + 0x23;
    lVar10 = lVar10 + param_2;
  } while (iVar11 < 0x118);
  iVar11 = 0;
  param_3 = param_3 + 2;
  do {
    iVar6 = 0;
    lVar10 = 2;
    do {
      iVar8 = iVar11 + iVar6;
      sVar1 = asStack_2a0[iVar8 + 2];
      sVar2 = asStack_2a0[iVar8 + 3];
      sVar3 = asStack_2a0[iVar8 + 1];
      iVar9 = (int)asStack_2a0[iVar8] * (int)*param_5 + (int)param_5[2] * (int)sVar1 +
              (int)param_5[3] * (int)sVar2 + (int)param_5[1] * (int)sVar3 + in_stack_00000054 >> 7;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0xff < iVar9) {
        iVar9 = 0xff;
      }
      *(char *)(param_3 + iVar6 + -2) = (char)iVar9;
      sVar4 = asStack_2a0[iVar8 + 4];
      iVar9 = (int)param_5[2] * (int)sVar2 + (int)*param_5 * (int)sVar3 +
              (int)param_5[3] * (int)sVar4 + (int)param_5[1] * (int)sVar1 + in_stack_00000054 >> 7;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0xff < iVar9) {
        iVar9 = 0xff;
      }
      *(char *)(param_3 + -1 + iVar6) = (char)iVar9;
      sVar3 = asStack_2a0[iVar8 + 5];
      iVar9 = (int)param_5[2] * (int)sVar4 + (int)param_5[3] * (int)sVar3 +
              (int)*param_5 * (int)sVar1 + (int)param_5[1] * (int)sVar2 + in_stack_00000054 >> 7;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0xff < iVar9) {
        iVar9 = 0xff;
      }
      *(char *)(param_3 + iVar6) = (char)iVar9;
      iVar9 = (int)asStack_2a0[iVar8 + 6] * (int)param_5[3] + (int)param_5[2] * (int)sVar3 +
              (int)*param_5 * (int)sVar2 + (int)param_5[1] * (int)sVar4 + in_stack_00000054 >> 7;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0xff < iVar9) {
        iVar9 = 0xff;
      }
      *(char *)(param_3 + 1 + iVar6) = (char)iVar9;
      iVar6 = iVar6 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    iVar11 = iVar11 + 0x23;
    param_3 = param_3 + param_4;
  } while (iVar11 < 0x118);
  return;
}

