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
extern unsigned int *auStack_40;
extern int fn_829AB0F0();
extern int fn_829AB1D8();
extern int fn_829AB2C8();
extern int fn_829B0F38();
extern int fn_829B8F80();
extern int fn_829B9AF0();
extern int fn_829B9C58();
extern int fn_829B9F20();
extern int fn_829BA0D8();
extern int fn_829BA158();
extern int fn_829BA2F8();
extern int fn_829BA468();
extern int fn_829BA6A0();
extern unsigned int lbl_82052408;
extern unsigned int lbl_82052410;
extern unsigned int lbl_82052418;
extern unsigned int lbl_82052420;
extern unsigned int lbl_82052428;
extern unsigned int lbl_82052430;
extern unsigned int lbl_82052438;


void fn_829AE470(int param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined1 auStack_40 [64];
  
  uVar9 = (ulonglong)*(byte *)(param_1 + 0x61c);
  if (uVar9 < 8) {
    lVar8 = -uVar9 + 8;
    fn_829B0F38(param_1,uVar9 + param_2 + 0x20,lVar8);
    *(undefined1 *)(param_1 + 0x61c) = 8;
    iVar3 = fn_829AB1D8(param_2 + 0x20,uVar9,lVar8);
    if (iVar3 != 0) {
      if (uVar9 < 4) {
        iVar3 = fn_829AB1D8(param_2 + 0x20,uVar9,-uVar9 + 4);
        if (iVar3 == 0) goto LAB_829ae4f4;
        uVar4 = 0xffffffff820524e4;
      }
      else {
LAB_829ae4f4:
        uVar4 = 0xffffffff820524bc;
      }
      fn_829AB0F0(param_1,uVar4);
    }
  }
  pbVar10 = (byte *)(param_1 + 0x60c);
LAB_829ae510:
  fn_829B0F38(param_1,auStack_40,4);
  uVar4 = fn_829B9AF0(param_1,auStack_40);
  fn_829AB2C8(param_1);
  fn_829B8F80(param_1,pbVar10,4);
  pbVar6 = &lbl_82052408;
  pbVar7 = pbVar10;
  do {
    bVar1 = *pbVar7;
    bVar2 = *pbVar6;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar7 = pbVar7 + 1;
    pbVar6 = pbVar6 + 1;
  } while (pbVar7 != (byte *)(param_1 + 0x610));
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    fn_829B9C58(param_1,param_2,uVar4);
    goto LAB_829ae510;
  }
  pbVar6 = &lbl_82052420;
  pbVar7 = pbVar10;
  do {
    bVar1 = *pbVar7;
    bVar2 = *pbVar6;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar7 = pbVar7 + 1;
    pbVar6 = pbVar6 + 1;
  } while (pbVar7 != (byte *)(param_1 + 0x610));
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    fn_829B9F20(param_1,param_2,uVar4);
    goto LAB_829ae510;
  }
  pbVar6 = &lbl_82052418;
  pbVar7 = pbVar10;
  do {
    bVar1 = *pbVar7;
    bVar2 = *pbVar6;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar7 = pbVar7 + 1;
    pbVar6 = pbVar6 + 1;
  } while (pbVar7 != (byte *)(param_1 + 0x610));
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    fn_829BA0D8(param_1,param_2,uVar4);
    goto LAB_829ae510;
  }
  pbVar6 = &lbl_82052410;
  pbVar7 = pbVar10;
  do {
    bVar1 = *pbVar7;
    bVar2 = *pbVar6;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar7 = pbVar7 + 1;
    pbVar6 = pbVar6 + 1;
  } while (pbVar7 != (byte *)(param_1 + 0x610));
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    pbVar6 = &lbl_82052428;
    pbVar7 = pbVar10;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != (byte *)(param_1 + 0x610));
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      fn_829BA158(param_1,param_2,uVar4);
    }
    else {
      pbVar6 = &lbl_82052430;
      pbVar7 = pbVar10;
      do {
        bVar1 = *pbVar7;
        bVar2 = *pbVar6;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar7 != (byte *)(param_1 + 0x610));
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        fn_829BA2F8(param_1,param_2,uVar4);
      }
      else {
        pbVar7 = pbVar10;
        pbVar6 = &lbl_82052438;
        do {
          bVar1 = *pbVar7;
          bVar2 = *pbVar6;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
        } while (pbVar7 != (byte *)(param_1 + 0x610));
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          fn_829BA468();
        }
        else {
          fn_829BA6A0(param_1,param_2,uVar4);
        }
      }
    }
    goto LAB_829ae510;
  }
  if ((*(uint *)(param_1 + 0x558) & 1) == 0) {
    uVar5 = 0xffffffff820524a0;
  }
  else {
    if ((*(char *)(param_1 + 0x616) != '\x03') || ((*(uint *)(param_1 + 0x558) & 2) != 0))
    goto LAB_829ae770;
    uVar5 = 0xffffffff82052484;
  }
  fn_829AB0F0(param_1,uVar5);
LAB_829ae770:
  *(int *)(param_1 + 0x5fc) = (int)uVar4;
  *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x558) | 4;
  return;
}

