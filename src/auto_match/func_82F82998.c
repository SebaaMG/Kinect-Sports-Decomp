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
extern unsigned int *auStack_30;
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F883D0();
extern unsigned int lbl_83263398;
extern unsigned int lbl_832636E4;


undefined4 *
fn_82F82998(undefined8 param_1,ushort *param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 auStack_30 [12];
  
  bVar2 = false;
  bVar1 = false;
  uVar7 = *param_2;
  while (uVar7 == 0x20) {
    param_2 = param_2 + 1;
    uVar7 = *param_2;
  }
  if (uVar7 == 0x61) {
    uVar5 = 0x109;
  }
  else {
    if (uVar7 == 0x72) {
      uVar5 = 0;
      uVar8 = lbl_832636E4 | 1;
      goto LAB_82f82a1c;
    }
    if (uVar7 != 0x77) goto LAB_82f829e8;
    uVar5 = 0x301;
  }
  uVar8 = lbl_832636E4 | 2;
LAB_82f82a1c:
  bVar6 = true;
LAB_82f82b48:
  param_2 = param_2 + 1;
  uVar7 = *param_2;
  if ((uVar7 == 0) || (!bVar6)) goto LAB_82f82b5c;
  if (uVar7 < 0x54) {
    if (uVar7 == 0x53) {
      if (!bVar1) {
        bVar1 = true;
        uVar5 = uVar5 | 0x20;
        goto LAB_82f82b48;
      }
    }
    else {
      if (uVar7 == 0x20) goto LAB_82f82b48;
      if (uVar7 == 0x2b) {
        if ((uVar5 & 2) == 0) {
          uVar5 = uVar5 & 0xfffffffe | 2;
          uVar8 = uVar8 & 0xfffffffc | 0x80;
          goto LAB_82f82b48;
        }
      }
      else if (uVar7 != 0x2c) {
        if (uVar7 == 0x44) {
          if ((uVar5 & 0x40) == 0) {
            uVar5 = uVar5 | 0x40;
            goto LAB_82f82b48;
          }
        }
        else {
          if (uVar7 == 0x4e) {
            uVar5 = uVar5 | 0x80;
            goto LAB_82f82b48;
          }
          if (uVar7 != 0x52) goto LAB_82f829e8;
          if (!bVar1) {
            bVar1 = true;
            uVar5 = uVar5 | 0x10;
            goto LAB_82f82b48;
          }
        }
      }
    }
  }
  else {
    if (uVar7 == 0x54) {
      if ((uVar5 & 0x1000) != 0) goto LAB_82f82b3c;
      uVar5 = uVar5 | 0x1000;
      goto LAB_82f82b48;
    }
    if (uVar7 == 0x62) {
      if ((uVar5 & 0xc000) == 0) {
        uVar5 = uVar5 | 0x8000;
        goto LAB_82f82b48;
      }
    }
    else if (uVar7 == 99) {
      if (!bVar2) {
        bVar2 = true;
        uVar8 = uVar8 | 0x4000;
        goto LAB_82f82b48;
      }
    }
    else {
      if (uVar7 == 0x6e) {
        if (bVar2) goto LAB_82f82b3c;
        bVar2 = true;
        uVar8 = uVar8 & 0xffffbfff;
        goto LAB_82f82b48;
      }
      if (uVar7 != 0x74) goto LAB_82f829e8;
      if ((uVar5 & 0xc000) == 0) {
        uVar5 = uVar5 | 0x4000;
        goto LAB_82f82b48;
      }
    }
  }
LAB_82f82b3c:
  bVar6 = false;
  goto LAB_82f82b48;
LAB_82f82b5c:
  while (uVar7 == 0x20) {
    param_2 = param_2 + 1;
    uVar7 = *param_2;
  }
  if (uVar7 == 0) {
    iVar4 = fn_82F883D0(auStack_30,param_1,uVar5,param_3,0x180);
    if (iVar4 != 0) {
      return (undefined4 *)0x0;
    }
    lbl_83263398 = lbl_83263398 + 1;
    param_4[3] = uVar8;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = auStack_30[0];
    return param_4;
  }
LAB_82f829e8:
  puVar3 = (undefined4 *)fn_82F68240();
  *puVar3 = 0x16;
  fn_82F63BA0();
  return (undefined4 *)0x0;
}

