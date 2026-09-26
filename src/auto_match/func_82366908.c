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
extern int fn_82561778();
extern unsigned int lbl_82191FD4;
extern unsigned int lbl_8219676C;
extern unsigned int lbl_82196770;
extern unsigned int lbl_82196774;
extern unsigned int lbl_821B2D1C;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CC160;


longlong fn_82366908(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[4] = param_2;
  puVar2 = (undefined4 *)((uint)(puVar1 + 0x68) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (undefined4 *)((uint)(puVar1 + 0x6c) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (undefined4 *)((uint)(puVar1 + 0x70) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (undefined4 *)((uint)(puVar1 + 0x74) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  *puVar1 = &lbl_821B2D1C;
  puVar2 = (undefined4 *)((uint)(puVar1 + 0x78) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar1[0x7c] = lbl_8219676C;
  puVar1[0x7d] = lbl_82196770;
  uVar5 = lbl_821CC160;
  puVar1[0x7e] = lbl_82196774;
  puVar1[0x7f] = lbl_821CA1A0;
  puVar1[0x80] = lbl_821CA1A4;
  uVar3 = lbl_82191FD4;
  puVar1[0x81] = lbl_821CA1A8;
  puVar1[0x82] = lbl_8219676C;
  puVar1[0x83] = lbl_82196770;
  puVar1[0x84] = lbl_82196774;
  puVar1[0x85] = lbl_8219676C;
  puVar1[0x86] = lbl_82196770;
  uVar4 = lbl_82196774;
  puVar1[0x88] = uVar3;
  puVar1[0x89] = uVar5;
  puVar1[0x87] = uVar4;
  puVar1[0x8a] = uVar3;
  puVar1[0x8b] = 0;
  puVar1[0x8c] = 0;
  puVar1[0x8d] = 0;
  fn_82561778(param_1 + 0x20,param_3,2);
  return param_1;
}

