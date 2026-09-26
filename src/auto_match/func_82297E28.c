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
extern unsigned int *auStack_230;
extern unsigned int *auStack_430;
extern unsigned int *auStack_630;
extern unsigned int *auStack_638;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82297428();
extern int fn_822987B8();
extern int fn_823F2E20();
extern int fn_82511350();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern int fn_8266EC60();
extern int fn_8266ECF0();
extern int fn_826728E8();
extern int fn_82672C20();
extern int fn_82673BC0();
extern int fn_82F4D9D8();
extern unsigned int iStack_634;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_63c;
extern unsigned int uStack_64c;
extern unsigned int uStack_650;
extern unsigned int uStack_65c;
extern unsigned int uStack_660;
extern unsigned int uStack_66c;
extern unsigned int uStack_670;


undefined4 * fn_82297E28(undefined4 *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar3;
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined1 *puStack_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined1 *puStack_658;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined1 *puStack_648;
  undefined **ppuStack_640;
  undefined4 uStack_63c;
  undefined1 auStack_638 [4];
  int iStack_634;
  undefined1 auStack_630 [512];
  undefined1 auStack_430 [512];
  undefined1 auStack_230 [560];
  
  *param_1 = 0;
  param_1[1] = 0;
  fn_82266D28(param_1,0);
  param_1[4] = 0;
  iVar3 = fn_8265C9E0(0x30);
  if (iVar3 != 0) {
    param_1[3] = iVar3;
    *(int *)iVar3 = iVar3;
    *(undefined4 *)(param_1[3] + 4) = param_1[3];
    *(undefined4 *)(param_1[3] + 8) = param_1[3];
    *(undefined1 *)(param_1[3] + 0x2c) = 1;
    *(undefined1 *)(param_1[3] + 0x2d) = 1;
    fn_82511350(param_1 + 6);
    fn_82511350(param_1 + 10);
    fn_82511350(param_1 + 0xe);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x15] = 1;
    param_1[0x16] = 1;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    fn_82297428(param_1 + 0x19,0xffffffff821aa9a0);
    param_1[0x21] = 0;
    param_1[0x20] = lbl_821CC160;
    uVar1 = fn_8266EC60();
    uVar1 = fn_8266ECF0(auStack_638,uVar1,param_2,1,0,0xffffffffffffffff,0,0x18280143);
    fn_823F2E20(param_1,uVar1);
    if (iStack_634 != 0) {
      fn_822315A0();
    }
    fn_82673BC0(*param_1,0xffffffff822984d0,param_1);
    fn_822987B8(param_1,param_3);
    if ((param_3 & 0xffffffff) != 0) {
      fn_82528BF8(param_3,0xffffffff821aac08,auStack_430,0x100,0,0);
      uStack_650 = 0;
      uStack_64c = 0;
      fn_82273CD8(&uStack_650,5);
      puStack_648 = auStack_430;
      fn_82672C20(*param_1,0xffffffff821aac18,&uStack_650,1);
      fn_82273C88(&uStack_650);
      fn_82528BF8(param_3,0xffffffff821aac34,auStack_630,0x100,0,0);
      uStack_670 = 0;
      uStack_66c = 0;
      fn_82273CD8(&uStack_670,5);
      puStack_668 = auStack_630;
      fn_82672C20(*param_1,0xffffffff821aac40,&uStack_670,1);
      fn_82273C88(&uStack_670);
      fn_82528BF8(param_3,0xffffffff821aac5c,auStack_230,0x100,0,0);
      uStack_660 = 0;
      uStack_65c = 0;
      fn_82273CD8(&uStack_660,5);
      puStack_658 = auStack_230;
      fn_82672C20(*param_1,0xffffffff821aac6c,&uStack_660,1);
      fn_82273C88(&uStack_660);
    }
    lVar2 = fn_82F4D9D8(2);
    if (lVar2 != 0) {
      fn_826728E8(*param_1,0xffffffff821aa9b8);
    }
    return param_1;
  }
  uStack_63c = 0;
  ppuStack_640 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_640);
}

