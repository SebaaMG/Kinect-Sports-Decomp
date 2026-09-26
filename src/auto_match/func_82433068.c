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
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8242D0B8();
extern int fn_8242E3E0();
extern int fn_82432C98();
extern int fn_82437C78();
extern int fn_82437E38();
extern int fn_82437EC8();
extern int fn_82437F40();
extern int fn_8265C9E0();
extern unsigned int lbl_821B932C;
extern unsigned int lbl_821CC160;


undefined4 * fn_82433068(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 auStack_40 [40];
  
  fn_82230110(auStack_40,param_2 + 0x24);
  fn_82437C78(param_1,auStack_40);
  fn_82230300(auStack_40,1,0);
  *param_1 = &lbl_821B932C;
  uVar2 = fn_8265C9E0(0x450);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82432C98(uVar2,param_2);
  }
  param_1[0x10] = iVar3;
  if (*(int *)(iVar3 + 0xf8) == 0) {
    *(undefined4 *)(iVar3 + 0x158) = *(undefined4 *)(iVar3 + 0x150);
  }
  *(undefined4 *)(param_1[0x10] + 0x134) = *(undefined4 *)(param_1[0x10] + 0xf8);
  uVar1 = *(undefined4 *)(param_2 + 0x10c);
  uVar5 = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1[0x10] + 0x108) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1[0x10] + 0x10c) = uVar5;
  *(undefined4 *)(param_1[0x10] + 0x110) = uVar1;
  *(undefined4 *)(param_1[0x10] + 0xe4) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1[0x10] + 0xe8) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1[0x10] + 0xec) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1[0x10] + 0xcc) = *(undefined4 *)(param_2 + 0x44);
  fn_82437E38(param_1,1,0);
  fn_82437E38(param_1,3,0);
  fn_82437E38(param_1,4,0);
  fn_82437E38(param_1,5,0);
  fn_82437E38(param_1,0x12,0);
  fn_82437E38(param_1,0x10,0);
  fn_82437E38(param_1,0x15,0);
  fn_82437E38(param_1,0x11,0);
  fn_82437E38(param_1,0x13,0);
  fn_82437E38(param_1,0x14,0);
  fn_82437EC8(param_1,1);
  fn_8242D0B8(*(undefined4 *)param_1[0x10],0);
  piVar6 = (int *)param_1[0x10];
  if (*(int *)(*(int *)(*piVar6 + 0x174) + 0xbc) < 3) {
    iVar3 = fn_8242E3E0();
    piVar6 = (int *)param_1[0x10];
    if (iVar3 == 0) {
      iVar3 = *(int *)(*piVar6 + 0xa0);
      if (((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) ||
         (iVar3 = *(int *)(*piVar6 + 0xa0), iVar3 == 0)) goto code_r0x82433388;
      if (piVar6[0x3e] == 0) {
        iVar4 = *(int *)(iVar3 + 0x14c);
        if (iVar4 != 0) {
          if (*(int *)(iVar3 + 0x150) == 0) {
            piVar6[0x55] = piVar6[0x58] * iVar4;
            *(int *)(param_1[0x10] + 0x15c) = iVar4;
            fn_82437F40(param_1[0x10] + 0x138,*(undefined4 *)(param_1[0x10] + 0x154));
            iVar3 = param_1[0x10];
            uVar5 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 4) + 0x40) + 0x20c);
          }
          else {
            iVar4 = *(int *)(*(int *)(piVar6[1] + 0x40) + 0x20c) * iVar4;
            piVar6[0x55] = piVar6[0x58] * iVar4;
            *(int *)(param_1[0x10] + 0x15c) = iVar4;
            fn_82437F40(param_1[0x10] + 0x138,*(undefined4 *)(param_1[0x10] + 0x154));
            iVar3 = param_1[0x10];
            uVar5 = 1;
          }
          *(undefined4 *)(iVar3 + 0x158) = uVar5;
          goto code_r0x82433388;
        }
        if (lbl_821CC160 < *(float *)(iVar3 + 0x148)) {
          iVar3 = 200;
          iVar4 = piVar6[0x58] * 200;
          goto code_r0x8243336c;
        }
      }
      iVar4 = piVar6[0x58];
      iVar3 = 1;
      goto code_r0x8243336c;
    }
    piVar6[0x55] = piVar6[0x58];
    *(undefined4 *)(param_1[0x10] + 0x15c) = 1;
  }
  else {
    if (piVar6[0x3e] == 0) goto code_r0x82433388;
    piVar6[0x58] = 2;
    piVar6 = (int *)param_1[0x10];
    iVar3 = piVar6[0x55];
    iVar4 = piVar6[0x58] * iVar3;
code_r0x8243336c:
    piVar6[0x55] = iVar4;
    *(int *)(param_1[0x10] + 0x15c) = iVar3;
  }
  fn_82437F40(param_1[0x10] + 0x138,*(undefined4 *)(param_1[0x10] + 0x154));
code_r0x82433388:
  iVar3 = 0x20c;
  lVar7 = 4;
  do {
    *(undefined4 *)(iVar3 + param_1[0x10]) = *(undefined4 *)(param_2 + -0x118 + iVar3);
    iVar3 = iVar3 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return param_1;
}

