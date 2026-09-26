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
extern int fn_82695608();
extern int fn_826972E0();
extern int fn_82697610();
extern int fn_82697700();
extern int fn_826A7380();
extern int fn_826C1BA0();
extern int fn_826D6630();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_82011638;
extern unsigned int uStack_1c;


undefined8 fn_8274F0B0(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  short sVar5;
  undefined4 uVar4;
  char cVar6;
  ulonglong uVar3;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar11;
  char *pcVar10;
  double dVar12;
  undefined4 uStack_1c;
  
  pcVar8 = "alpha";
  pcVar10 = *(char **)*param_3;
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    dVar12 = (double)fn_826972E0();
    uStack_1c = ((((U64)(uStack_1c)) & (~(((U64)0xFF) << 24))) | ((((U64)((undefined1)(longlong)((float)dVar12 * lbl_82005CCC))) & ((U64)0xFF)) << 24));
    *(undefined1 *)(param_1 + 0x28) = (undefined1)uStack_1c;
    return 1;
  }
  pcVar8 = "angle";
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    sVar5 = fn_82697610();
    *(short *)(param_1 + 0x24) = sVar5 * 10;
    return 1;
  }
  pcVar8 = "blurX";
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    dVar12 = (double)fn_826972E0();
    uStack_1c = (uint)(longlong)((float)dVar12 * lbl_82011638 + lbl_82002C5C);
    if (0xfe < uStack_1c) {
      uStack_1c = 0xff;
    }
    *(char *)(param_1 + 0x21) = (char)uStack_1c;
    return 1;
  }
  pcVar8 = "blurY";
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    dVar12 = (double)fn_826972E0();
    uStack_1c = (uint)(longlong)((float)dVar12 * lbl_82011638 + lbl_82002C5C);
    if (0xfe < uStack_1c) {
      uStack_1c = 0xff;
    }
    *(char *)(param_1 + 0x22) = (char)uStack_1c;
    return 1;
  }
  pcVar8 = "color";
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    uVar4 = fn_82697700();
    uVar2 = *(undefined1 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined1 *)(param_1 + 0x28) = uVar2;
    return 1;
  }
  pcVar8 = "distance";
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    sVar5 = fn_82697610();
    *(short *)(param_1 + 0x26) = sVar5 * 0x14;
    return 1;
  }
  pcVar8 = "hideObject";
  pcVar9 = pcVar10;
  do {
    cVar6 = *pcVar9;
    cVar1 = *pcVar8;
    if (cVar6 == '\0') break;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar6 == cVar1);
  if (cVar6 == cVar1) {
    cVar6 = fn_82695608();
    if (cVar6 == '\0') {
      bVar11 = *(byte *)(param_1 + 0x20) & 0xbf;
    }
    else {
      bVar11 = *(byte *)(param_1 + 0x20) | 0x40;
    }
LAB_8274f370:
    *(byte *)(param_1 + 0x20) = bVar11;
  }
  else {
    pcVar8 = "inner";
    pcVar9 = pcVar10;
    do {
      cVar6 = *pcVar9;
      cVar1 = *pcVar8;
      if (cVar6 == '\0') break;
      pcVar9 = pcVar9 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar6 == cVar1);
    if (cVar6 == cVar1) {
      uVar3 = fn_826A7380(param_2);
      if ((uVar3 & 0xffffffff) == 0) {
        return 1;
      }
      uVar7 = 0xffffffff820138c4;
    }
    else {
      pcVar8 = "knockout";
      pcVar9 = pcVar10;
      do {
        cVar6 = *pcVar9;
        cVar1 = *pcVar8;
        if (cVar6 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar6 == cVar1);
      if (cVar6 == cVar1) {
        cVar6 = fn_82695608();
        if (cVar6 == '\0') {
          bVar11 = *(byte *)(param_1 + 0x20) & 0xdf;
        }
        else {
          bVar11 = *(byte *)(param_1 + 0x20) | 0x20;
        }
        goto LAB_8274f370;
      }
      pcVar8 = "quality";
      pcVar9 = pcVar10;
      do {
        cVar6 = *pcVar9;
        cVar1 = *pcVar8;
        if (cVar6 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar6 == cVar1);
      if (cVar6 != cVar1) {
        pcVar9 = "strength";
        do {
          cVar6 = *pcVar10;
          cVar1 = *pcVar9;
          if (cVar6 == '\0') break;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar6 == cVar1);
        if (cVar6 != cVar1) {
          uVar7 = fn_826C1BA0(param_1,param_2,param_3,param_4);
          return uVar7;
        }
        dVar12 = (double)fn_826972E0();
        uStack_1c = (uint)(longlong)((float)dVar12 * lbl_82011638 + lbl_82002C5C);
        if (0xfe < uStack_1c) {
          uStack_1c = 0xff;
        }
        *(char *)(param_1 + 0x23) = (char)uStack_1c;
        return 1;
      }
      uVar3 = fn_826A7380(param_2);
      if ((uVar3 & 0xffffffff) == 0) {
        return 1;
      }
      uVar7 = 0xffffffff82013870;
    }
    fn_826D6630(uVar3 + 0xc,uVar7);
  }
  return 1;
}

