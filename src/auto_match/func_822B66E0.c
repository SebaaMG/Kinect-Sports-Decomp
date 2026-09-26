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
extern int fn_82517D50();
extern int fn_825ACAC8();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD0A8;
extern unsigned int lbl_821AD0F4;
extern unsigned int lbl_821CC160;


undefined4 * fn_822B66E0(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  puVar3 = (undefined4 *)fn_8265C9E0(0xc0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    fn_82517D50(puVar3,param_2,8);
    *puVar3 = &lbl_821AD0A8;
    puVar3[0x1a] = &lbl_821AD0F4;
    fn_825ACAC8(puVar3 + 0x29);
    puVar3[0x2f] = 0;
    uVar2 = lbl_821CC160;
    *(undefined1 *)((int)puVar3 + 0x82) = 0;
    puVar3[0x28] = uVar2;
    *(undefined1 *)((int)puVar3 + 0x83) = 0;
    puVar1 = (undefined4 *)((uint)(puVar3 + 0x24) & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    *(undefined1 *)(puVar3 + 0x21) = 0;
  }
  return puVar3;
}

