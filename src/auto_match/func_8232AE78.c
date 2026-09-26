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
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_821B0600;
extern unsigned int lbl_821CC160;


undefined4 * fn_8232AE78(undefined4 *param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  *param_1 = 0;
  param_1[1] = lbl_821CC160;
  param_1[2] = 1;
  fn_82F68CC0(param_1 + 3,param_2,0x104);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  puVar1 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &lbl_821B0600;
    puVar1[1] = 1;
    puVar1[2] = 1;
    puVar1[3] = 0;
  }
  if (param_1[0x45] != 0) {
    fn_822315A0();
  }
  param_1[0x45] = puVar1;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  puVar1 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &lbl_821B0600;
    puVar1[1] = 1;
    puVar1[2] = 1;
    puVar1[3] = 0;
  }
  if (param_1[0x47] != 0) {
    fn_822315A0();
  }
  param_1[0x47] = puVar1;
  param_1[0x46] = 0;
  puVar3 = param_1 + 0x52;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x4c) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  if (*(int *)(param_3 + 0x10) == 0) {
    param_1[0x56] = 0;
  }
  else {
    if (*(int *)(param_3 + 0x10) != param_3) {
      puVar3 = (undefined4 *)0x0;
    }
    uVar2 = (**(code **)**(undefined4 **)(param_3 + 0x10))(*(undefined4 **)(param_3 + 0x10),puVar3);
    param_1[0x56] = uVar2;
  }
  param_1[0x58] = 0;
  return param_1;
}

