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
extern int fn_82FA54B8();
extern int fn_82FA6428();
extern int fn_82FA6430();
extern int fn_8306C068();
extern int fn_8306C118();
extern int fn_8306C1C8();
extern int iRam8326420c;
extern unsigned int lbl_83264208;
extern unsigned int lbl_83264210;


longlong fn_82FA5538(int param_1,ulonglong param_2,ulonglong param_3,uint param_4,
                      ulonglong param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int *piVar10;
  ulonglong uVar9;
  int *piVar11;
  
  uVar3 = param_4 & 3;
  if ((param_4 & 3) == 0) {
    if (param_1 == 0) {
      return -1;
    }
  }
  else if (((uVar3 != 1) && (uVar3 != 2)) && (uVar3 != 3)) {
    return -1;
  }
  if (lbl_83264208 <= iRam8326420c) {
    return -1;
  }
  lVar6 = 0;
  if (lbl_83264208 < 1) {
    return -1;
  }
  piVar10 = lbl_83264210 + 9;
  piVar11 = lbl_83264210;
  while (RtlEnterCriticalSection(piVar10), *piVar11 != 0) {
    RtlLeaveCriticalSection(piVar10);
    lVar6 = lVar6 + 1;
    piVar11 = piVar11 + 0x14;
    piVar10 = piVar10 + 0x14;
    if (lbl_83264208 <= (int)lVar6) {
      return -1;
    }
  }
  if (lbl_83264208 <= (int)lVar6) {
    return -1;
  }
  trapWord(6,param_3,0);
  iVar8 = (int)((param_2 & 0xffffffff) / (param_3 & 0xffffffff));
  uVar9 = (longlong)iVar8 * (longlong)(int)param_3;
  iVar7 = (int)param_5;
  if (param_1 != 0) {
    piVar11[3] = param_1;
    uVar3 = piVar11[8] & 0x7fffffff;
    goto LAB_82fa570c;
  }
  if (uVar3 == 1) {
    if (uVar9 + param_5 != 0) {
      iVar1 = fn_8306C068();
LAB_82fa5694:
      piVar11[2] = iVar1;
    }
LAB_82fa5698:
    uVar3 = piVar11[2];
    piVar11[3] = uVar3;
    if ((ulonglong)uVar3 == 0) {
      RtlLeaveCriticalSection(piVar11 + 9);
      return -1;
    }
    if ((param_5 & 0xffffffff) != 0) {
      trapWord(6,param_5,0);
      lVar2 = (ulonglong)uVar3 -
              (longlong)(int)((ulonglong)uVar3 / (param_5 & 0xffffffff)) * (longlong)iVar7;
      if (lVar2 != 0) {
        piVar11[3] = (uVar3 - (int)lVar2) + iVar7;
      }
    }
  }
  else {
    if (uVar3 == 2) {
      if (uVar9 + param_5 != 0) {
        iVar1 = fn_8306C118(0,uVar9 + param_5,0x20001000,0x40);
        goto LAB_82fa5694;
      }
      goto LAB_82fa5698;
    }
    if ((uVar3 == 3) && ((uVar9 & 0xffffffff) != 0)) {
      iVar1 = fn_8306C1C8(uVar9 + 0x10,0xffffffffffffffff,param_5,4);
      piVar11[3] = iVar1;
      if (iVar1 == 0) {
        RtlLeaveCriticalSection(piVar11 + 9);
        return -1;
      }
    }
  }
  uVar3 = piVar11[8] | 0x80000000;
LAB_82fa570c:
  piVar11[8] = uVar3;
  piVar11[7] = param_4;
  piVar11[0x13] = (int)uVar9;
  if ((param_4 & 8) == 8) {
    piVar11[4] = 0;
    piVar11[5] = 0;
    piVar11[6] = 0;
    uVar4 = (ulonglong)(uint)piVar11[3];
    uVar9 = uVar4 + uVar9;
    if (uVar4 != (uVar9 & 0xffffffff)) {
      do {
        puVar5 = (undefined4 *)uVar4;
        *puVar5 = 0;
        if ((undefined4 *)piVar11[5] == (undefined4 *)0x0) {
          piVar11[4] = (int)puVar5;
        }
        else {
          *(undefined4 *)piVar11[5] = puVar5;
        }
        piVar11[5] = (int)puVar5;
        uVar4 = uVar4 + param_3;
        piVar11[6] = piVar11[6] + 1;
      } while ((uVar4 & 0xffffffff) != (uVar9 & 0xffffffff));
    }
  }
  else {
    iVar1 = fn_82FA6430(piVar11[3],uVar9);
    piVar11[0x10] = iVar1;
    if (iVar1 == 0) {
      fn_82FA54B8(piVar11);
      RtlLeaveCriticalSection(piVar11 + 9);
      return -1;
    }
    iVar1 = fn_82FA6428();
    piVar11[0x13] = piVar11[0x13] - iVar1;
  }
  piVar11[1] = (int)param_3;
  *piVar11 = iVar8;
  piVar11[0x11] = iVar7;
  iRam8326420c = iRam8326420c + 1;
  RtlLeaveCriticalSection(piVar11 + 9);
  return lVar6;
}

