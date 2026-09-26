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
extern int fn_82D7EA10();
extern int fn_82F640B0();
extern int fn_82F68240();
extern int fn_82F6DF30();
extern int fn_82F70480();
extern int fn_82F70500();
extern unsigned int lbl_8216803C;


ulonglong fn_82F63788(ulonglong param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  int iVar2;
  uint uVar3;
  undefined8 uVar1;
  undefined4 *puVar4;
  char cVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *pbVar13;
  char *pcVar14;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar8 = 0;
  uVar10 = param_1;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  while( true ) {
    iVar2 = fn_82D7EA10();
    pbVar13 = (byte *)uVar10;
    if (iVar2 < 2) {
      iVar2 = fn_82F70480();
      uVar3 = *(ushort *)(iVar2 + (uint)*pbVar13 * 2) & 8;
    }
    else {
      uVar3 = fn_82F70500(*pbVar13,8);
    }
    if (uVar3 == 0) break;
    uVar10 = uVar10 + 1;
  }
  bVar7 = *pbVar13;
  if ((bVar7 == 0x2d) || (bVar7 == 0x2b)) {
    uVar10 = uVar10 + 1;
  }
  else {
    bVar7 = 0x2b;
  }
  if (((param_3 < 0) || (param_3 == 1)) || (0x24 < param_3)) goto LAB_82f639c8;
  pcVar14 = (char *)uVar10;
  if (param_3 < 1) {
    if (*pcVar14 == '0') {
      if ((pcVar14[1] == 'x') || (pcVar14[1] == 'X')) {
        param_3 = 0x10;
        goto LAB_82f638a8;
      }
      param_3 = 8;
    }
    else {
      param_3 = 10;
    }
  }
  else if (((param_3 == 0x10) && (*pcVar14 == '0')) && ((pcVar14[1] == 'x' || (pcVar14[1] == 'X'))))
  {
LAB_82f638a8:
    uVar10 = uVar10 + 2;
  }
  cVar5 = *(char *)uVar10;
  uVar11 = uVar10;
  while (cVar5 == '0') {
    uVar11 = uVar11 + 1;
    cVar5 = *(char *)uVar11;
  }
  uVar9 = 0;
  cVar5 = '\0';
  uVar1 = fn_82F6DF30();
  iVar2 = fn_82F640B0(0xffffffff82168014,uVar1,param_3);
  uVar12 = uVar11;
  if (iVar2 != 0) {
    do {
      uVar8 = uVar9;
      cVar5 = (char)iVar2 + -0x14;
      uVar12 = uVar12 + 1;
      uVar9 = (longlong)param_3 * uVar8 + (longlong)cVar5;
      uVar1 = fn_82F6DF30(*(undefined1 *)uVar12);
      iVar2 = fn_82F640B0(0xffffffff82168014,uVar1,param_3);
    } while (iVar2 != 0);
  }
  if ((uVar10 & 0xffffffff) != (uVar12 & 0xffffffff)) {
    lVar6 = (uVar12 - (longlong)(char)(&lbl_8216803C)[param_3]) - uVar11;
    if ((-1 < lVar6) &&
       (((0 < (int)lVar6 || (uVar9 < uVar9 - (longlong)cVar5)) ||
        (trapDoubleWordImmediate(6,(longlong)param_3,0),
        (uVar9 - (longlong)cVar5) / (ulonglong)(longlong)param_3 != uVar8)))) {
      puVar4 = (undefined4 *)fn_82F68240();
      *puVar4 = 0x22;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
      uVar9 = 0xffffffffffffffff;
      bVar7 = 0x2b;
    }
    if (bVar7 == 0x2d) {
      uVar9 = -uVar9;
    }
    if (param_2 == (undefined4 *)0x0) {
      return uVar9;
    }
    *param_2 = (int)uVar12;
    return uVar9;
  }
LAB_82f639c8:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (int)param_1;
  }
  return 0;
}

