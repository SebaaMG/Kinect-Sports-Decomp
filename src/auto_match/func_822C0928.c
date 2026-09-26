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
extern int fn_8286D250();
extern unsigned int lbl_821B03E8;
extern unsigned int lbl_821B043C;


undefined4 * fn_822C0928(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0xe0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    fn_822CA248(puVar1,param_2);
    puVar1[0x30] = 0;
    *puVar1 = &lbl_821B03E8;
    puVar1[0x1a] = &lbl_821B043C;
    puVar1[0x31] = 0;
    puVar1[0x33] = 0;
    fn_8286D250(puVar1 + 0x34);
  }
  return puVar1;
}

