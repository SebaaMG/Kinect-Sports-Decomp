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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_8266EC60();
extern int fn_8266ECF0();
extern int fn_8266EF20();
extern int fn_82672C20();
extern int fn_82673A28();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int iStack_7c;
extern unsigned int iStack_84;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821A82B8;
extern unsigned int lbl_821A8C90;
extern unsigned int uStack_8c;


undefined4 *
fn_822794D0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [4];
  int iStack_84;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined1 auStack_70 [112];
  
  *param_1 = &lbl_821A82B8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  puVar7 = param_1 + 2;
  iVar3 = fn_8265C9E0(0xc);
  if (iVar3 != 0) {
    param_1[4] = iVar3;
    *(int *)iVar3 = iVar3;
    *(undefined4 *)(param_1[4] + 4) = param_1[4];
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = &lbl_821A8C90;
    param_1[0x38] = param_3;
    param_1[0x37] = 1;
    param_1[0x39] = 1;
    param_1[0x3b] = 1;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x3a] = 0;
    param_1[0x3c] = param_5;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x48] = 0;
    *(undefined1 *)(param_1 + 0x4a) = 0;
    if (param_1[0x38] == 0) {
      uVar2 = fn_8266EC60();
      uVar2 = fn_8266ECF0(auStack_80,uVar2,param_2,param_4,0,0xffffffffffffffff,0,0x18280143);
      fn_823F2E20(puVar7,uVar2);
      iStack_84 = iStack_7c;
    }
    else {
      uVar2 = fn_8266EC60();
      uVar2 = fn_8266EF20(auStack_88,uVar2,param_2,0,1,0x18280143);
      fn_823F2E20(puVar7,uVar2);
    }
    if (iStack_84 != 0) {
      fn_822315A0();
    }
    iVar3 = param_1[0x3c];
    if (iVar3 != 0) {
      iVar5 = 0;
      if (0 < *(int *)(iVar3 + 0x44)) {
        iVar6 = 0;
        do {
          iVar5 = iVar5 + 1;
          iVar1 = iVar6 + *(int *)(iVar3 + 0x40);
          iVar6 = iVar6 + 0xf0;
          *(undefined4 *)(iVar1 + 0xe4) = 0x80000000;
        } while (iVar5 < *(int *)(iVar3 + 0x44));
      }
      iVar5 = 0;
      lVar8 = 0x20;
      do {
        iVar6 = iVar5 + *(int *)(iVar3 + 0x54);
        iVar5 = iVar5 + 0x14;
        *(undefined1 *)(iVar6 + 0x10) = 0;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    fn_82673A28(*puVar7,0xffffffff8227a358,param_1);
    fn_82672C20(*puVar7,0xffffffff821a822c,0,0);
    fn_82864988(auStack_70,0xffffffff821a7cd8);
    uVar4 = fn_828647D8();
    param_1[0x42] = uVar4;
    fn_82864898(auStack_70);
    fn_82864988(auStack_70,0xffffffff821a7cfc);
    uVar4 = fn_828647D8();
    param_1[0x43] = uVar4;
    fn_82864898(auStack_70);
    return param_1;
  }
  uStack_8c = 0;
  ppuStack_90 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_90);
}

