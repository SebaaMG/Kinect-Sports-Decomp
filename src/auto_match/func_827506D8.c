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
extern int fn_82697700();
extern int fn_826A7380();
extern int fn_826C1BA0();
extern int fn_826D6630();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_82011638;
extern unsigned int uStack_1c;


undefined8 fn_827506D8(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar4;
  ulonglong uVar3;
  char cVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar10;
  char *pcVar9;
  double dVar11;
  undefined4 uStack_1c;
  
  pcVar7 = "alpha";
  pcVar9 = *(char **)*param_3;
  pcVar8 = pcVar9;
  do {
    cVar5 = *pcVar8;
    cVar1 = *pcVar7;
    if (cVar5 == '\0') break;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 == cVar1);
  if (cVar5 == cVar1) {
    dVar11 = (double)fn_826972E0();
    uStack_1c = ((((U64)(uStack_1c)) & (~(((U64)0xFF) << 24))) | ((((U64)((undefined1)(longlong)((float)dVar11 * lbl_82005CCC))) & ((U64)0xFF)) << 24));
    *(undefined1 *)(param_1 + 0x28) = (undefined1)uStack_1c;
    return 1;
  }
  pcVar7 = "blurX";
  pcVar8 = pcVar9;
  do {
    cVar5 = *pcVar8;
    cVar1 = *pcVar7;
    if (cVar5 == '\0') break;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 == cVar1);
  if (cVar5 == cVar1) {
    dVar11 = (double)fn_826972E0();
    uStack_1c = (uint)(longlong)((float)dVar11 * lbl_82011638 + lbl_82002C5C);
    if (0xfe < uStack_1c) {
      uStack_1c = 0xff;
    }
    *(char *)(param_1 + 0x21) = (char)uStack_1c;
    return 1;
  }
  pcVar7 = "blurY";
  pcVar8 = pcVar9;
  do {
    cVar5 = *pcVar8;
    cVar1 = *pcVar7;
    if (cVar5 == '\0') break;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 == cVar1);
  if (cVar5 == cVar1) {
    dVar11 = (double)fn_826972E0();
    uStack_1c = (uint)(longlong)((float)dVar11 * lbl_82011638 + lbl_82002C5C);
    if (0xfe < uStack_1c) {
      uStack_1c = 0xff;
    }
    *(char *)(param_1 + 0x22) = (char)uStack_1c;
    return 1;
  }
  pcVar7 = "color";
  pcVar8 = pcVar9;
  do {
    cVar5 = *pcVar8;
    cVar1 = *pcVar7;
    if (cVar5 == '\0') break;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 == cVar1);
  if (cVar5 == cVar1) {
    uVar4 = fn_82697700();
    uVar2 = *(undefined1 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined1 *)(param_1 + 0x28) = uVar2;
    return 1;
  }
  pcVar7 = "inner";
  pcVar8 = pcVar9;
  do {
    cVar5 = *pcVar8;
    cVar1 = *pcVar7;
    if (cVar5 == '\0') break;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 == cVar1);
  if (cVar5 == cVar1) {
    uVar3 = fn_826A7380(param_2);
    if ((uVar3 & 0xffffffff) == 0) {
      return 1;
    }
    uVar6 = 0xffffffff82013ac8;
  }
  else {
    pcVar7 = "knockout";
    pcVar8 = pcVar9;
    do {
      cVar5 = *pcVar8;
      cVar1 = *pcVar7;
      if (cVar5 == '\0') break;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar5 == cVar1);
    if (cVar5 == cVar1) {
      cVar5 = fn_82695608();
      if (cVar5 == '\0') {
        bVar10 = *(byte *)(param_1 + 0x20) & 0xdf;
      }
      else {
        bVar10 = *(byte *)(param_1 + 0x20) | 0x20;
      }
      *(byte *)(param_1 + 0x20) = bVar10;
      return 1;
    }
    pcVar7 = "quality";
    pcVar8 = pcVar9;
    do {
      cVar5 = *pcVar8;
      cVar1 = *pcVar7;
      if (cVar5 == '\0') break;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar5 == cVar1);
    if (cVar5 != cVar1) {
      pcVar8 = "strength";
      do {
        cVar5 = *pcVar9;
        cVar1 = *pcVar8;
        if (cVar5 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar5 == cVar1);
      if (cVar5 != cVar1) {
        uVar6 = fn_826C1BA0(param_1,param_2,param_3,param_4);
        return uVar6;
      }
      dVar11 = (double)fn_826972E0();
      uStack_1c = (uint)(longlong)((float)dVar11 * lbl_82011638 + lbl_82002C5C);
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
    uVar6 = 0xffffffff82013a90;
  }
  fn_826D6630(uVar3 + 0xc,uVar6);
  return 1;
}

