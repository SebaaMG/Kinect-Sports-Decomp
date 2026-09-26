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
extern int fn_822509A0();
extern int fn_82359C18();
extern int fn_823D5BA8();


void fn_823D6088(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *apuStack_40 [16];
  
  fn_823D5BA8();
  fn_823D5BA8(param_1 + 0x10);
  fn_823D5BA8(param_1 + 0x20);
  fn_823D5BA8(param_1 + 0x30);
  fn_823D5BA8(param_1 + 0x40);
  fn_823D5BA8(param_1 + 0x50);
  fn_823D5BA8(param_1 + 0x60);
  fn_823D5BA8(param_1 + 0x70);
  puVar1 = *(undefined4 **)(param_1 + 0x84);
  apuStack_40[0] = (undefined4 *)*puVar1;
  while( true ) {
    puVar2 = apuStack_40[0];
    if (apuStack_40[0] == puVar1) break;
    fn_82359C18(apuStack_40[0] + 6);
    puVar2[10] = 0;
    fn_82359C18(puVar2 + 0xc);
    puVar2[0x10] = 0;
    fn_822509A0(apuStack_40);
    puVar1 = *(undefined4 **)(param_1 + 0x84);
  }
  fn_82359C18(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  fn_82359C18(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  fn_82359C18(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  fn_82359C18(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  fn_82359C18(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x100) = 0;
  fn_82359C18(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x118) = 0;
  fn_82359C18(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x130) = 0;
  fn_82359C18(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x148) = 0;
  fn_82359C18(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x160) = 0;
  fn_82359C18(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x178) = 0;
  fn_82359C18(param_1 + 0x180);
  *(undefined4 *)(param_1 + 400) = 0;
  fn_82359C18(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  fn_82359C18(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  fn_82359C18(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  fn_82359C18(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  fn_82359C18(param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x208) = 0;
  fn_82359C18(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x220) = 0;
  fn_82359C18(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x238) = 0;
  fn_82359C18(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x250) = 0;
  fn_82359C18(param_1 + 600);
  *(undefined4 *)(param_1 + 0x268) = 0;
  fn_82359C18(param_1 + 0x270);
  *(undefined4 *)(param_1 + 0x280) = 0;
  fn_82359C18(param_1 + 0x288);
  *(undefined4 *)(param_1 + 0x298) = 0;
  fn_82359C18(param_1 + 0x2a0);
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  fn_82359C18(param_1 + 0x2b8);
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  fn_82359C18(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  fn_82359C18(param_1 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  return;
}

