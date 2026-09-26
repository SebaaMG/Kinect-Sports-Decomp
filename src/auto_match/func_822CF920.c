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
extern int fn_822CA248();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD878;
extern unsigned int lbl_821AD8CC;


undefined4 * fn_822CF920(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x100);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    fn_822CA248(puVar2,param_2);
    *puVar2 = &lbl_821AD878;
    puVar2[0x1a] = &lbl_821AD8CC;
    puVar2[0x30] = 0;
    puVar2[0x31] = 0;
    puVar2[0x32] = 0xc;
    puVar1 = (undefined4 *)((uint)(puVar2 + 0x34) & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    puVar2[0x38] = 0;
    puVar2[0x39] = 0x18;
    puVar2[0x3a] = 0;
    puVar2[0x3b] = 0xff;
    puVar2[0x3c] = 4;
    puVar2[0x3d] = 0;
  }
  return puVar2;
}

