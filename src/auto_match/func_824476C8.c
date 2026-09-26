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
extern int fn_82437388();
extern int fn_824510C0();
extern int fn_82453DE8();
extern int fn_8265C9E0();
extern unsigned int lbl_821915B4;
extern unsigned int lbl_82195E80;
extern unsigned int lbl_821B9C40;


undefined4 * fn_824476C8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_register_000104b0;
  undefined4 in_register_000104b4;
  undefined4 in_register_000104b8;
  undefined4 in_vr75;
  
  fn_824510C0();
  *param_1 = &lbl_821B9C40;
  puVar2 = (undefined4 *)fn_8265C9E0(4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0x5dc;
  }
  param_1[0x12] = puVar2;
  *(undefined4 *)(param_1[0x10] + 0x208) = 0x1b;
  *(undefined4 *)(param_1[0x10] + 0x114) = 4;
  fn_82437388(param_1);
  uVar1 = lbl_82195E80;
  *(undefined4 *)(param_1[0x10] + 0x16c) = lbl_821915B4;
  *(undefined4 *)(param_1[0x11] + 0x3c) = uVar1;
  puVar2 = (undefined4 *)(param_1[0x10] + 0x170 & 0xfffffff0);
  *puVar2 = in_register_000104b0;
  puVar2[1] = in_register_000104b4;
  puVar2[2] = in_register_000104b8;
  puVar2[3] = in_vr75;
  *(undefined4 *)(param_1[0x10] + 0x180) = 0x26;
  fn_82453DE8(param_1);
  return param_1;
}

