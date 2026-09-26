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


void fn_82CD31A8(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  uVar5 = param_1[0xe4b];
  param_1[0xe3f] = param_2;
  param_1[0xe40] = param_3;
  param_1[0xe41] = param_4;
  param_1[0xe42] = param_5;
  if (uVar5 == 0) {
    param_1[0xe30] =
         ((int)(*(ushort *)(*param_1 + 0xe) * param_2 + 0x1f & 0xffffffe0) >> 3) * param_1[0xe22];
  }
  else {
    param_1[0xe30] = uVar5;
    param_1[0xe22] = 1;
  }
  uVar11 = param_1[0xe30];
  param_1[0xe31] = uVar11 << 1;
  uVar2 = (int)param_3 >> 0x1f;
  uVar10 = (int)uVar11 >> 0x1f;
  if (param_1[0xe22] == 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = (((param_3 ^ uVar2) - uVar2) + -1) * ((uVar11 ^ uVar10) - uVar10);
  }
  iVar7 = *param_1;
  uVar3 = param_1[0xe43];
  param_1[0xe] = iVar6;
  uVar1 = param_1[0xe44];
  uVar9 = *(ushort *)(iVar7 + 0xe) * uVar3;
  param_1[0xe32] = ((int)uVar9 >> 3) + (uint)((int)uVar9 < 0 && (uVar9 & 7) != 0) + uVar1 * uVar11;
  if (param_1[0xe3d] != 0) {
    if (param_1[0xe22] == 1) {
      uVar10 = param_1[0xe39] * (uint)*(ushort *)(iVar7 + 0xe);
      iVar6 = param_1[0xe3a] * uVar11;
      iVar8 = ((int)uVar10 >> 3) + (uint)((int)uVar10 < 0 && (uVar10 & 7) != 0);
    }
    else {
      uVar9 = param_1[0xe39] * (uint)*(ushort *)(iVar7 + 0xe);
      iVar8 = (((param_3 ^ uVar2) - uVar2) + (-1 - param_1[0xe3a])) * ((uVar11 ^ uVar10) - uVar10);
      iVar6 = ((int)uVar9 >> 3) + (uint)((int)uVar9 < 0 && (uVar9 & 7) != 0);
    }
    param_1[0xe] = iVar8 + iVar6;
  }
  if (uVar5 == 0) {
    uVar5 = param_2;
  }
  uVar11 = *(uint *)(iVar7 + 0x10);
  iVar6 = (int)uVar3 >> 1;
  if (uVar11 < 0x3231565a) {
    if (uVar11 == 0x32315659) {
      uVar11 = uVar1 * param_2;
      iVar7 = ((param_3 ^ uVar2) - uVar2) * uVar5;
      param_1[0x11] = iVar7;
      bVar12 = (int)uVar5 < 0 && (uVar5 & 1) != 0;
      iVar6 = iVar6 + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0) +
              ((int)uVar11 >> 2) + (uint)((int)uVar11 < 0 && (uVar11 & 3) != 0);
      param_1[0x10] = (uint)(iVar7 * 5) >> 2;
LAB_82cd3478:
      param_1[0xe4d] = ((int)uVar5 >> 1) + (uint)bVar12;
LAB_82cd3484:
      param_1[0xe33] = uVar1 * param_2 + uVar3;
    }
    else {
      if (uVar11 == 0x30323449) {
LAB_82cd33e0:
        iVar7 = param_1[0xe49];
        if (iVar7 == 0) {
          iVar7 = ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
        }
        uVar11 = iVar7 * param_3;
        param_1[0xe4d] = iVar7;
        param_1[0x10] = uVar5 * param_3;
        iVar6 = (((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) * iVar7 +
                iVar6 + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
        param_1[0x11] =
             ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0) + uVar5 * param_3;
        goto LAB_82cd3484;
      }
      if (uVar11 != 0x31313450) goto LAB_82cd3494;
      iVar6 = param_1[0xe49];
      if (iVar6 == 0) {
        iVar6 = ((int)uVar5 >> 2) + (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0);
      }
      param_1[0xe4d] = iVar6;
      param_1[0x10] = uVar5 * param_3;
      param_1[0x11] = iVar6 * param_3 + uVar5 * param_3;
      iVar6 = uVar1 * iVar6 + ((int)uVar3 >> 2) + (uint)((int)uVar3 < 0 && (uVar3 & 3) != 0);
      param_1[0xe33] = uVar1 * param_2 + uVar3;
    }
    param_1[0xe35] = iVar6;
    param_1[0xe34] = iVar6;
    param_1[0xf] = 0;
  }
  else {
    if (uVar11 == 0x32323450) {
      uVar11 = uVar1 * param_2;
      iVar7 = ((param_3 ^ uVar2) - uVar2) * uVar5;
      param_1[0x10] = iVar7;
      bVar12 = (int)uVar5 < 0 && (uVar5 & 1) != 0;
      iVar6 = iVar6 + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0) +
              ((int)uVar11 >> 2) + (uint)((int)uVar11 < 0 && (uVar11 & 3) != 0);
      param_1[0x11] = (uint)(iVar7 * 3) >> 1;
      goto LAB_82cd3478;
    }
    if (uVar11 == 0x56555949) goto LAB_82cd33e0;
  }
