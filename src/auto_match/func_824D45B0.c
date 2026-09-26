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
extern int fn_824DA9F8();
extern int fn_8265C9E0();
extern unsigned int lbl_821955D4;
extern unsigned int lbl_821C0F04;
extern unsigned int lbl_821CC160;


void fn_824D45B0(int param_1,longlong param_2)

{
  undefined4 *puVar1;
  int in_r0;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  uVar2 = fn_8265C9E0(0x430);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_824DA9F8(uVar2,param_1,param_2 + 0x48);
  }
  *(undefined4 *)(param_1 + 0xf0) = uVar3;
  puVar4 = (undefined4 *)fn_8265C9E0(0x80);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[0x18] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1e] = 0;
    puVar4[4] = 0;
    puVar5 = puVar4 + 8;
    *puVar4 = &lbl_821C0F04;
    uVar3 = lbl_821955D4;
    puVar4[0x17] = lbl_821955D4;
    lVar6 = 2;
    do {
      puVar1 = (undefined4 *)(in_r0 + (int)puVar5 & 0xfffffff0);
      *puVar1 = in_register_000104d0;
      puVar1[1] = in_register_000104d4;
      puVar1[2] = in_register_000104d8;
      puVar1[3] = in_vr77;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar4[0x17] = uVar3;
    puVar4[0x15] = 1;
    puVar4[0x16] = 1;
    uVar3 = lbl_821CC160;
    puVar4[0x1c] = 1;
    puVar4[0x19] = uVar3;
    puVar4[0x1d] = 1;
    puVar5 = puVar4;
  }
  *(undefined4 **)(param_1 + 0xf4) = puVar5;
  return;
}

