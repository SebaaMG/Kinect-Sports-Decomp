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
extern unsigned int *auStack_18;
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern unsigned int *auStack_34;
extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern unsigned int *auStack_44;
extern int fn_822402E8();
extern int fn_8265F8D8();
extern int fn_8265F9A0();
extern int fn_8265FA90();
extern int fn_8265FB40();
extern int fn_8265FB68();
extern int fn_8265FCD8();
extern int fn_82663BE8();
extern int fn_82663C10();
extern int fn_826666A0();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern unsigned int iStack00000024;
extern unsigned int stack0x0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack0000002c;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_8265F210(uint param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar3;
  undefined8 uVar1;
  char cVar6;
  int iVar4;
  int *piVar5;
  longlong lVar2;
  uint uStack00000014;
  undefined4 uStack0000001c;
  int iStack00000024;
  undefined4 uStack0000002c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [24];
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  iStack00000024 = param_3;
  uStack0000002c = param_4;
  fn_82663C10(&uStack_50);
  puVar3 = (undefined4 *)fn_8265F9A0(auStack_44,uStack00000014,&stack0x0000001c);
  uStack_4c = *puVar3;
  uVar1 = fn_8265F8D8(auStack_40,uStack00000014);
  cVar6 = fn_8265FA90(&uStack_4c,uVar1);
  if (cVar6 != '\0') {
    iVar4 = fn_826666A0(&uStack_4c);
    uStack_48 = *(undefined4 *)(iVar4 + 4);
    puVar3 = (undefined4 *)fn_82668D40(auStack_3c,uStack_48);
    uStack_50 = *puVar3;
    while( true ) {
      uVar1 = fn_82668D80(auStack_38,uStack_48);
      cVar6 = fn_82668EA0(&uStack_50,uVar1);
      if (cVar6 == '\0') break;
      piVar5 = (int *)fn_82663BE8(&uStack_50);
      if (*piVar5 == iStack00000024) {
        lVar2 = fn_82663BE8(&uStack_50);
        fn_822402E8(uStack0000002c,lVar2 + 4);
        return 1;
      }
      fn_8265FCD8(&uStack_50);
    }
  }
  puVar3 = (undefined4 *)
           fn_8265F9A0(auStack_34,uStack00000014,(ulonglong)uStack00000014 + 0x10);
  uStack_4c = *puVar3;
  uVar1 = fn_8265F8D8(auStack_30,uStack00000014);
  cVar6 = fn_8265FA90(&uStack_4c,uVar1);
  if (cVar6 != '\0') {
    iVar4 = fn_826666A0(&uStack_4c);
    uStack_48 = *(undefined4 *)(iVar4 + 4);
    puVar3 = (undefined4 *)fn_82668D40(auStack_2c,uStack_48);
    uStack_50 = *puVar3;
    while( true ) {
      uVar1 = fn_82668D80(auStack_28,uStack_48);
      cVar6 = fn_82668EA0(&uStack_50,uVar1);
      if (cVar6 == '\0') break;
      piVar5 = (int *)fn_82663BE8(&uStack_50);
      if (*piVar5 == iStack00000024) {
        lVar2 = fn_82663BE8(&uStack_50);
        fn_822402E8(uStack0000002c,lVar2 + 4);
        return 1;
      }
      fn_8265FCD8(&uStack_50);
    }
  }
  puVar3 = (undefined4 *)fn_8265F9A0(auStack_24,uStack00000014,&stack0x0000001c);
  uStack_4c = *puVar3;
  uVar1 = fn_8265F8D8(auStack_20,uStack00000014);
  cVar6 = fn_8265FA90(&uStack_4c,uVar1);
  if (cVar6 != '\0') {
    iVar4 = fn_826666A0(&uStack_4c);
    uStack_48 = *(undefined4 *)(iVar4 + 4);
    cVar6 = fn_8265FB40(uStack_48);
    if (cVar6 == '\0') {
      lVar2 = fn_8265FB68(uStack_48);
      fn_822402E8(uStack0000002c,lVar2 + 4);
      return 1;
    }
  }
  puVar3 = (undefined4 *)
           fn_8265F9A0(auStack_1c,uStack00000014,(ulonglong)uStack00000014 + 0x14);
  uStack_4c = *puVar3;
  uVar1 = fn_8265F8D8(auStack_18,uStack00000014);
  cVar6 = fn_8265FA90(&uStack_4c,uVar1);
  if (cVar6 != '\0') {
    iVar4 = fn_826666A0(&uStack_4c);
    uStack_48 = *(undefined4 *)(iVar4 + 4);
    cVar6 = fn_8265FB40(uStack_48);
    if (cVar6 == '\0') {
      lVar2 = fn_8265FB68(uStack_48);
      fn_822402E8(uStack0000002c,lVar2 + 4);
      return 1;
    }
  }
  return 0;
}