LAB_82cd3494:
  uVar5 = param_1[0xe4c];
  if (uVar5 == 0) {
    param_1[0xe27] =
         ((int)(*(ushort *)(param_1[1] + 0xe) * param_4 + 0x1f & 0xffffffe0) >> 3) * param_1[0xe23];
  }
  else {
    param_1[0xe27] = uVar5;
    param_1[0xe23] = 1;
  }
  uVar11 = param_1[0xe27];
  param_1[0xe28] = uVar11 << 1;
  uVar2 = (int)param_5 >> 0x1f;
  if (param_1[0xe23] == 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = (((param_5 ^ uVar2) - uVar2) + -1) *
            ((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f));
  }
  uVar10 = param_1[0xe45];
  param_1[0x12] = iVar6;
  iVar6 = param_1[0xe46];
  uVar3 = *(ushort *)(param_1[1] + 0xe) * uVar10;
  param_1[0xe29] = ((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0) + iVar6 * uVar11;
  if (uVar5 == 0) {
    uVar5 = param_4;
  }
  uVar11 = *(uint *)(param_1[1] + 0x10);
  iVar7 = (int)uVar5 >> 1;
  if (uVar11 < 0x3231565a) {
    if (uVar11 == 0x32315659) {
      param_4 = iVar6 * param_4;
      iVar6 = ((param_5 ^ uVar2) - uVar2) * uVar5;
      param_1[0x14] = iVar6;
      iVar8 = ((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0) +
              ((int)param_4 >> 2) + (uint)((int)param_4 < 0 && (param_4 & 3) != 0);
      param_1[0xe2c] = iVar8;
      param_1[0x13] = (uint)(iVar6 * 5) >> 2;
      param_1[0xe2a] = uVar10 + param_4;
      param_1[0xe2b] = iVar8;
      param_1[0xe4e] = iVar7 + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
      goto LAB_82cd372c;
    }
    if (uVar11 != 0x30323449) {
      if (uVar11 == 0x31313450) {
        param_4 = iVar6 * param_4;
        iVar6 = ((param_5 ^ uVar2) - uVar2) * uVar5;
        param_1[0x13] = iVar6;
        iVar7 = ((int)uVar10 >> 2) + (uint)((int)uVar10 < 0 && (uVar10 & 3) != 0) +
                ((int)param_4 >> 2) + (uint)((int)param_4 < 0 && (param_4 & 3) != 0);
        param_1[0xe2b] = iVar7;
        param_1[0x14] = (uint)(iVar6 * 5) >> 2;
        param_1[0xe2a] = uVar10 + param_4;
        param_1[0xe2c] = iVar7;
        param_1[0xe4e] = ((int)uVar5 >> 2) + (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0);
      }
      else if (uVar11 == 0x3231564e) {
        param_1[0xe4e] = uVar5;
        param_4 = iVar6 * param_4;
        param_1[0x14] = 0;
        param_1[0xe2c] = 0;
        param_1[0x13] = ((param_5 ^ uVar2) - uVar2) * uVar5;
        param_1[0xe2a] = uVar10 + param_4;
        param_1[0xe2b] =
             ((int)param_4 >> 1) + (uint)((int)param_4 < 0 && (param_4 & 1) != 0) + uVar10;
      }
      goto LAB_82cd372c;
    }
  }
  else {
    if (uVar11 == 0x32323450) {
      uVar10 = iVar6 * param_4 + uVar10;
      param_1[0xe2a] = uVar10;
      iVar8 = ((param_5 ^ uVar2) - uVar2) * uVar5;
      param_1[0x13] = iVar8;
      iVar6 = ((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0);
      param_1[0xe2b] = iVar6;
      param_1[0xe2c] = iVar6;
      param_1[0x14] = (uint)(iVar8 * 3) >> 1;
      param_1[0xe4e] = iVar7 + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
      goto LAB_82cd372c;
    }
    if (uVar11 != 0x56555949) goto LAB_82cd372c;
  }
  param_4 = iVar6 * param_4;
  iVar6 = ((param_5 ^ uVar2) - uVar2) * uVar5;
  param_1[0x13] = iVar6;
  iVar8 = ((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0) +
          ((int)param_4 >> 2) + (uint)((int)param_4 < 0 && (param_4 & 3) != 0);
  param_1[0xe2b] = iVar8;
  param_1[0x14] = (uint)(iVar6 * 5) >> 2;
  param_1[0xe2a] = uVar10 + param_4;
  param_1[0xe2c] = iVar8;
  param_1[0xe4e] = iVar7 + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
LAB_82cd372c:
  uVar4 = (ulonglong)(uint)param_1[0xe38];
  uVar5 = param_1[0xe25];
  trapWord(6,uVar4,0);
  uVar11 = (uint)(uVar5 / uVar4) & 0xfffffffe;
  param_1[0x15] = uVar11;
  if ((uVar5 / uVar4 & 2) != 0) {
    param_1[0x15] = uVar11 - 2;
  }
  if (uVar4 == 1) {
    param_1[0x15] = uVar5;
  }
  uVar11 = uVar5;
  if (uVar4 != 2) {
    uVar11 = param_1[0x15] << 1;
  }
  param_1[0x16] = uVar11;
  if (uVar4 == 4) {
    param_1[0x17] = param_1[0x15] * 3;
  }
  else {
    param_1[0x17] = uVar5;
  }
  return;
}

