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
extern unsigned int *auStack_30;
extern int fn_82681838();
extern int fn_826827F8();
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_82697210();
extern int fn_82697248();
extern int fn_8269A418();
extern int fn_826ABE30();
extern int fn_826B44A0();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int uStack_60;


void fn_826B51A8(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 uVar4;
  longlong lVar5;
  byte bVar6;
  uint *puVar7;
  uint uStack_60;
  int iStack_5c;
  undefined4 *puStack_58;
  int iStack_54;
  int aiStack_50 [4];
  char acStack_40 [16];
  undefined1 auStack_30 [48];
  
  uStack_60 = 0;
  fn_82695DA0(acStack_40,*(undefined4 *)(*param_1 + 8));
  if ((acStack_40[0] != '\x05') && (acStack_40[0] != '\a')) {
    uVar2 = fn_82697248(&iStack_54,acStack_40,*param_1,*(undefined1 *)(param_1 + 0xd));
    fn_82681838(acStack_40,uVar2);
    lVar5 = (ulonglong)*(uint *)(iStack_54 + 8) - 1;
    *(int *)(iStack_54 + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(iStack_54);
    }
  }
  if (acStack_40[0] == '\x05') {
    fn_82696D38(aiStack_50,acStack_40,*param_1,0xffffffffffffffff,0);
    iVar1 = *(int *)(aiStack_50[0] + 0x10);
    lVar5 = (ulonglong)*(uint *)(aiStack_50[0] + 8) - 1;
    *(int *)(aiStack_50[0] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(aiStack_50[0]);
    }
    if (iVar1 == 0) {
      uStack_60 = param_1[1];
    }
    else {
      auStack_30[0] = 0;
      iVar1 = param_1[8];
      fn_82696D38(&iStack_5c,*(undefined4 *)(*param_1 + 8),*param_1,0xffffffffffffffff,0);
      fn_826B44A0(*param_1,&iStack_5c,auStack_30,iVar1,&uStack_60,0,0);
      lVar5 = (ulonglong)*(uint *)(iStack_5c + 8) - 1;
      *(int *)(iStack_5c + 8) = (int)lVar5;
      if (lVar5 == 0) {
        fn_826944C8(iStack_5c);
      }
      fn_82696330(auStack_30);
    }
  }
  else if (acStack_40[0] == '\a') {
    uStack_60 = fn_82695370(*(undefined4 *)(*param_1 + 8));
  }
  if (uStack_60 == 0) {
    if ((*(byte *)((int)param_1 + 0x36) & 0x80) != 0) {
      fn_82697210(&puStack_58,acStack_40,*param_1);
      fn_826ABE30(param_1 + 9,0xffffffff82007bc0,*puStack_58);
      uVar3 = puStack_58[2];
      puStack_58[2] = (int)((ulonglong)uVar3 - 1);
      if ((ulonglong)uVar3 - 1 == 0) {
        fn_826944C8(puStack_58);
      }
    }
    iVar1 = *param_1;
    bVar6 = *(byte *)(iVar1 + 0xc6) | 0x40;
    uVar3 = param_1[1];
  }
  else {
    iVar1 = *param_1;
    bVar6 = *(byte *)(iVar1 + 0xc6) & 0xbf;
    uVar3 = uStack_60;
  }
  *(uint *)(iVar1 + 0x74) = uVar3;
  *(byte *)(iVar1 + 0xc6) = bVar6;
  uVar4 = fn_8269A418();
  *(undefined1 *)(iVar1 + 0x7c) = uVar4;
  iVar1 = *param_1;
  puVar7 = (uint *)(iVar1 + 8);
  fn_82696330(*(undefined4 *)(iVar1 + 8));
  uVar3 = *puVar7;
  *puVar7 = uVar3 - 0x10;
  if (uVar3 - 0x10 < *(uint *)(iVar1 + 0xc)) {
    fn_826827F8(puVar7);
  }
  fn_82696330(acStack_40);
  return;
}

