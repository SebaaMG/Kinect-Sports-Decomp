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


void fn_82EDEBE8(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  ulonglong uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  iVar8 = *param_1;
  param_1[0xe47] = param_2;
  if (3 < *(uint *)(iVar8 + 0x10)) {
    param_3 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
  }
  param_1[0xe48] = param_3;
  iVar1 = param_1[1];
  param_1[0xe49] = param_4;
  if (3 < *(uint *)(iVar1 + 0x10)) {
    param_5 = (param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f);
  }
  uVar6 = param_1[0xe53];
  param_1[0xe4a] = param_5;
  if (uVar6 == 0) {
    param_1[0xe2f] =
         ((int)(*(ushort *)(iVar8 + 0xe) * param_2 + 0x1f & 0xffffffe0) >> 3) * param_1[0xe21];
  }
  else {
    param_1[0xe2f] = uVar6;
    param_1[0xe21] = 1;
  }
  uVar12 = param_1[0xe2f];
  param_1[0xe30] = uVar12 << 1;
  uVar2 = (int)param_3 >> 0x1f;
  uVar11 = (int)uVar12 >> 0x1f;
  if (param_1[0xe21] == 1) {
    iVar9 = 0;
  }
  else {
    iVar9 = (((param_3 ^ uVar2) - uVar2) + -1) * ((uVar12 ^ uVar11) - uVar11);
  }
  uVar3 = param_1[0xe4b];
  param_1[0xd] = iVar9;
  uVar10 = *(ushort *)(iVar8 + 0xe) * uVar3;
  uVar4 = param_1[0xe4c];
  param_1[0xe31] =
       ((int)uVar10 >> 3) + (uint)((int)uVar10 < 0 && (uVar10 & 7) != 0) + uVar4 * uVar12;
  if (param_1[0xe45] != 0) {
    if (param_1[0xe21] == 1) {
      uVar11 = param_1[0xe41] * (uint)*(ushort *)(iVar8 + 0xe);
      iVar9 = param_1[0xe42] * uVar12;
      iVar7 = ((int)uVar11 >> 3) + (uint)((int)uVar11 < 0 && (uVar11 & 7) != 0);
    }
    else {
      uVar10 = param_1[0xe41] * (uint)*(ushort *)(iVar8 + 0xe);
      iVar7 = (((param_3 ^ uVar2) - uVar2) + (-1 - param_1[0xe42])) * ((uVar12 ^ uVar11) - uVar11);
      iVar9 = ((int)uVar10 >> 3) + (uint)((int)uVar10 < 0 && (uVar10 & 7) != 0);
    }
    param_1[0xd] = iVar7 + iVar9;
  }
  if (uVar6 == 0) {
    uVar6 = param_2;
  }
  uVar12 = *(uint *)(iVar8 + 0x10);
  iVar8 = (int)uVar3 >> 1;
  if (uVar12 < 0x3231565a) {
    if (uVar12 == 0x32315659) {
      uVar12 = uVar4 * param_2;
      iVar9 = ((param_3 ^ uVar2) - uVar2) * uVar6;
      param_1[0x10] = iVar9;
      iVar7 = iVar8 + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0) +
              ((int)uVar12 >> 2) + (uint)((int)uVar12 < 0 && (uVar12 & 3) != 0);
      iVar8 = 1;
      bVar13 = (int)uVar6 < 0 && (uVar6 & 1) != 0;
      uVar12 = (uint)(iVar9 * 5) >> 2;
LAB_82edeff4:
      param_1[0xf] = uVar12;
LAB_82edeff8:
      param_1[0xe32] = uVar3 + uVar4 * param_2;
      param_1[0xe55] = ((int)uVar6 >> iVar8) + (uint)bVar13;
      goto LAB_82edf008;
    }
    if (0x3131564e < uVar12) {
      if (uVar12 != 0x3231564e) goto LAB_82edf014;
      param_1[0xe55] = uVar6;
      uVar4 = uVar4 * param_2;
      param_1[0x10] = 0;
      param_1[0xe34] = 0;
      param_1[0xf] = ((param_3 ^ uVar2) - uVar2) * uVar6;
      param_1[0xe32] = uVar3 + uVar4;
      param_1[0xe33] = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0) + uVar3;
      goto LAB_82edf010;
    }
    if (uVar12 == 0x3131564e) {
      iVar9 = param_1[0xe51];
      if (iVar9 == 0) {
        iVar9 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
      }
      param_1[0xe55] = iVar9;
      param_1[0x10] = 0;
      param_1[0xe34] = 0;
      param_1[0xf] = param_3 * uVar6;
      param_1[0xe32] = uVar4 * param_2 + uVar3;
      param_1[0xe33] = uVar4 * iVar9 + iVar8 + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
      goto LAB_82edf010;
    }
    if (uVar12 == 0x30323449) goto LAB_82edef18;
    if (uVar12 == 0x31313450) {
      iVar8 = param_1[0xe51];
      if (iVar8 == 0) {
        iVar8 = ((int)uVar6 >> 2) + (uint)((int)uVar6 < 0 && (uVar6 & 3) != 0);
      }
      param_1[0xe55] = iVar8;
      param_1[0xf] = param_3 * uVar6;
      iVar7 = uVar4 * iVar8 + ((int)uVar3 >> 2) + (uint)((int)uVar3 < 0 && (uVar3 & 3) != 0);
      param_1[0x10] = iVar8 * param_3 + param_3 * uVar6;
      param_1[0xe32] = uVar4 * param_2 + uVar3;
      goto LAB_82edf008;
    }
  }
  else {
    if (uVar12 == 0x39555659) {
      uVar12 = uVar4 * param_2;
      iVar9 = ((param_3 ^ uVar2) - uVar2) * uVar6;
      param_1[0x10] = iVar9;
      iVar7 = ((int)uVar3 >> 2) + (uint)((int)uVar3 < 0 && (uVar3 & 3) != 0) +
              ((int)uVar12 >> 4) + (uint)((int)uVar12 < 0 && (uVar12 & 0xf) != 0);
      iVar8 = 2;
      bVar13 = (int)uVar6 < 0 && (uVar6 & 3) != 0;
      uVar12 = (uint)(iVar9 * 0x11) >> 4;
      goto LAB_82edeff4;
    }
    if (uVar12 == 0x50343232) {
      uVar12 = uVar4 * param_2;
      iVar9 = ((param_3 ^ uVar2) - uVar2) * uVar6;
      param_1[0xf] = iVar9;
      iVar7 = iVar8 + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0) +
              ((int)uVar12 >> 2) + (uint)((int)uVar12 < 0 && (uVar12 & 3) != 0);
      iVar8 = 1;
      bVar13 = (int)uVar6 < 0 && (uVar6 & 1) != 0;
      param_1[0x10] = (uint)(iVar9 * 3) >> 1;
      goto LAB_82edeff8;
    }
    if (uVar12 != 0x56555949) goto LAB_82edf014;
