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
extern unsigned int *auStack_120;
extern unsigned int *auStack_160;
extern unsigned int *auStack_e0;
extern int fn_82273C88();
extern int fn_822902E8();
extern int fn_82290458();
extern int fn_82358FD8();
extern int fn_82672C20();
extern int fn_82F64988();
extern unsigned int iStack_1dc;
extern unsigned int iStack_1e0;
extern unsigned int lbl_820E975C;
extern unsigned int uStack0000001c;
extern unsigned int uStack_168;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern unsigned int uStack_19c;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1d8;
extern unsigned int uStack_1f0;


void fn_822A4920(int *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack0000001c;
  uint uStack_1f0;
  int iStack_1e0;
  int iStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double dStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 *puStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double dStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 *puStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 *puStack_178;
  longlong lStack_170;
  ulonglong uStack_168;
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [224];
  
  uStack0000001c = (undefined4)param_2;
  if (*(int *)(*param_1 + 0x28) != 0) {
    fn_82358FD8(param_2,auStack_e0,0x20,0xffffffff821ac2e8);
    uStack_1f0 = 5;
    uVar5 = 1;
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 + *param_1);
      if (iVar6 == 1) {
        uVar2 = 0xffffffff821ac1e0;
LAB_822a4a28:
        fn_82F64988(auStack_160,0x20,uVar2);
      }
      else {
        if (iVar6 == 2) {
          uVar2 = 0xffffffff821ac1d0;
          goto LAB_822a4a28;
        }
        if (iVar6 == 3) {
          uVar2 = 0xffffffff821ac1f8;
          goto LAB_822a4a28;
        }
        if (iVar6 == 4) {
          uVar2 = 0xffffffff821ac1b0;
          goto LAB_822a4a28;
        }
        uVar2 = 0xffffffff821ac1c0;
        if (iVar6 == 5) goto LAB_822a4a28;
      }
      iVar6 = *(int *)(iVar4 + *param_1);
      if (iVar6 == 1) {
        uVar2 = 0xffffffff821ac248;
LAB_822a4a88:
        fn_82358FD8(uStack0000001c,auStack_120,0x20,uVar2);
      }
      else {
        if (iVar6 == 2) {
          uVar2 = 0xffffffff821ac234;
          goto LAB_822a4a88;
        }
        if (iVar6 == 3) {
          uVar2 = 0xffffffff821ac258;
          goto LAB_822a4a88;
        }
        if (iVar6 == 4) {
          uVar2 = 0xffffffff821ac20c;
          goto LAB_822a4a88;
        }
        uVar2 = 0xffffffff821ac220;
        if (iVar6 == 5) goto LAB_822a4a88;
      }
      iVar6 = 1;
      if (uVar5 < *(uint *)(*param_1 + 0xbc)) {
        iVar6 = 0;
      }
      else if (uVar5 == *(uint *)(*param_1 + 0xbc)) {
        iVar6 = 2;
      }
      uStack_168 = (ulonglong)uVar5;
      iStack_1e0 = 0;
      iStack_1dc = 0;
      dStack_198 = (double)uStack_168;
      uStack_1d8 = 0;
      uStack_1a0 = 0;
      uStack_19c = 3;
      fn_82290458(&iStack_1e0,&uStack_1a0);
      fn_82273C88(&uStack_1a0);
      puStack_178 = auStack_160;
      uStack_180 = 0;
      uStack_17c = 5;
      fn_82290458(&iStack_1e0,&uStack_180);
      fn_82273C88(&uStack_180);
      lStack_170 = (longlong)iVar6;
      uStack_1d0 = 0;
      dStack_1c8 = (double)lStack_170;
      uStack_1cc = 3;
      fn_82290458(&iStack_1e0,&uStack_1d0);
      fn_82273C88(&uStack_1d0);
      if (uVar5 == *(uint *)(*param_1 + 0xbc)) {
        puStack_1b8 = auStack_e0;
        uStack_1c0 = 0;
        uStack_1bc = 5;
        fn_82290458(&iStack_1e0,&uStack_1c0);
        puVar1 = &uStack_1c0;
      }
      else {
        puStack_1a8 = &lbl_820E975C;
        uStack_1b0 = 0;
        uStack_1ac = 5;
        fn_82290458(&iStack_1e0,&uStack_1b0);
        puVar1 = &uStack_1b0;
      }
      fn_82273C88(puVar1);
      puStack_188 = auStack_120;
      uStack_190 = 0;
      uStack_18c = 5;
      fn_82290458(&iStack_1e0,&uStack_190);
      fn_82273C88(&uStack_190);
      fn_82672C20(*(undefined4 *)(*param_1 + 0x28),0xffffffff821ac300,iStack_1e0,
                        iStack_1dc - iStack_1e0 >> 4);
      fn_822902E8(&iStack_1e0);
      uVar3 = (ulonglong)uStack_1f0;
      iVar4 = iVar4 + 8;
      uVar5 = uVar5 + 1;
      uStack_1f0 = (uint)(uVar3 - 1);
    } while (uVar3 - 1 != 0);
  }
  return;
}

