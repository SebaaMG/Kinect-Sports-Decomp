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
extern int fn_82441388();
extern int fn_824415A8();
extern int fn_82441700();
extern int fn_82441798();
extern int fn_82441A18();
extern unsigned char lbl_821B996C[];


void fn_82441038(uint *param_1,int param_2,undefined4 *param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) != 0) {
    param_1[4] = ~uVar1 >> 5 & 1;
  }
  if ((uVar1 & 4) != 0) {
    param_1[3] = 1;
  }
  if (param_1[3] != 0) goto LAB_82441278;
  pbVar9 = (byte *)*param_3;
  uVar5 = param_4;
  if ((pbVar9 == (byte *)0x0) || (uVar2 = (ulonglong)*pbVar9, uVar2 == 0)) {
    if (param_2 != 1) {
      if (param_2 == 2) {
LAB_82441264:
        fn_82441798(param_1,param_4,param_3,uVar5);
        goto LAB_82441278;
      }
      if (param_2 == 3) {
LAB_82441210:
        fn_82441A18(param_1);
        goto LAB_82441278;
      }
      if (param_2 == 4) goto LAB_82441258;
      if (param_2 != 5) goto LAB_82441278;
      goto LAB_8244124c;
    }
  }
  else {
    uVar6 = 0x6a;
    if (uVar2 == 0x6a) {
      uVar2 = 0x6a;
      pbVar3 = pbVar9;
      do {
        pbVar3 = pbVar3 + 1;
        if (uVar2 == 0) goto LAB_8244124c;
        uVar5 = (ulonglong)pbVar3[(int)"javelin" - (int)pbVar9];
        uVar2 = (ulonglong)*pbVar3;
        uVar6 = uVar5;
      } while (uVar2 == uVar5);
    }
    if (uVar2 == uVar6) {
LAB_8244124c:
      fn_82441388(param_1,param_4,param_3,uVar5);
      goto LAB_82441278;
    }
    uVar2 = (ulonglong)*pbVar9;
    uVar6 = 100;
    if (uVar2 == 100) {
      uVar2 = 100;
      pbVar3 = pbVar9;
      do {
        pbVar3 = pbVar3 + 1;
        if (uVar2 == 0) goto LAB_82441258;
        uVar5 = (ulonglong)pbVar3[(int)"discus" - (int)pbVar9];
        uVar2 = (ulonglong)*pbVar3;
        uVar6 = uVar5;
      } while (uVar2 == uVar5);
    }
    if (uVar2 == uVar6) {
LAB_82441258:
      fn_824415A8(param_1,param_4,param_3,uVar5);
      goto LAB_82441278;
    }
    bVar8 = *pbVar9;
    bVar7 = lbl_821B996C[0];
    if (bVar8 == lbl_821B996C[0]) {
      pbVar3 = pbVar9;
      do {
        pbVar3 = pbVar3 + 1;
        if (bVar8 == 0) goto LAB_82441270;
        bVar8 = *pbVar3;
        bVar7 = pbVar3[(int)"100meters" - (int)pbVar9];
      } while (bVar8 == bVar7);
    }
    if (bVar8 != bVar7) {
      uVar2 = (ulonglong)*pbVar9;
      uVar6 = 0x68;
      if (uVar2 == 0x68) {
        uVar2 = 0x68;
        pbVar3 = pbVar9;
        do {
          pbVar3 = pbVar3 + 1;
          if (uVar2 == 0) goto LAB_82441264;
          uVar5 = (ulonglong)pbVar3[(int)"hurdles" - (int)pbVar9];
          uVar2 = (ulonglong)*pbVar3;
          uVar6 = uVar5;
        } while (uVar2 == uVar5);
      }
      if (uVar2 != uVar6) {
        bVar8 = *pbVar9;
        bVar7 = 0x6c;
        if (bVar8 == 0x6c) {
          iVar4 = (int)"longjump" - (int)pbVar9;
          bVar8 = 0x6c;
          do {
            pbVar9 = pbVar9 + 1;
            if (bVar8 == 0) goto LAB_82441210;
            bVar7 = pbVar9[iVar4];
            bVar8 = *pbVar9;
          } while (bVar8 == bVar7);
        }
        if (bVar8 != bVar7) goto LAB_82441278;
        goto LAB_82441210;
      }
      goto LAB_82441264;
    }
  }
LAB_82441270:
  fn_82441700(param_1);
LAB_82441278:
  *param_1 = 0;
  return;
}

