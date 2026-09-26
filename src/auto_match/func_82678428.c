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
extern int fn_8268CEC0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82678428(int param_1)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_30 = *(undefined4 *)(param_1 + 0x104);
  uStack_2c = *(undefined4 *)(param_1 + 0x108);
  uStack_28 = *(undefined4 *)(param_1 + 0x10c);
  uStack_24 = *(undefined4 *)(param_1 + 0x110);
  uStack_20 = *(undefined4 *)(param_1 + 0x114);
  uStack_1c = *(undefined4 *)(param_1 + 0x118);
  fn_8268CEC0(&uStack_30);
  uVar3 = lbl_821AAD20;
  uVar2 = lbl_82002AE0;
  puVar1 = *(ulonglong **)(param_1 + 0xd8);
  *(undefined4 *)(puVar1 + 0xf0) = uStack_30;
  *(undefined4 *)(puVar1 + 0xf1) = uVar3;
  *(undefined4 *)((int)puVar1 + 0x784) = uStack_2c;
  *(undefined4 *)((int)puVar1 + 0x78c) = uStack_28;
  *puVar1 = *puVar1 | 0x8000000000000000;
  puVar1 = *(ulonglong **)(param_1 + 0xd8);
  *(undefined4 *)(puVar1 + 0xf2) = uStack_24;
  *(undefined4 *)((int)puVar1 + 0x794) = uStack_20;
  *(undefined4 *)(puVar1 + 0xf3) = uVar3;
  *(undefined4 *)((int)puVar1 + 0x79c) = uStack_1c;
  *puVar1 = *puVar1 | 0x8000000000000000;
  puVar1 = *(ulonglong **)(param_1 + 0xd8);
  *(undefined4 *)(puVar1 + 0xf4) = uVar3;
  *(undefined4 *)((int)puVar1 + 0x7a4) = uVar3;
  *(undefined4 *)(puVar1 + 0xf5) = uVar2;
  *(undefined4 *)((int)puVar1 + 0x7ac) = uVar3;
  *puVar1 = *puVar1 | 0x8000000000000000;
  puVar1 = *(ulonglong **)(param_1 + 0xd8);
  *(undefined4 *)(puVar1 + 0xf6) = uVar3;
  *(undefined4 *)((int)puVar1 + 0x7b4) = uVar3;
  *(undefined4 *)(puVar1 + 0xf7) = uVar3;
  *(undefined4 *)((int)puVar1 + 0x7bc) = uVar2;
  *puVar1 = *puVar1 | 0x8000000000000000;
  return;
}

