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
extern unsigned int lbl_821956B4;
extern unsigned int lbl_821C9844;
extern unsigned int lbl_831E4D44;


void fn_825D4FE8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  param_1[0xe] = param_3;
  param_1[0xf] = param_2;
  uVar4 = lbl_831E4D44;
  uVar3 = lbl_821956B4;
  *param_1 = &lbl_821C9844;
  param_1[6] = uVar3;
  param_1[0x10] = 0;
  param_1[7] = uVar4;
  param_1[0x11] = 0;
  param_1[0xc] = 1;
  param_1[0xd] = 1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  puVar2 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  iVar1 = *(int *)(*(int *)(param_2 + 0xb8) + 4);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = *(undefined4 **)(iVar1 + 0x124);
  *(undefined4 **)(iVar1 + 0x124) = param_1 + 4;
  param_1[4] = iVar1 + 0x120;
  param_1[5] = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  *puVar2 = param_1 + 4;
  return;
}

