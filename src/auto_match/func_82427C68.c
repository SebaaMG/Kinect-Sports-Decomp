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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82508078();
extern int fn_82536690();
extern int fn_8265CA20();
extern unsigned int lbl_821954D4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


void fn_82427C68(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uStack_60;
  undefined4 uStack_58;
  char *apcStack_50 [20];
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8)) / 0x1ac == 1) &&
     (*(int *)(*(int *)(iVar1 + 0x18) * 0x1ac + *(int *)(iVar1 + 8) + 4) != 0)) {
    iVar9 = *(int *)(param_1 + 8);
    if ((*(uint *)(iVar9 + 0xb3c) <=
         *(uint *)(*(int *)(iVar1 + 0x18) * 0x1ac + *(int *)(iVar1 + 8) + 0x30)) &&
       (iVar1 == *(int *)(iVar9 + 0x2b20))) {
      fn_82508078(*(undefined4 *)(iVar9 + 0xa4),0xffffffff821b8a70,0);
    }
    goto LAB_82427f78;
  }
  iVar9 = *(int *)(iVar1 + 8);
  iVar1 = *(int *)(iVar1 + 0xc);
  uVar7 = 300;
  apcStack_50[0] = (char *)0x0;
  uVar8 = 0;
  apcStack_50[1] = (char *)0x0;
  uVar5 = 300;
  apcStack_50[2] = (char *)0x0;
  uVar6 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  for (; pcVar3 = apcStack_50[0], iVar9 != iVar1; iVar9 = iVar9 + 0x1ac) {
    if (*(int *)(iVar9 + 4) == 0) {
      fn_82536690(&uStack_60,iVar9 + 8);
      uVar2 = *(uint *)(iVar9 + 0x30);
      if (uVar6 <= uVar2) {
        uVar6 = uVar2;
      }
      if (uVar2 <= uVar5) {
        uVar5 = uVar2;
      }
    }
    else {
      fn_82536690(apcStack_50,iVar9 + 8);
      uVar2 = *(uint *)(iVar9 + 0x30);
      if (uVar8 <= uVar2) {
        uVar8 = uVar2;
      }
      if (uVar2 <= uVar7) {
        uVar7 = uVar2;
      }
    }
  }
  iVar9 = (int)(((U64)(uStack_60) >> 0) & 0xFFFFFFFF);
  iVar1 = (int)apcStack_50[1] - (int)apcStack_50[0] >> 2;
  if ((iVar1 != 0) && ((((U64)(uStack_60) >> 32) & 0xFFFFFFFF) - (int)(((U64)(uStack_60) >> 0) & 0xFFFFFFFF) >> 2 != 0)) {
    if ((iVar1 == 1) && (uVar8 < uVar6)) {
      if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
        fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b89c4,0);
      }
    }
    if (uVar8 < uVar5) {
      apcStack_50[0] = "bowlersummaryloseencourage";
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      apcStack_50[1] = "bowlersummarylose";
      apcStack_50[2] = "bowlersummaryplayerpractise";
      uStack_60 = CONCAT44(lbl_83265A28,(((U64)(uStack_60) >> 32) & 0xFFFFFFFF)) & 0x7fffffffffffff | 0x3f80000000000000;
      if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
        iVar1 = (int)(((((U64)(uStack_60) >> 0) & 0xFFFFFFFF) - lbl_821CA460) * lbl_821954D4);
        uStack_60 = (ulonglong)iVar1;
        fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),apcStack_50[-iVar1],0);
      }
    }
    if ((uVar6 < uVar8) && (iVar1 = *(int *)(param_1 + 8), uVar8 < *(int *)(iVar1 + 0xb50) + uVar6))
    {
      if (*(int *)(param_1 + 4) == *(int *)(iVar1 + 0x2b20)) {
        uVar4 = 0xffffffff821b8a30;
LAB_82427ed4:
        fn_82508078(*(undefined4 *)(iVar1 + 0xa4),uVar4,0);
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 8);
      if ((*(int *)(iVar1 + 0xb54) + uVar6 < uVar8) &&
         (*(int *)(param_1 + 4) == *(int *)(iVar1 + 0x2b20))) {
        uVar4 = 0xffffffff821b8a48;
        goto LAB_82427ed4;
      }
    }
    if (uVar6 < uVar8) {
      if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
        fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b8a60,0);
      }
    }
  }
  if (iVar9 != 0) {
    fn_8265CA20(iVar9);
  }
  if (pcVar3 != (char *)0x0) {
    fn_8265CA20(pcVar3);
  }
LAB_82427f78:
  if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
    fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b8a88,0);
  }
  return;
}

