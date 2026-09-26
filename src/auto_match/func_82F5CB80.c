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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_8201FBC0;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83263160;
extern unsigned int lbl_83263164;
extern unsigned int lbl_83263168;
extern unsigned int lbl_8326316C;
extern unsigned int lbl_83263170;
extern unsigned int lbl_83263174;
extern unsigned int lbl_83263178;
extern unsigned int lbl_8326317C;
extern unsigned int lbl_83263180;


void fn_82F5CB80(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_r0;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  
  *(undefined4 *)(param_1 + 0x40) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar2 = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = in_register_00010000;
  puVar1[1] = in_ACC;
  puVar1[2] = in_register_00010008;
  puVar1[3] = in_vr0;
  if (lbl_8326317C == 0) {
    lbl_8326317C = 1;
    lbl_83263178 = lbl_82057B54;
    lbl_83263174 = lbl_8200571C;
    lbl_83263170 = lbl_8200DFF4;
    lbl_8326316C = lbl_8201FBC0;
    lbl_83263168 = lbl_82002AE0;
    lbl_83263164 = lbl_82005344;
    lbl_83263160 = lbl_820145BC;
    lbl_83263180 = param_3;
  }
  return;
}

