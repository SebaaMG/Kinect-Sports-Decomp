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
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern unsigned int *auStack_34;
extern unsigned int *auStack_3c;
extern int fn_8265CF70();
extern int fn_8265CF90();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82669838();
extern int fn_8266AB18();
extern unsigned int stack0x00000024;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_30;
extern unsigned int uStack_38;


void fn_8265CE58(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uStack00000014;
  uint uStack0000001c;
  undefined4 uStack00000024;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 *puStack_20;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uVar4 = fn_8265CF70(param_1);
  if (uVar4 < uStack0000001c) {
    puVar5 = (undefined4 *)fn_82668D80(auStack_3c,uStack00000014);
    uVar1 = *puVar5;
    puStack_20 = (undefined1 *)&stack0x00000024;
    lVar2 = fn_8265CF70(uStack00000014);
    fn_8265CF90(uStack00000014,uVar1,(ulonglong)uStack0000001c - lVar2,puStack_20);
  }
  else {
    uVar4 = fn_8265CF70(uStack00000014);
    if (uStack0000001c < uVar4) {
      puVar5 = (undefined4 *)fn_82668D80(auStack_34,uStack00000014);
      uVar4 = uStack0000001c;
      uStack_38 = *puVar5;
      uVar3 = fn_82668D40(auStack_2c,uStack00000014);
      puVar5 = (undefined4 *)fn_82669838(auStack_28,uVar3,uVar4);
      uStack_30 = *puVar5;
      fn_8266AB18(auStack_24,uStack00000014,uStack_30,uStack_38);
    }
  }
  return;
}

