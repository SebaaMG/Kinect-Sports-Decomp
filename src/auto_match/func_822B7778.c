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
extern int fn_822315A0();
extern int fn_825113E0();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821C2414;
extern unsigned int lbl_821C241C;


void fn_822B7778(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x118) + 0x14;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  puVar3 = (undefined4 *)fn_8265C9E0(0x18);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 1;
    puVar3[2] = 1;
    *puVar3 = &lbl_821AD588;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[4] = param_2;
      puVar3[5] = uVar1;
      puVar3[3] = &lbl_821C2414;
    }
  }
  iVar2 = *(int *)(param_1 + 0x164);
  *(undefined4 **)(param_1 + 0x164) = puVar3;
  *(undefined4 **)(param_1 + 0x160) = puVar3 + 3;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  fn_825113E0(lVar4,0x26,*(undefined4 *)(param_1 + 0x160));
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  puVar3 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 1;
    puVar3[2] = 1;
    *puVar3 = &lbl_821AD588;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[4] = uVar1;
      puVar3[3] = &lbl_821C241C;
    }
  }
  iVar2 = *(int *)(param_1 + 0x15c);
  *(undefined4 **)(param_1 + 0x15c) = puVar3;
  *(undefined4 **)(param_1 + 0x158) = puVar3 + 3;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  fn_825113E0(lVar4,0x2e,*(undefined4 *)(param_1 + 0x158));
  return;
}

