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
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();


void fn_82D33AF8(int param_1,int param_2,uint param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  int iVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  
  *(int *)(param_2 + 0x2c) = (int)param_4;
  if ((*(uint *)(param_2 + 0x28) & 0x80000000) == 0) {
    iVar3 = *(int *)(param_2 + 0x20) * 0x30 + *(int *)(param_1 + 0x1c);
    iVar2 = *(int *)(param_2 + 0x24) * 0x30 + *(int *)(param_1 + 0x1c);
    *(uint *)(iVar3 + 0x28) = *(uint *)(iVar3 + 0x28) & 0x80000000 | param_3;
    *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) & 0x80000000 | param_3;
    fn_82D33AF8(param_1,iVar3,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
    fn_82D33AF8(param_1,iVar2,*(undefined4 *)(param_2 + 0x24),param_4);
    vectorMinimumFloatingPoint(in_vs45,in_vs32);
    puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = in_register_000100c0;
    puVar1[1] = in_register_000100c4;
    puVar1[2] = in_register_000100c8;
    puVar1[3] = in_vr12;
    vectorMaximumFloatingPoint(in_vs42,in_vs43);
    puVar1 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
    *puVar1 = in_register_00010090;
    puVar1[1] = in_register_00010094;
    puVar1[2] = in_register_00010098;
    puVar1[3] = in_vr9;
  }
  return;
}

