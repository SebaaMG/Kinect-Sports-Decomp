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
extern int fn_829E0C20();
extern int fn_82A1DDC0();


undefined8 fn_829E1288(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar1;
  int in_r0;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  uint in_register_000103e0;
  uint in_register_000103e4;
  uint in_register_000103e8;
  uint in_vr62;
  uint in_register_000103f0;
  uint in_register_000103f4;
  uint in_register_000103f8;
  uint in_vr63;
  
  if (((param_3 & 0xffff) == 0) || (lVar3 = fn_829E0C20(param_2,param_3), lVar3 == 0)) {
    uVar2 = 0xffffffff80004005;
  }
  else {
    altv300_21(in_vs32,in_vs43);
    altv300_23(in_vs42,in_vs43);
    puVar1 = (uint *)(in_r0 + (int)param_1 & 0xfffffff0);
    *puVar1 = in_register_000103f0 | in_register_000103e0;
    puVar1[1] = in_register_000103f4 | in_register_000103e4;
    puVar1[2] = in_register_000103f8 | in_register_000103e8;
    puVar1[3] = in_vr63 | in_vr62;
    fn_82A1DDC0(param_1 + 0x10,lVar3 + 0x18,700);
    fn_82A1DDC0(param_1 + 0x2cc,lVar3 + 0x2d4,700);
    fn_82A1DDC0(param_1 + 0x588,lVar3 + 0x590,1);
    fn_82A1DDC0(param_1 + 0x58c,lVar3 + 0x594,4);
    uVar2 = 0;
  }
  return uVar2;
}

