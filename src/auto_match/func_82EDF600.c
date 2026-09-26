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


void fn_82EDF600(byte *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  ulonglong uVar14;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  
  iVar8 = 0;
  iVar11 = 0;
  iVar10 = 0;
  if (in_stack_00000064 == 1) {
    if (in_stack_0000006c == 1) {
      iVar11 = 1;
      iVar10 = 1;
      iVar8 = 0xb;
      goto LAB_82edf670;
    }
    if (in_stack_0000006c != 3) goto LAB_82edf670;
    iVar8 = 0xd;
  }
  else {
    if ((in_stack_00000064 != 3) || (in_stack_0000006c != 1)) goto LAB_82edf670;
    iVar8 = 0x1f;
  }
  iVar10 = 2;
  iVar11 = 2;
LAB_82edf670:
  uVar9 = (ulonglong)in_stack_00000054;
  lVar6 = (longlong)((int)in_stack_0000005c >> 1);
  if (0 < lVar6) {
    do {
      pbVar13 = param_1 + param_5;
      iVar12 = param_2 + param_5;
      if (iVar8 == 0xb) {
        if (0 < (int)in_stack_00000054) {
          iVar1 = (int)pbVar13 - (int)param_1;
          iVar2 = iVar12 - (int)param_1;
          param_2 = param_2 - (int)param_1;
          uVar14 = uVar9;
          pbVar5 = param_3;
          do {
            *pbVar5 = (byte)((int)((uint)param_1[iVar1] + (uint)*param_1 + 1) >> 1);
            pbVar7 = param_1 + iVar2;
            pbVar3 = param_1 + param_2;
            param_1 = param_1 + param_7;
            pbVar5[param_4 - (int)param_3] = (byte)((int)((uint)*pbVar3 + (uint)*pbVar7 + 1) >> 1);
            pbVar5 = pbVar5 + param_8;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      else if (iVar8 == 0x1f) {
        if (0 < (int)in_stack_00000054) {
          uVar14 = uVar9;
          pbVar5 = pbVar13;
          pbVar7 = param_3;
          do {
            *pbVar7 = (byte)((int)((uint)pbVar5[(int)param_1 - (int)pbVar13] +
                                   (uint)pbVar5[(int)param_1 - (int)pbVar13] * 2 + (uint)*pbVar5 + 2
                                  ) >> 2);
            pbVar3 = pbVar5 + (param_2 - (int)pbVar13);
            pbVar4 = pbVar5 + (iVar12 - (int)pbVar13);
            pbVar5 = pbVar5 + param_7;
            pbVar7[param_4 - (int)param_3] =
                 (byte)((int)((uint)*pbVar3 + (uint)*pbVar3 * 2 + (uint)*pbVar4 + 2) >> 2);
            pbVar7 = pbVar7 + param_8;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      else if (iVar8 == 0xd) {
        if (0 < (int)in_stack_00000054) {
          iVar1 = (int)pbVar13 - (int)param_1;
          iVar2 = iVar12 - (int)param_1;
          param_2 = param_2 - (int)param_1;
          uVar14 = uVar9;
          pbVar5 = param_3;
          do {
            *pbVar5 = (byte)((int)((uint)param_1[iVar1] + (uint)param_1[iVar1] * 2 + (uint)*param_1
                                  + 2) >> 2);
            pbVar7 = param_1 + param_2;
            pbVar3 = param_1 + iVar2;
            param_1 = param_1 + param_7;
            pbVar5[param_4 - (int)param_3] =
                 (byte)((int)((uint)*pbVar3 + (uint)*pbVar3 * 2 + (uint)*pbVar7 + 2) >> 2);
            pbVar5 = pbVar5 + param_8;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      else if (0 < (int)in_stack_00000054) {
        iVar1 = (int)pbVar13 - (int)param_1;
        iVar2 = iVar12 - (int)param_1;
        param_2 = param_2 - (int)param_1;
        uVar14 = uVar9;
        pbVar5 = param_3;
        do {
          *pbVar5 = (byte)((int)((uint)param_1[iVar1] * in_stack_0000006c +
                                 (uint)*param_1 * in_stack_00000064 + iVar11) >> iVar10);
          pbVar7 = param_1 + param_2;
          pbVar3 = param_1 + iVar2;
          param_1 = param_1 + param_7;
          pbVar5[param_4 - (int)param_3] =
               (byte)((int)((uint)*pbVar7 * in_stack_00000064 + (uint)*pbVar3 * in_stack_0000006c +
                           iVar11) >> iVar10);
          pbVar5 = pbVar5 + param_8;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      param_1 = pbVar13 + param_5;
      param_2 = iVar12 + param_5;
      lVar6 = lVar6 + -1;
      param_3 = param_3 + param_6;
      param_4 = param_4 + param_6;
    } while (lVar6 != 0);
  }
  if (((in_stack_0000005c & 1) != 0) && (0 < (int)in_stack_00000054)) {
    param_2 = param_2 - (int)param_1;
    param_4 = param_4 - (int)param_3;
    do {
      *param_3 = *param_1;
      pbVar13 = param_1 + param_2;
      param_1 = param_1 + param_7;
      param_3[param_4] = *pbVar13;
      param_3 = param_3 + param_8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

