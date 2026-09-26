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


void fn_828C9378(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  uint uVar7;
  
  iVar1 = (int)param_3 - (int)param_1 >> 3;
  if (iVar1 < 0x29) {
    uVar4 = *param_2;
    if (uVar4 < *param_1) {
      *param_2 = *param_1;
      *param_1 = uVar4;
    }
    uVar4 = *param_3;
    if (uVar4 < *param_2) {
      *param_3 = *param_2;
      *param_2 = uVar4;
    }
    uVar4 = *param_2;
    if (*param_1 <= uVar4) {
      return;
    }
    *param_2 = *param_1;
    *param_1 = uVar4;
    return;
  }
  uVar7 = iVar1 + 1;
  uVar4 = (longlong)((int)uVar7 >> 3) + (ulonglong)((int)uVar7 < 0 && (uVar7 & 7) != 0);
  iVar1 = (int)((uVar4 & 0x1fffffff) << 3);
  uVar5 = *(ulonglong *)(iVar1 + (int)param_1);
  if (uVar5 < *param_1) {
    *(ulonglong *)(iVar1 + (int)param_1) = *param_1;
    *param_1 = uVar5;
  }
  iVar2 = (int)((uVar4 & 0xfffffff) << 4);
  uVar4 = *(ulonglong *)(iVar2 + (int)param_1);
  if (uVar4 < *(ulonglong *)(iVar1 + (int)param_1)) {
    *(ulonglong *)(iVar2 + (int)param_1) = *(ulonglong *)(iVar1 + (int)param_1);
    *(ulonglong *)(iVar1 + (int)param_1) = uVar4;
  }
  uVar4 = *(ulonglong *)(iVar1 + (int)param_1);
  if (uVar4 < *param_1) {
    *(ulonglong *)(iVar1 + (int)param_1) = *param_1;
    *param_1 = uVar4;
  }
  puVar3 = (ulonglong *)((int)param_2 - iVar1);
  uVar4 = *param_2;
  if (uVar4 < *puVar3) {
    *param_2 = *puVar3;
    *puVar3 = uVar4;
  }
  uVar4 = *(ulonglong *)(iVar1 + (int)param_2);
  if (uVar4 < *param_2) {
    *(ulonglong *)(iVar1 + (int)param_2) = *param_2;
    *param_2 = uVar4;
  }
  uVar4 = *param_2;
  if (uVar4 < *puVar3) {
    *param_2 = *puVar3;
    *puVar3 = uVar4;
  }
  puVar6 = (ulonglong *)((int)param_3 - iVar1);
  puVar3 = (ulonglong *)((int)param_3 - iVar2);
  uVar4 = *puVar6;
  if (uVar4 < *puVar3) {
    *puVar6 = *puVar3;
    *puVar3 = uVar4;
  }
  uVar4 = *param_3;
  if (uVar4 < *puVar6) {
    *param_3 = *puVar6;
    *puVar6 = uVar4;
  }
  uVar4 = *puVar6;
  if (uVar4 < *puVar3) {
    *puVar6 = *puVar3;
    *puVar3 = uVar4;
  }
  uVar4 = *param_2;
  if (uVar4 < *(ulonglong *)(iVar1 + (int)param_1)) {
    *param_2 = *(ulonglong *)(iVar1 + (int)param_1);
    *(ulonglong *)(iVar1 + (int)param_1) = uVar4;
  }
  uVar4 = *puVar6;
  if (uVar4 < *param_2) {
    *puVar6 = *param_2;
    *param_2 = uVar4;
  }
  uVar4 = *param_2;
  if (*(ulonglong *)(iVar1 + (int)param_1) <= uVar4) {
    return;
  }
  *param_2 = *(ulonglong *)(iVar1 + (int)param_1);
  *(ulonglong *)(iVar1 + (int)param_1) = uVar4;
  return;
}

