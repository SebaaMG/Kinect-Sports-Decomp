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
#define TBLr 0
extern unsigned int *auStack_70;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_82DCC3F0();
extern unsigned int iStack_e4;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82D4BF80(int param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint auStack_f0 [3];
  int iStack_e4;
  undefined1 auStack_e0 [64];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "TtrcMopp";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  auStack_f0[0] = *(uint *)(param_1 + 0x34);
  uStack_4c = *(undefined4 *)(param_1 + 0x1c);
  uStack_50 = *(undefined4 *)(param_1 + 0x18);
  auStack_f0[2] = *(undefined4 *)(param_3 + 8);
  lVar4 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  uStack_60 = *puVar1;
  uStack_5c = puVar1[1];
  uStack_58 = puVar1[2];
  uStack_54 = puVar1[3];
  uStack_a0 = 0;
  uStack_9c = 0;
  auStack_f0[1] = 0;
  if (auStack_f0[0] != 0) {
    lVar4 = (ulonglong)auStack_f0[0] + 0x10;
  }
  iStack_e4 = param_3;
  uStack_48 = uStack_4c;
  fn_82DCC3F0(auStack_e0,lVar4,auStack_70,param_2,auStack_f0,param_4);
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

