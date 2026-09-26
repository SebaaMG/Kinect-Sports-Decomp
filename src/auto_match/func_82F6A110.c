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
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F704C8();
extern unsigned int lbl_831BBCA8;


ulonglong fn_82F6A110(byte *param_1,undefined4 *param_2,ulonglong param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  char cVar14;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if ((param_1 == (byte *)0x0) ||
     ((iVar11 = (int)param_3, iVar11 != 0 && ((iVar11 < 2 || (0x24 < iVar11)))))) {
    puVar4 = (undefined4 *)fn_82F68240();
    *puVar4 = 0x16;
    fn_82F63BA0();
    return 0;
  }
  bVar1 = *param_1;
  uVar10 = 0;
  pbVar3 = param_1;
  puVar7 = lbl_831BBCA8;
  while( true ) {
    uVar13 = (uint)bVar1;
    pbVar12 = pbVar3 + 1;
    if (*(int *)(puVar7 + 0xac) < 2) {
      uVar5 = *(ushort *)((uint)bVar1 * 2 + *(int *)(puVar7 + 200)) & 8;
    }
    else {
      uVar5 = fn_82F704C8(uVar13,8,0xffffffff831bbca8);
      puVar7 = lbl_831BBCA8;
    }
    if (uVar5 == 0) break;
    bVar1 = *pbVar12;
    pbVar3 = pbVar12;
  }
  if (bVar1 == 0x2d) {
    param_4 = param_4 | 2;
LAB_82f6a1e8:
    uVar13 = (uint)*pbVar12;
    pbVar12 = pbVar3 + 2;
  }
  else if (bVar1 == 0x2b) goto LAB_82f6a1e8;
  if (((iVar11 < 0) || (iVar11 == 1)) || (0x24 < iVar11)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (iVar11 == 0) {
    if ((char)uVar13 != '0') {
      param_3 = 10;
      goto LAB_82f6a280;
    }
    if ((*pbVar12 != 0x78) && (*pbVar12 != 0x58)) {
      param_3 = 8;
      goto LAB_82f6a280;
    }
    param_3 = 0x10;
  }
  else if (iVar11 != 0x10) goto LAB_82f6a280;
  if (((char)uVar13 == '0') && ((*pbVar12 == 0x78 || (*pbVar12 == 0x58)))) {
    uVar13 = (uint)pbVar12[1];
    pbVar12 = pbVar12 + 2;
  }
LAB_82f6a280:
  trapWord(6,param_3,0);
  uVar6 = 0xffffffff / (param_3 & 0xffffffff);
  do {
    uVar2 = *(ushort *)(uVar13 * 2 + *(int *)(puVar7 + 200));
    cVar14 = (char)uVar13;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) {
LAB_82f6a314:
        pbVar12 = pbVar12 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            pbVar12 = param_1;
          }
          uVar10 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < (uVar10 & 0xffffffff))) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < (uVar10 & 0xffffffff))))))))) {
          puVar4 = (undefined4 *)fn_82F68240();
          *puVar4 = 0x22;
          if ((param_4 & 1) == 0) {
            uVar10 = 0xffffffff80000000;
            if ((param_4 & 2) == 0) {
              uVar10 = 0x7fffffff;
            }
          }
          else {
            uVar10 = 0xffffffffffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = pbVar12;
        }
        if ((param_4 & 2) != 0) {
          return -uVar10;
        }
        return uVar10;
      }
      lVar9 = (longlong)cVar14;
      if (('`' < cVar14) && (cVar14 < '{')) {
        lVar9 = lVar9 + -0x20;
      }
      uVar8 = lVar9 - 0x37;
    }
    else {
      uVar8 = (longlong)cVar14 - 0x30;
    }
    if ((param_3 & 0xffffffff) <= (uVar8 & 0xffffffff)) goto LAB_82f6a314;
    uVar5 = param_4 | 8;
    if (((uVar10 & 0xffffffff) < uVar6) ||
       (((uVar10 & 0xffffffff) == uVar6 &&
        (trapWord(6,param_3,0),
        (uVar8 & 0xffffffff) <=
        (-((longlong)(int)(0xffffffff / (param_3 & 0xffffffff)) * (longlong)(int)param_3) - 1U &
        0xffffffff))))) {
      uVar10 = (longlong)(int)uVar10 * (longlong)(int)param_3 + uVar8;
    }
    else {
      param_4 = param_4 | 0xc;
      uVar5 = param_4;
      if (param_2 == (undefined4 *)0x0) goto LAB_82f6a314;
    }
    uVar13 = (uint)*pbVar12;
    pbVar12 = pbVar12 + 1;
    param_4 = uVar5;
  } while( true );
}

