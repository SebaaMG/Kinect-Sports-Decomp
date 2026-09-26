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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83296AE0;


void fn_824840F0(undefined8 param_1,int param_2,int param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 *puVar1;
  int in_r0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  uVar5 = in_vr77;
  uVar4 = in_register_000104d8;
  uVar3 = in_register_000104d4;
  uVar2 = in_register_000104d0;
  if (lbl_83296AE0 != 0) {
    puVar1 = (undefined4 *)(lbl_83296AE0 + 0x10U & 0xfffffff0);
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
  }
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  if (lbl_83296AE0 != 0) {
    puVar1 = (undefined4 *)(lbl_83296AE0 + 0x30U & 0xfffffff0);
    in_register_000104d0 = *puVar1;
    in_register_000104d4 = puVar1[1];
    in_register_000104d8 = puVar1[2];
    in_vr77 = puVar1[3];
  }
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uVar5 = lbl_821CC160;
  if (lbl_83296AE0 != 0) {
    uVar5 = *(undefined4 *)(lbl_83296AE0 + 0x60);
  }
  *param_4 = uVar5;
  *param_5 = lbl_821CA460;
  return;
}

