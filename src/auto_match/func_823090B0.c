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
extern unsigned int *auStack_40;
extern int fn_822C5B18();
extern int fn_823000E0();
extern int fn_8230BBC0();
extern unsigned int lbl_821CC160;


void fn_823090B0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_40 [64];
  
  uVar3 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  puVar2 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (undefined4 *)(param_1 + 0x40U & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  fn_8230BBC0();
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x70) = 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x1e8);
  *(undefined4 *)(iVar1 + 0x578) = 0x7fe;
  uVar4 = fn_822C5B18(auStack_40,param_1 + 0xd8);
  fn_823000E0(iVar1,uVar4);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x234) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x220) = 1;
  return;
}

