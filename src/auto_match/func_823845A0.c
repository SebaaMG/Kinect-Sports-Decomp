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
extern int fn_82383F20();
extern unsigned int lbl_821CC160;


void fn_823845A0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  if (*(int *)(param_1 + 0x280) != 0) {
    fn_82383F20(param_1 + 0x10);
    fn_82383F20(param_1 + 0x100);
    uVar2 = lbl_821CC160;
    *(undefined4 *)(param_1 + 0x250) = lbl_821CC160;
    *(undefined4 *)(param_1 + 0x254) = uVar2;
    *(undefined4 *)(param_1 + 600) = uVar2;
    *(undefined4 *)(param_1 + 0x270) = 1;
    *(undefined4 *)(param_1 + 0x25c) = uVar2;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x260) = uVar2;
    *(undefined4 *)(param_1 + 0x274) = 1;
    *(undefined4 *)(param_1 + 0x264) = uVar2;
    *(undefined4 *)(param_1 + 0x278) = 1;
    puVar1 = (undefined4 *)(param_1 + 0x200U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    *(undefined4 *)(param_1 + 0x27c) = 1;
    puVar1 = (undefined4 *)(param_1 + 0x210U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    *(undefined4 *)(param_1 + 0x280) = 0;
    puVar1 = (undefined4 *)(param_1 + 0x220U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    puVar1 = (undefined4 *)(param_1 + 0x230U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    puVar1 = (undefined4 *)(param_1 + 0x240U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
  }
  return;
}

