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
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B9BC8;
extern unsigned int lbl_821CC160;


undefined4 * fn_82454A88(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x40);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821A8D8C;
    puVar2[2] = 1;
    if (puVar2 + 4 != (undefined4 *)0x0) {
      puVar2[5] = param_3;
      puVar2[0xc] = lbl_821CC160;
      puVar2[4] = &lbl_821B9BC8;
      puVar1 = (undefined4 *)((uint)(puVar2 + 8) & 0xfffffff0);
      *puVar1 = in_register_000104d0;
      puVar1[1] = in_register_000104d4;
      puVar1[2] = in_register_000104d8;
      puVar1[3] = in_vr77;
      puVar2[6] = 3;
      puVar2[7] = 0;
      *(undefined1 *)(puVar2 + 0xd) = 0;
    }
  }
  param_1[1] = puVar2;
  *param_1 = puVar2 + 4;
  return param_1;
}

