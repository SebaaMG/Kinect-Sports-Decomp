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
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B46D0;
extern unsigned int lbl_821CC160;


undefined4 * fn_823768A8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821AD588;
    puVar2[2] = 1;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[0xc] = 1;
      puVar2[5] = param_2;
      puVar2[7] = 0;
      uVar1 = lbl_821CC160;
      puVar2[4] = 4;
      puVar2[6] = uVar1;
      puVar2[3] = &lbl_821B46D0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 4;
    }
  }
  param_1[1] = puVar2;
  *param_1 = puVar2 + 3;
  return param_1;
}

