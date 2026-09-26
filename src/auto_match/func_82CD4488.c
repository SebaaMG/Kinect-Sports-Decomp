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
extern int fn_82CD31A8();


void fn_82CD4488(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 0x10);
  if (0x32323450 < uVar2) {
    if (uVar2 < 0x5655594a) {
      if (uVar2 == 0x56555949) goto LAB_82cd4520;
      if ((uVar2 == 0x32595559) || (uVar2 == 0x55595659)) goto LAB_82cd4550;
    }
    else if (uVar2 == 0x59565955) {
LAB_82cd4550:
      param_1[3] = 0;
    }
    goto LAB_82cd4554;
  }
  if (uVar2 == 0x32323450) {
LAB_82cd4520:
    param_1[3] = 1;
  }
  else if (uVar2 < 0x3032344a) {
    if (uVar2 == 0x30323449) goto LAB_82cd4520;
    if ((uVar2 == 0) || (uVar2 == 3)) goto LAB_82cd4550;
  }
  else if ((uVar2 == 0x31313450) || (uVar2 == 0x32315659)) goto LAB_82cd4520;
LAB_82cd4554:
  iVar3 = param_1[1];
  uVar2 = *(uint *)(iVar3 + 0x10);
  if (0x32315659 < uVar2) {
    if (uVar2 < 0x5559565a) {
      if (uVar2 != 0x55595659) {
        if (uVar2 == 0x32323450) goto LAB_82cd45a0;
        if (uVar2 != 0x32595559) goto LAB_82cd45a4;
      }
    }
    else {
      if (uVar2 == 0x56555949) goto LAB_82cd45a0;
      if (uVar2 != 0x59565955) goto LAB_82cd45a4;
    }
LAB_82cd45f4:
    param_1[4] = 0;
    goto LAB_82cd45a4;
  }
  if (uVar2 == 0x32315659) {
LAB_82cd45a0:
    param_1[4] = 1;
  }
  else if (uVar2 < 0x3032344a) {
    if (uVar2 == 0x30323449) goto LAB_82cd45a0;
    if ((uVar2 == 0) || (uVar2 == 3)) goto LAB_82cd45f4;
  }
  else if ((uVar2 == 0x31313450) || (uVar2 == 0x3231564e)) goto LAB_82cd45a0;
LAB_82cd45a4:
  param_1[2] = iVar1;
  if ((*(int *)(iVar1 + 0x10) == 0) || (*(int *)(iVar1 + 0x10) == 3)) {
    iVar6 = -1;
    if (*(int *)(iVar1 + 8) < 1) {
      iVar6 = 1;
    }
    param_1[0xe22] = iVar6;
  }
  else {
    param_1[0xe22] = 1;
  }
  param_1[0xe2d] = *(int *)(iVar1 + 4);
  uVar2 = (int)*(uint *)(iVar1 + 8) >> 0x1f;
  param_1[0xe2e] = (*(uint *)(iVar1 + 8) ^ uVar2) - uVar2;
  uVar2 = *(uint *)(iVar1 + 0x10);
  if (uVar2 < 0x3231565a) {
    if ((uVar2 == 0x32315659) || (uVar2 == 0x30323449)) {
LAB_82cd466c:
      uVar2 = param_1[0xe2d];
      bVar7 = (int)uVar2 < 0 && (uVar2 & 1) != 0;
      iVar6 = (int)uVar2 >> 1;
    }
    else {
      if (uVar2 != 0x31313450) goto LAB_82cd467c;
      uVar2 = param_1[0xe2d];
      bVar7 = (int)uVar2 < 0 && (uVar2 & 3) != 0;
      iVar6 = (int)uVar2 >> 2;
    }
    param_1[0xe2f] = iVar6 + (uint)bVar7;
  }
  else if ((uVar2 == 0x32323450) || (uVar2 == 0x56555949)) goto LAB_82cd466c;
LAB_82cd467c:
  if ((*(int *)(iVar3 + 0x10) == 0) || (*(int *)(iVar3 + 0x10) == 3)) {
    iVar6 = -1;
    if (*(int *)(iVar3 + 8) < 1) {
      iVar6 = 1;
    }
    param_1[0xe23] = iVar6;
  }
  else {
    param_1[0xe23] = 1;
  }
  param_1[0xe24] = *(int *)(iVar3 + 4);
  uVar2 = (int)*(uint *)(iVar3 + 8) >> 0x1f;
  param_1[0xe25] = (*(uint *)(iVar3 + 8) ^ uVar2) - uVar2;
  uVar2 = *(uint *)(iVar3 + 0x10);
  if (uVar2 < 0x3231565a) {
    if ((uVar2 == 0x32315659) || (uVar2 == 0x30323449)) goto LAB_82cd471c;
    if (uVar2 != 0x31313450) {
      if (uVar2 == 0x3231564e) {
        param_1[0xe26] = param_1[0xe24];
      }
      goto LAB_82cd472c;
    }
    uVar2 = param_1[0xe24];
    bVar7 = (int)uVar2 < 0 && (uVar2 & 3) != 0;
    iVar6 = (int)uVar2 >> 2;
  }
  else {
    if ((uVar2 != 0x32323450) && (uVar2 != 0x56555949)) goto LAB_82cd472c;
LAB_82cd471c:
    uVar2 = param_1[0xe24];
    bVar7 = (int)uVar2 < 0 && (uVar2 & 1) != 0;
    iVar6 = (int)uVar2 >> 1;
  }
  param_1[0xe26] = iVar6 + (uint)bVar7;
LAB_82cd472c:
  iVar6 = param_1[0xe42];
  if (iVar6 == 0) {
    iVar6 = *(int *)(iVar3 + 8);
  }
  iVar4 = param_1[0xe41];
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 4);
  }
  iVar3 = param_1[0xe40];
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 8);
  }
  iVar5 = param_1[0xe3f];
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar1 + 4);
  }
  fn_82CD31A8(param_1,iVar5,iVar3,iVar4,iVar6);
  return;
}

