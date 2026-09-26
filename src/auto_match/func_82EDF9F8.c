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
extern int fn_82EDEBE8();


void fn_82EDF9F8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = *param_1;
  uVar6 = (ulonglong)*(uint *)(iVar1 + 0x10);
  if (uVar6 < 0x41595557) {
    if (uVar6 == 0x41595556) goto LAB_82edfb68;
    if (0x3131564e < uVar6) {
      if (uVar6 < 0x3259555a) {
        if (uVar6 == 0x32595559) goto LAB_82edfb68;
        if ((uVar6 - 0x3231564e == 0) || ((uVar6 - 0x3231564e & 0xffffffff) == 0xb))
        goto LAB_82edfabc;
      }
      else if (uVar6 == 0x39555659) goto LAB_82edfabc;
      goto LAB_82edfb6c;
    }
    if (uVar6 == 0x3131564e) {
LAB_82edfabc:
      param_1[3] = 1;
    }
    else if (uVar6 < 0x3032344a) {
      if (uVar6 == 0x30323449) goto LAB_82edfabc;
      if ((uVar6 == 0) || (uVar6 == 3)) goto LAB_82edfb68;
    }
    else if (uVar6 == 0x31313450) goto LAB_82edfabc;
    goto LAB_82edfb6c;
  }
  if (0x55595659 < uVar6) {
    if (uVar6 < 0x5655594a) {
      if (uVar6 == 0x56555949) goto LAB_82edfabc;
      if ((uVar6 == 0x56323136) || (uVar6 == 0x56343130)) goto LAB_82edfb68;
    }
    else if (uVar6 == 0x59565955) goto LAB_82edfb68;
    goto LAB_82edfb6c;
  }
  if (uVar6 == 0x55595659) {
LAB_82edfb68:
    param_1[3] = 0;
  }
  else if (uVar6 < 0x5431345a) {
    if ((uVar6 == 0x54313459) || (uVar6 == 0x50313459)) goto LAB_82edfb68;
    if (uVar6 == 0x50343232) goto LAB_82edfabc;
  }
  else if (uVar6 == 0x54323459) goto LAB_82edfb68;
LAB_82edfb6c:
  iVar2 = param_1[1];
  uVar6 = (ulonglong)*(uint *)(iVar2 + 0x10);
  if (uVar6 < 0x3259555a) {
    if (uVar6 == 0x32595559) goto LAB_82edfbec;
    if (uVar6 < 0x31313451) {
      if (uVar6 != 0x31313450) {
        if ((uVar6 == 0) || (uVar6 == 3)) goto LAB_82edfbec;
        if (uVar6 != 0x30323449) goto LAB_82edfbf0;
      }
LAB_82edfba4:
      param_1[4] = 1;
    }
    else if (((uVar6 == 0x3131564e) || (uVar6 - 0x3231564e == 0)) ||
            ((uVar6 - 0x3231564e & 0xffffffff) == 0xb)) goto LAB_82edfba4;
  }
  else {
    if (uVar6 < 0x56323137) {
      if ((uVar6 != 0x56323136) && (uVar6 != 0x41595556)) {
        if (uVar6 == 0x50343232) goto LAB_82edfba4;
        if (uVar6 != 0x55595659) goto LAB_82edfbf0;
      }
    }
    else if (uVar6 != 0x56343130) {
      if (uVar6 == 0x56555949) goto LAB_82edfba4;
      if (uVar6 != 0x59565955) goto LAB_82edfbf0;
    }
LAB_82edfbec:
    param_1[4] = 0;
  }
LAB_82edfbf0:
  param_1[2] = iVar1;
  if ((*(int *)(iVar1 + 0x10) == 0) || (*(int *)(iVar1 + 0x10) == 3)) {
    iVar7 = -1;
    if (*(int *)(iVar1 + 8) < 1) {
      iVar7 = 1;
    }
    param_1[0xe21] = iVar7;
  }
  else {
    param_1[0xe21] = 1;
  }
  param_1[0xe2c] = *(int *)(iVar1 + 4);
  uVar5 = (int)*(uint *)(iVar1 + 8) >> 0x1f;
  param_1[0xe2d] = (*(uint *)(iVar1 + 8) ^ uVar5) - uVar5;
  uVar5 = *(uint *)(iVar1 + 0x10);
  if (uVar5 < 0x3231565a) {
    if (uVar5 == 0x32315659) {
LAB_82edfcec:
      uVar5 = param_1[0xe2c];
      bVar8 = (int)uVar5 < 0 && (uVar5 & 1) != 0;
      iVar7 = (int)uVar5 >> 1;
      goto LAB_82edfc9c;
    }
    if (uVar5 < 0x3131564f) {
      if ((uVar5 == 0x3131564e) || (uVar5 == 0x30323449)) goto LAB_82edfcec;
      if (uVar5 == 0x31313450) goto LAB_82edfc94;
    }
    else if (uVar5 == 0x3231564e) {
      param_1[0xe2e] = param_1[0xe2c];
    }
  }
  else {
    if (uVar5 != 0x39555659) {
      if ((uVar5 != 0x50343232) && (uVar5 != 0x56555949)) goto LAB_82edfca4;
      goto LAB_82edfcec;
    }
LAB_82edfc94:
    uVar5 = param_1[0xe2c];
    bVar8 = (int)uVar5 < 0 && (uVar5 & 3) != 0;
    iVar7 = (int)uVar5 >> 2;
LAB_82edfc9c:
    param_1[0xe2e] = iVar7 + (uint)bVar8;
  }
LAB_82edfca4:
  if ((*(int *)(iVar2 + 0x10) == 0) || (*(int *)(iVar2 + 0x10) == 3)) {
    iVar7 = -1;
    if (*(int *)(iVar2 + 8) < 1) {
      iVar7 = 1;
    }
    param_1[0xe22] = iVar7;
  }
  else {
    param_1[0xe22] = 1;
  }
  param_1[0xe23] = *(int *)(iVar2 + 4);
  uVar5 = (int)*(uint *)(iVar2 + 8) >> 0x1f;
  param_1[0xe24] = (*(uint *)(iVar2 + 8) ^ uVar5) - uVar5;
  uVar6 = (ulonglong)*(uint *)(iVar2 + 0x10);
  if (uVar6 < 0x3231564f) {
    if (uVar6 == 0x3231564e) {
      param_1[0xe25] = param_1[0xe23];
      goto LAB_82edfd88;
    }
    if ((uVar6 != 0x30323449) && (uVar6 - 0x31313450 != 0)) {
      bVar8 = (uVar6 - 0x31313450 & 0xffffffff) == 0x21fe;
      goto LAB_82edfd74;
    }
  }
  else if ((uVar6 != 0x32315659) && (uVar6 != 0x50343232)) {
    bVar8 = uVar6 == 0x56555949;
LAB_82edfd74:
    if (!bVar8) goto LAB_82edfd88;
  }
  uVar5 = param_1[0xe23];
  param_1[0xe25] = ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
LAB_82edfd88:
  iVar7 = param_1[0xe4a];
  if (iVar7 == 0) {
    iVar7 = *(int *)(iVar2 + 8);
  }
  iVar3 = param_1[0xe49];
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar2 + 4);
  }
  iVar2 = param_1[0xe48];
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  iVar4 = param_1[0xe47];
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar1 + 4);
  }
  fn_82EDEBE8(param_1,iVar4,iVar2,iVar3,iVar7);
  return;
}

