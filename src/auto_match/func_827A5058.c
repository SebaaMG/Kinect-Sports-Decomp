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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern int fn_8267C4F0();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_8278E7B0();
extern int fn_827949B0();
extern int fn_82794B88();
extern int fn_82795EE0();
extern int fn_8279C588();
extern int fn_827A3088();
extern int fn_827AFDE0();
extern unsigned int lbl_82015C34;
extern unsigned int uStack_100;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


undefined4 * fn_827A5058(undefined4 *param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [160];
  
  param_1[1] = 1;
  *param_1 = &lbl_82015C34;
  param_1[2] = 0;
  param_1[3] = param_2;
  iVar2 = fn_82794B88(*(undefined4 *)(*(int *)(param_2 + 8) + 8));
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  param_1[4] = iVar2;
  uVar1 = fn_82794B88(*(undefined4 *)(*(int *)(param_2 + 8) + 8));
  fn_827949B0(param_1 + 5,uVar1);
  param_1[0xf] = 0;
  puVar5 = param_1 + 0x12;
  *(undefined1 *)(param_1 + 0x10) = 0;
  puVar6 = param_1 + 0x10;
  lVar7 = 5;
  do {
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[1] = 0;
    puVar6 = puVar6 + 4;
    *(undefined1 *)puVar6 = 0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  fn_826FDED0(auStack_d0,*(undefined4 *)(param_1[4] + 0x1c));
  puVar4 = *(undefined1 **)(*(int *)(*(int *)(param_2 + 8) + 8) + 0x1c);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = auStack_d0;
  }
  uVar3 = fn_8278E7B0(param_1[4],puVar4);
  if (param_1[2] != 0) {
    fn_8267C4F0(param_1[2]);
  }
  param_1[2] = uVar3;
  fn_82795EE0(param_1 + 5,param_1[4],uVar3);
  uVar1 = fn_8279C588(*(undefined4 *)(param_1[3] + 8));
  puVar6 = param_1 + 0x25;
  lVar7 = 10;
  do {
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e0 = 0;
    uStack_e4 = 0;
    uStack_e8 = 0;
    uStack_dc = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_fc = 0;
    iVar2 = fn_827AFDE0(uVar1,&uStack_100);
    lVar7 = lVar7 + -1;
    puVar6 = puVar6 + 1;
    *puVar6 = *(undefined4 *)(iVar2 + 0x14);
  } while (lVar7 != 0);
  iVar2 = fn_827A3088(auStack_a0);
  puVar4 = (undefined1 *)(iVar2 + -4);
  lVar7 = 5;
  do {
    puVar5[-1] = *(undefined4 *)(puVar4 + 4);
    *puVar5 = *(undefined4 *)((iVar2 - (int)(param_1 + 0x11)) + (int)puVar5);
    puVar5[1] = *(undefined4 *)(puVar4 + 0xc);
    puVar4 = puVar4 + 0x10;
    *(undefined1 *)(puVar5 + 2) = *puVar4;
    puVar5 = puVar5 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(iVar2 + 0x50);
  fn_826FDF58(auStack_d0);
  return param_1;
}