LAB_82edef18:
    iVar9 = param_1[0xe51];
    if (iVar9 == 0) {
      iVar9 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    }
    uVar12 = iVar9 * param_3;
    param_1[0xe55] = iVar9;
    param_1[0xf] = param_3 * uVar6;
    iVar7 = (((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0)) * iVar9 +
            iVar8 + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
    param_1[0x10] =
         ((int)uVar12 >> 1) + (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0) + param_3 * uVar6;
    param_1[0xe32] = uVar4 * param_2 + uVar3;
LAB_82edf008:
    param_1[0xe33] = iVar7;
    param_1[0xe34] = iVar7;
LAB_82edf010:
    param_1[0xe] = 0;
  }
LAB_82edf014:
  uVar6 = param_1[0xe54];
  if (uVar6 == 0) {
    param_1[0xe26] =
         ((int)(*(ushort *)(iVar1 + 0xe) * param_4 + 0x1f & 0xffffffe0) >> 3) * param_1[0xe22];
  }
  else {
    param_1[0xe26] = uVar6;
    param_1[0xe22] = 1;
  }
  uVar12 = param_1[0xe26];
  param_1[0xe27] = uVar12 << 1;
  uVar2 = (int)param_5 >> 0x1f;
  if (param_1[0xe22] == 1) {
    iVar8 = 0;
  }
  else {
    iVar8 = (((param_5 ^ uVar2) - uVar2) + -1) *
            ((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f));
  }
  iVar9 = param_1[0xe4e];
  param_1[0x11] = iVar8;
  uVar11 = param_1[0xe4d];
  uVar3 = *(ushort *)(iVar1 + 0xe) * uVar11;
  param_1[0xe28] = ((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0) + iVar9 * uVar12;
  if (uVar6 == 0) {
    uVar6 = param_4;
  }
  uVar12 = *(uint *)(iVar1 + 0x10);
  iVar1 = (int)uVar6 >> 1;
  iVar8 = (int)uVar11 >> 1;
  if (uVar12 < 0x3231565a) {
    if (uVar12 == 0x32315659) {
      param_4 = iVar9 * param_4;
      iVar9 = ((param_5 ^ uVar2) - uVar2) * uVar6;
      param_1[0x13] = iVar9;
      iVar8 = iVar8 + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0) +
              ((int)param_4 >> 2) + (uint)((int)param_4 < 0 && (param_4 & 3) != 0);
      param_1[0xe2b] = iVar8;
      param_1[0x12] = (uint)(iVar9 * 5) >> 2;
      param_1[0xe29] = uVar11 + param_4;
      param_1[0xe2a] = iVar8;
      param_1[0xe56] = iVar1 + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
      goto LAB_82edf28c;
    }
    if (uVar12 == 0x30323449) goto LAB_82edf1e4;
    if (uVar12 != 0x3131564e) {
      if (uVar12 == 0x3231564e) {
        param_1[0x13] = 0;
        param_4 = iVar9 * param_4;
        param_1[0xe2b] = 0;
        param_1[0xe56] = uVar6;
        param_1[0x12] = ((param_5 ^ uVar2) - uVar2) * uVar6;
        param_1[0xe29] = uVar11 + param_4;
        param_1[0xe2a] =
             ((int)param_4 >> 1) + (uint)((int)param_4 < 0 && (param_4 & 1) != 0) + uVar11;
      }
      goto LAB_82edf28c;
    }
    param_1[0x13] = 0;
    param_1[0xe2b] = 0;
    param_4 = iVar9 * param_4;
    bVar13 = (int)uVar6 < 0 && (uVar6 & 1) != 0;
    param_1[0x12] = ((param_5 ^ uVar2) - uVar2) * uVar6;
    param_1[0xe29] = uVar11 + param_4;
    param_1[0xe2a] =
         iVar8 + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0) +
         ((int)param_4 >> 1) + (uint)((int)param_4 < 0 && (param_4 & 1) != 0);
  }
  else {
    if (uVar12 != 0x50343232) {
      if (uVar12 != 0x56555949) goto LAB_82edf28c;
LAB_82edf1e4:
      param_4 = iVar9 * param_4;
      iVar9 = ((param_5 ^ uVar2) - uVar2) * uVar6;
      param_1[0x12] = iVar9;
      iVar8 = iVar8 + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0) +
              ((int)param_4 >> 2) + (uint)((int)param_4 < 0 && (param_4 & 3) != 0);
      param_1[0xe2a] = iVar8;
      param_1[0x13] = (uint)(iVar9 * 5) >> 2;
      param_1[0xe29] = uVar11 + param_4;
      param_1[0xe2b] = iVar8;
      param_1[0xe56] = iVar1 + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
      goto LAB_82edf28c;
    }
    uVar11 = iVar9 * param_4 + uVar11;
    param_1[0xe29] = uVar11;
    iVar9 = ((param_5 ^ uVar2) - uVar2) * uVar6;
    param_1[0x12] = iVar9;
    iVar8 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
    bVar13 = (int)uVar6 < 0 && (uVar6 & 1) != 0;
    param_1[0xe2a] = iVar8;
    param_1[0xe2b] = iVar8;
    param_1[0x13] = (uint)(iVar9 * 3) >> 1;
  }
  param_1[0xe56] = iVar1 + (uint)bVar13;
LAB_82edf28c:
  uVar5 = (ulonglong)(uint)param_1[0xe37];
  uVar6 = param_1[0xe24];
  trapWord(6,uVar5,0);
  uVar12 = (uint)(uVar6 / uVar5) & 0xfffffffe;
  param_1[0x14] = uVar12;
  if ((uVar6 / uVar5 & 2) != 0) {
    param_1[0x14] = uVar12 - 2;
  }
  if (uVar5 == 1) {
    param_1[0x14] = uVar6;
  }
  uVar12 = uVar6;
  if (uVar5 != 2) {
    uVar12 = param_1[0x14] << 1;
  }
  param_1[0x15] = uVar12;
  if (uVar5 == 4) {
    param_1[0x16] = param_1[0x14] * 3;
  }
  else {
    param_1[0x16] = uVar6;
  }
  return;
}

