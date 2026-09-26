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
extern unsigned int lbl_8204DD00;
extern unsigned int lbl_8204DD04;


undefined8 fn_8297F800(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((((param_2 == 0) || (*(int *)(param_2 + 4) != 9)) || (param_3 == 0)) ||
     (*(int *)(param_3 + 4) != 9)) {
    return 0xffffffff80004005;
  }
  iVar8 = *(int *)(param_2 + 0x14);
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar8 == iVar2) {
    *param_4 = iVar8;
    return 0;
  }
  uVar6 = *(uint *)(&lbl_8204DD00 + iVar8 * 8);
  if (*(uint *)(&lbl_8204DD00 + iVar8 * 8) <= *(uint *)(&lbl_8204DD00 + iVar2 * 8)) {
    uVar6 = *(uint *)(&lbl_8204DD00 + iVar2 * 8);
  }
  uVar3 = *(uint *)(&lbl_8204DD04 + iVar2 * 8);
  uVar4 = *(uint *)(&lbl_8204DD04 + iVar8 * 8);
  uVar5 = uVar4 & uVar3;
  if ((uVar5 & 1) != 0) {
    iVar8 = 0;
LAB_8297f888:
    *param_4 = iVar8;
    return 0;
  }
  if ((uVar5 & 0x20) != 0) {
    iVar8 = 1;
    goto LAB_8297f888;
  }
  if ((uVar5 & 4) == 0) {
    if ((uVar5 & 2) == 0) {
      if ((uVar5 & 8) == 0) {
        if ((uVar5 & 0x10) == 0) {
          return 0xffffffff80004005;
        }
        uVar6 = 0;
        while( true ) {
          iVar9 = iVar2;
          iVar7 = iVar8;
          if (uVar6 == 0) {
            iVar9 = iVar8;
            iVar7 = iVar2;
          }
          if (iVar7 == 0x16) break;
          if (iVar7 == 0x18) {
            if (0x17 < iVar9) {
              bVar1 = 0x1e < iVar9;
LAB_8297fa34:
              if (!bVar1) break;
            }
          }
          else if ((iVar7 == 0x21) && (0x20 < iVar9)) {
            bVar1 = 0x25 < iVar9;
            goto LAB_8297fa34;
          }
          uVar6 = uVar6 + 1;
          if (1 < uVar6) {
            return 0xffffffff80004005;
          }
        }
      }
      else if (uVar6 == 0) {
        iVar9 = 10;
      }
      else if ((uVar6 == 8) || (uVar6 == 0x10)) {
        iVar9 = 0xb;
      }
      else if (uVar6 == 0x20) {
        iVar9 = 0xc;
      }
      else {
        if (uVar6 != 0x40) {
          return 0;
        }
        iVar9 = 0xd;
      }
      goto LAB_8297f8fc;
    }
    if ((((iVar8 != 1) || ((uVar3 & 4) == 0)) || ((uVar3 & 1) != 0)) &&
       ((((uint)LZCOUNT(iVar2 + -1) >> 5 == 0 || ((uVar4 & 4) == 0)) || ((uVar4 & 1) != 0)))) {
      if (uVar6 == 0) {
        iVar9 = 2;
      }
      else if (uVar6 == 8) {
        iVar9 = 3;
      }
      else if (uVar6 == 0x10) {
        iVar9 = 4;
      }
      else {
        if ((uVar6 != 0x20) && (uVar6 != 0x40)) {
          return 0;
        }
        iVar9 = 5;
      }
      goto LAB_8297f8fc;
    }
  }
  if (uVar6 == 0) {
    iVar9 = 6;
  }
  else if (uVar6 == 8) {
    iVar9 = 7;
  }
  else if (uVar6 == 0x10) {
    iVar9 = 8;
  }
  else {
    if ((uVar6 != 0x20) && (uVar6 != 0x40)) {
      return 0;
    }
    iVar9 = 9;
  }
LAB_8297f8fc:
  *param_4 = iVar9;
  return 0;
}

