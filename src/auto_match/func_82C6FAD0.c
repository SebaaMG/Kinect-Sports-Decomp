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
extern int fn_82C53960();
extern int fn_82C53970();


undefined8 fn_82C6FAD0(int *param_1,ulonglong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if ((iVar2 < 1) || ((int)param_3 < 1)) {
    return 0xfffffffffffffffd;
  }
  if (param_1[5] == 0) {
LAB_82c6fb28:
    iVar1 = fn_82C53960(((ulonglong)param_3 & 0x3fffffff) << 2,0);
    param_1[5] = iVar1;
    if (iVar1 == 0) goto LAB_82c6fcc0;
  }
  else if (param_1[1] < (int)param_3) {
    if (param_1[5] != 0) {
      fn_82C53970();
      param_1[5] = 0;
    }
    goto LAB_82c6fb28;
  }
  if (param_1[6] == 0) {
LAB_82c6fb68:
    iVar1 = fn_82C53960(((ulonglong)param_3 & 0x3fffffff) << 2,0);
    param_1[6] = iVar1;
    if (iVar1 == 0) goto LAB_82c6fcc0;
  }
  else if (param_1[1] < (int)param_3) {
    if (param_1[6] != 0) {
      fn_82C53970();
      param_1[6] = 0;
    }
    goto LAB_82c6fb68;
  }
  if (param_1[7] == 0) {
LAB_82c6fba8:
    iVar1 = fn_82C53960(((ulonglong)param_3 & 0x3fffffff) << 2,0);
    param_1[7] = iVar1;
    if (iVar1 == 0) goto LAB_82c6fcc0;
  }
  else if (param_1[1] < (int)param_3) {
    if (param_1[7] != 0) {
      fn_82C53970();
      param_1[7] = 0;
    }
    goto LAB_82c6fba8;
  }
  if (param_1[8] == 0) {
LAB_82c6fbe8:
    iVar1 = fn_82C53960(((ulonglong)param_3 & 0x3fffffff) << 2,0);
    param_1[8] = iVar1;
    if (iVar1 == 0) goto LAB_82c6fcc0;
  }
  else if (param_1[1] < (int)param_3) {
    if (param_1[8] != 0) {
      fn_82C53970();
      param_1[8] = 0;
    }
    goto LAB_82c6fbe8;
  }
  if (param_1[0xf] == 0) {
LAB_82c6fc28:
    iVar1 = fn_82C53960(param_2,0);
    param_1[0xf] = iVar1;
    if (iVar1 == 0) goto LAB_82c6fcc0;
  }
  else if (*param_1 < iVar2) {
    if (param_1[0xf] != 0) {
      fn_82C53970();
      param_1[0xf] = 0;
    }
    goto LAB_82c6fc28;
  }
  if (param_1[0x10] == 0) {
LAB_82c6fc68:
    iVar1 = fn_82C53960((param_2 & 0x3fffffff) << 2,0);
    param_1[0x10] = iVar1;
    if (iVar1 == 0) goto LAB_82c6fcc0;
  }
  else if (*param_1 < iVar2) {
    if (param_1[0x10] != 0) {
      fn_82C53970();
      param_1[0x10] = 0;
    }
    goto LAB_82c6fc68;
  }
  if (param_1[0x11] != 0) {
    if (iVar2 <= *param_1) {
      return 0;
    }
    if (param_1[0x11] != 0) {
      fn_82C53970();
      param_1[0x11] = 0;
    }
  }
  iVar2 = fn_82C53960((param_2 & 0x3fffffff) << 2,0);
  param_1[0x11] = iVar2;
  if (iVar2 != 0) {
    return 0;
  }
LAB_82c6fcc0:
  if (param_1[5] != 0) {
    fn_82C53970();
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    fn_82C53970();
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    fn_82C53970();
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    fn_82C53970();
    param_1[8] = 0;
  }
  if (param_1[0xf] != 0) {
    fn_82C53970();
    param_1[0xf] = 0;
  }
  if (param_1[0x10] != 0) {
    fn_82C53970();
    param_1[0x10] = 0;
  }
  if (param_1[0x11] != 0) {
    fn_82C53970();
    param_1[0x11] = 0;
  }
  return 0xfffffffffffffff7;
}

