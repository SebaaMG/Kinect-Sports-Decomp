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
extern unsigned int *auStack_820;
extern unsigned int *auStack_db0;
extern unsigned int *auStack_dc0;
extern int fn_829D4AE0();
extern int fn_829D56F0();
extern int fn_829D63E0();
extern int fn_829D76B8();
extern int fn_829D85D8();
extern int fn_829D8780();
extern int fn_829D8B10();
extern int fn_829D92C8();
extern int fn_829D9C70();
extern int fn_829DBF98();
extern int fn_829DD388();
extern int fn_829DFA80();
extern int fn_82A1F2F8();
extern unsigned int lbl_832179FC;


void fn_829D9CF8(int *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  char cVar7;
  int iVar5;
  int iVar6;
  uint auStack_dc0 [4];
  undefined1 auStack_db0 [1424];
  undefined1 auStack_820 [2080];
  
  bVar4 = false;
  param_2 = param_1[3] * 0x1c0 + param_2;
  iVar5 = param_2 + 0x30;
  cVar7 = '\0';
  if (*(int *)(param_2 + 0x30) == 2) {
    auStack_dc0[0] = 0;
    fn_829DBF98(iVar5,param_1 + 0x11,auStack_dc0);
    if (((auStack_dc0[0] & 1) == 0) || (*param_1 == 6)) {
      cVar7 = fn_829D63E0(param_1,iVar5,param_5,param_6,auStack_820);
    }
    if ((auStack_dc0[0] >> 1 & 1) == 0) {
      iVar6 = *param_1;
      if (((iVar6 == 6) || (iVar6 == 1)) || (bVar3 = false, iVar6 == 2)) {
        bVar3 = true;
      }
      if (((bVar3) && (param_1[0x1a] == 2)) &&
         (iVar5 = fn_829DFA80((double)(float)param_1[0x18],iVar5,param_5,param_6,param_3,param_4
                                 ), -1 < iVar5)) {
        bVar4 = true;
      }
    }
  }
  else {
    fn_829D76B8(0,param_1,0xffffffff83010008);
  }
  iVar5 = *param_1;
  if (0 < iVar5) {
    if (iVar5 < 3) {
      iVar6 = lbl_832179FC + 0x24980;
      RtlEnterCriticalSection(iVar6);
      iVar5 = param_1[4] * 0x11fb0 + lbl_832179FC;
      if (param_1[7] == *(int *)(iVar5 + 0x12930)) {
        if (cVar7 != '\0') {
          fn_829D9C70(iVar5 + 0x8c90,auStack_820,*param_1 == 1);
        }
        if (bVar4) {
          fn_829D4AE0(iVar5 + 0x1d30,auStack_db0);
        }
      }
      RtlLeaveCriticalSection(iVar6);
      if (*param_1 == 1) {
        fn_829D8780(param_1);
      }
      if ((*param_1 == 2) && ((param_1[1] & 1U) != 0)) {
        fn_829D85D8(param_1);
      }
      if ((~param_1[1] & 1U) != 0) {
        fn_829D8B10(param_1);
      }
    }
    else if (iVar5 == 4) {
      if (cVar7 != '\0') {
        fn_829DD388(*(undefined4 *)(lbl_832179FC + 0x8f4d8),auStack_820);
      }
    }
    else if (iVar5 == 6) {
      iVar5 = 0x8f274;
      if (param_1[2] < 0) {
        iVar5 = 0x8f108;
      }
      if (*(uint *)(lbl_832179FC + iVar5 + 0x168) <= (uint)param_1[0x17]) {
        param_1[1] = param_1[1] & 0xfffffffe;
      }
    }
  }
  fn_829D56F0(param_1);
  iVar5 = 0x8f108;
  if (-1 < param_1[2]) {
    iVar5 = 0x8f274;
  }
  iVar5 = lbl_832179FC + iVar5;
  uVar1 = *(uint *)(iVar5 + 0x6c);
  if (*param_1 == 1) {
    uVar2 = param_1[0x17];
    if ((((longlong)*(int *)(iVar5 + 0x10) * (longlong)(int)uVar1 & 0xffffffffU) <= (ulonglong)uVar2
        ) && (trapWord(6,(ulonglong)uVar1,0),
             (ulonglong)uVar2 == (longlong)(int)(uVar2 / uVar1) * (longlong)(int)uVar1)) {
      iVar6 = fn_82A1F2F8();
      param_1[0x15] = iVar6 + *(int *)(iVar5 + 0x18);
    }
  }
  fn_829D92C8(param_1);
  return;
}

