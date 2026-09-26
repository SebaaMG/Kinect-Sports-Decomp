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
extern int fn_82CE5410();
extern unsigned int lbl_82134508;
extern unsigned int lbl_82138B44;


void fn_82D560E8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_r0;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_r6;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  iVar3 = fn_82CE5410();
  puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x40);
  puVar4[2] = in_r6;
  *puVar4 = &lbl_82138B44;
  *(undefined2 *)(puVar4 + 1) = 0x40;
  *(undefined2 *)((int)puVar4 + 6) = 1;
  puVar4[3] = 0;
  uVar2 = lbl_82134508;
  puVar4[4] = 0;
  puVar4[5] = 0x80000000;
  puVar4[0xc] = uVar2;
  puVar1 = (undefined4 *)((int)puVar4 + in_r0 + 0x30 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar4[8] = uVar2;
  puVar1 = (undefined4 *)((int)puVar4 + in_r0 + 0x20 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  return;
}

