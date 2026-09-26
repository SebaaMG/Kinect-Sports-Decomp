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
extern int fn_82511350();
extern int fn_8265C9E0();
extern int fn_828222B8();
extern int fn_82822DC8();
extern int fn_828252D0();
extern int fn_82828A70();
extern int fn_82828AE8();
extern int fn_82F672D8();
extern int fn_82F691F0();


void fn_82827FB0(undefined8 param_1)

{
  int iVar2;
  undefined4 *puVar3;
  longlong lVar1;
  undefined4 uVar4;
  undefined1 auStack_30 [48];
  
  iVar2 = fn_828252D0(0x500);
  fn_82F672D8(iVar2 + 0xb8,param_1,0x100);
  *(undefined1 *)(iVar2 + 0x1b7) = 0;
  *(undefined1 *)(iVar2 + 0x1b8) = 0;
  puVar3 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  *(undefined4 **)(iVar2 + 0x388) = puVar3;
  puVar3 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  *(undefined4 **)(iVar2 + 0x3bc) = puVar3;
  fn_82822DC8(iVar2 + 0x38c);
  fn_82822DC8(iVar2 + 0x3a4);
  *(undefined4 *)(iVar2 + 0x39c) = 0;
  *(undefined4 *)(iVar2 + 0x3a0) = 0;
  lVar1 = fn_8265C9E0(0xc);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    fn_82828A70(lVar1,auStack_30);
  }
  *(int *)(iVar2 + 0x2ec) = (int)lVar1;
  lVar1 = fn_8265C9E0(0x10);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    fn_82828AE8(lVar1,auStack_30,auStack_30);
  }
  *(int *)(iVar2 + 0x2f0) = (int)lVar1;
  fn_828222B8(iVar2 + 0x2f4);
  fn_828222B8(iVar2 + 0x2fc);
  lVar1 = fn_8265C9E0(0x10);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    fn_82511350(lVar1,auStack_30,auStack_30);
    uVar4 = (undefined4)lVar1;
  }
  *(undefined4 *)(iVar2 + 0x304) = uVar4;
  fn_828222B8(iVar2 + 0x30c);
  fn_82822DC8(iVar2 + 0x318);
  fn_82822DC8(iVar2 + 0x344);
  fn_82822DC8(iVar2 + 0x36c);
  *(undefined4 *)(iVar2 + 0x328) = 0;
  *(undefined4 *)(iVar2 + 0x358) = 0;
  *(undefined4 *)(iVar2 + 0x380) = 0;
  *(undefined1 *)(iVar2 + 0x3eb) = 0;
  *(undefined1 *)(iVar2 + 0x3ec) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x51) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(iVar2 + 0x80,0,0x38);
}

