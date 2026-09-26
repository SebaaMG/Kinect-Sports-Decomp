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
extern int fn_828A0BB0();
extern int fn_829E9A20();
extern int fn_829EAC30();
extern int fn_829EACE8();
extern int fn_829EAE90();
extern int fn_82A28568();
extern int fn_82A2AE60();
extern int fn_82A2AE90();
extern int fn_82F68CC0();
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int lbl_832179FC;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


longlong fn_829EB7E8(int *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,
                      int param_6,ulonglong param_7,ulonglong param_8)

{
  int iVar2;
  char cVar3;
  ulonglong uVar1;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  if (((((*(int *)(param_2 + 0x18) != *(int *)(param_3 + 0x18)) || (*(int *)(param_2 + 0x18) == 0))
       || (*(int *)(param_2 + 0x10) == 0)) ||
      ((*(int *)(param_2 + 0x14) == 0 || (*(int *)(param_3 + 0x10) == 0)))) ||
     ((*(int *)(param_3 + 0x14) == 0 ||
      ((param_4 != (undefined4 *)0x0 && (iVar2 = fn_82A2AE60(param_4), iVar2 != 0)))))) {
    return -0x7ff8ffa9;
  }
  if (param_5 == 3) {
    if ((param_7 & 0xffffffff) == 0) {
      return -0x7ff8ffa9;
    }
    cVar3 = fn_829E9A20(param_1,param_7,*(undefined4 *)(param_2 + 0x18),param_1 + 10);
    if (cVar3 != '\0') {
      param_1[9] = 1;
    }
  }
  if (param_6 == 3) {
    if ((param_8 & 0xffffffff) == 0) {
      return -0x7ff8ffa9;
    }
    cVar3 = fn_829E9A20(param_1,param_8,*(undefined4 *)(param_2 + 0x18),param_1 + 0x2b);
    if (cVar3 != '\0') {
      param_1[9] = 1;
    }
  }
  if (param_4 == (undefined4 *)0x0) {
    uStack_a8 = *(undefined4 *)(param_3 + 0x10);
    uStack_a4 = *(undefined4 *)(param_3 + 0x14);
    puVar4 = &uStack_90;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = uStack_a8;
    uStack_84 = uStack_a4;
  }
  else {
    uStack_b0 = *param_4;
    puVar4 = &uStack_b0;
    uStack_ac = param_4[1];
    uStack_a8 = param_4[2];
    uStack_a4 = param_4[3];
  }
  fn_82A2AE90(&iStack_a0,puVar4);
  if (((((param_1[9] == 0) && (*(int *)(param_2 + 0x18) == param_1[8])) &&
       (*(int *)(param_2 + 0x10) == param_1[6])) &&
      (((*(int *)(param_2 + 0x14) == param_1[7] && (*(int *)(param_3 + 0x10) == *param_1)) &&
       ((*(int *)(param_3 + 0x14) == param_1[1] &&
        ((iVar2 = fn_828A0BB0(&iStack_a0,param_1 + 2), iVar2 != 0 && (param_5 == param_1[10])))))))
      ) && (param_6 == param_1[0x2b])) {
    return 0;
  }
  fn_829EAC30(param_1);
  param_1[6] = *(int *)(param_2 + 0x10);
  *param_1 = *(int *)(param_3 + 0x10);
  param_1[8] = *(int *)(param_2 + 0x18);
  param_1[7] = *(int *)(param_2 + 0x14);
  param_1[1] = *(int *)(param_3 + 0x14);
  param_1[2] = iStack_a0;
  param_1[3] = iStack_9c;
  param_1[4] = iStack_98;
  param_1[5] = iStack_94;
  param_1[10] = param_5;
  param_1[0x2b] = param_6;
  if (param_5 == 3) {
    lVar5 = ((ulonglong)(uint)param_1[8] & 0x3fffffff) << 2;
    if (0x3fffffff < (uint)param_1[8]) {
      lVar5 = -1;
    }
    uVar1 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,lVar5);
    param_1[0xb] = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
      fn_82F68CC0(uVar1,param_7,param_1[8] << 2);
      goto LAB_829ebabc;
    }
LAB_829ebaa0:
    lVar5 = -0x7ff8fff2;
  }
  else {
LAB_829ebabc:
    if (param_6 == 3) {
      lVar5 = ((ulonglong)(uint)param_1[8] & 0x3fffffff) << 2;
      if (0x3fffffff < (uint)param_1[8]) {
        lVar5 = -1;
      }
      uVar1 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,lVar5);
      param_1[0x2c] = (int)uVar1;
      if ((uVar1 & 0xffffffff) == 0) goto LAB_829ebaa0;
      fn_82F68CC0(uVar1,param_8,param_1[8] << 2);
    }
    param_1[9] = 0;
    lVar5 = fn_829EACE8(param_1);
    if ((-1 < lVar5) &&
       (lVar5 = fn_829EAE90(param_1,param_1 + 10,0,*param_1,param_1[2],param_1[6],param_1[8],0),
       -1 < lVar5)) {
      lVar5 = fn_829EAE90(param_1,param_1 + 0x2b,0,param_1[1],param_1[3],param_1[7],1,0);
    }
    if ((int)lVar5 == 0) {
      return lVar5;
    }
  }
  fn_829EAC30(param_1);
  return lVar5;
}

