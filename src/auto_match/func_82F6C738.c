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


ulonglong fn_82F6C738(byte *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  int iVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint uVar11;
  char cVar12;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if ((param_1 == (byte *)0x0) || ((param_3 != 0 && (((int)param_3 < 2 || (0x24 < (int)param_3))))))
  {
    puVar4 = (undefined4 *)fn_82F68240();
    *puVar4 = 0x16;
    fn_82F63BA0();
    return 0;
  }
  bVar1 = *param_1;
  uVar9 = 0;
  pbVar3 = param_1;
  puVar7 = lbl_831BBCA8;
  while( true ) {
    uVar11 = (uint)bVar1;
    pbVar10 = pbVar3 + 1;
    if (*(int *)(puVar7 + 0xac) < 2) {
      uVar5 = *(ushort *)((uint)bVar1 * 2 + *(int *)(puVar7 + 200)) & 8;
    }
    else {
      uVar5 = fn_82F704C8(uVar11,8,0xffffffff831bbca8);
      puVar7 = lbl_831BBCA8;
    }
    if (uVar5 == 0) break;
    bVar1 = *pbVar10;
    pbVar3 = pbVar10;
  }
  if (bVar1 == 0x2d) {
    param_4 = param_4 | 2;
LAB_82f6c814:
    uVar11 = (uint)*pbVar10;
    pbVar10 = pbVar3 + 2;
  }
  else if (bVar1 == 0x2b) goto LAB_82f6c814;
  if (param_3 == 0) {
    if ((char)uVar11 != '0') {
      param_3 = 10;
      goto LAB_82f6c890;
    }
    if ((*pbVar10 != 0x78) && (*pbVar10 != 0x58)) {
      param_3 = 8;
      goto LAB_82f6c890;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && ((char)uVar11 == '0')) && ((*pbVar10 == 0x78 || (*pbVar10 == 0x58)))) {
    uVar11 = (uint)pbVar10[1];
    pbVar10 = pbVar10 + 2;
  }
LAB_82f6c890:
  uVar6 = (ulonglong)(int)param_3;
  trapDoubleWordImmediate(6,uVar6,0);
  do {
    uVar2 = *(ushort *)(uVar11 * 2 + *(int *)(puVar7 + 200));
    cVar12 = (char)uVar11;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) {
LAB_82f6c92c:
        pbVar10 = pbVar10 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            pbVar10 = param_1;
          }
          uVar9 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x8000000000000000 < uVar9)) ||
                  (((param_4 & 2) == 0 && (0x7fffffffffffffff < uVar9)))))))) {
          puVar4 = (undefined4 *)fn_82F68240();
          *puVar4 = 0x22;
          if ((param_4 & 1) == 0) {
            uVar9 = 0x8000000000000000;
            if ((param_4 & 2) == 0) {
              uVar9 = 0x7fffffffffffffff;
            }
          }
          else {
            uVar9 = 0xffffffffffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = pbVar10;
        }
        if ((param_4 & 2) != 0) {
          uVar9 = -uVar9;
        }
        return uVar9;
      }
      iVar8 = (int)cVar12;
      if (('`' < cVar12) && (cVar12 < '{')) {
        iVar8 = iVar8 + -0x20;
      }
      uVar11 = iVar8 - 0x37;
    }
    else {
      uVar11 = (int)cVar12 - 0x30;
    }
    if (param_3 <= uVar11) goto LAB_82f6c92c;
    uVar5 = param_4 | 8;
    if ((uVar9 < 0xffffffffffffffff / uVar6) ||
       ((uVar9 == 0xffffffffffffffff / uVar6 &&
        (trapDoubleWordImmediate(6,uVar6,0),
        (ulonglong)uVar11 <= -((0xffffffffffffffff / uVar6) * uVar6) - 1)))) {
      uVar9 = uVar6 * uVar9 + (ulonglong)uVar11;
    }
    else {
      param_4 = param_4 | 0xc;
      uVar5 = param_4;
      if (param_2 == (undefined4 *)0x0) goto LAB_82f6c92c;
    }
    uVar11 = (uint)*pbVar10;
    pbVar10 = pbVar10 + 1;
    param_4 = uVar5;
  } while( true );
}

