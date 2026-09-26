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
extern int fn_830824B8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8213A16C;
extern unsigned int lbl_821AAD20;


undefined4 * fn_82D931B8(undefined4 *param_1,float *param_2,undefined8 param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_r0;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  *param_1 = &lbl_8213A16C;
  *(undefined2 *)((int)param_1 + 6) = 1;
  puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0xd0 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0xe0 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  fn_830824B8(param_1 + 4);
  *(undefined1 *)(param_1 + 2) = 0;
  uVar2 = lbl_821AAD20;
  param_1[0x2d] = lbl_821AAD20;
  param_1[0x2e] = uVar2;
  if (param_4 == '\0') {
    *(undefined1 *)((int)param_1 + 9) = 0xff;
  }
  else {
    *(byte *)((int)param_1 + 9) = (byte)(int)*param_2 & 0xf;
  }
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  uVar2 = lbl_82002AE0;
  puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0xf0 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0x100 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(short *)((int)param_1 + 0x11e) = (short)((uint)uVar2 >> 0x10);
  return param_1;
}

