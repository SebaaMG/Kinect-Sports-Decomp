extern unsigned int **ppuRam83297954;
extern unsigned int *puRam83297958;
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
extern unsigned int lbl_821C250C;
extern unsigned int uRam8329795c;
extern unsigned int uRam83297960;
extern unsigned int uRam83297964;


void fn_8313F0B0(void)

{
  undefined4 *puVar1;

  while (puRam83297958 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puRam83297958[1];
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puRam83297958[2];
      *puRam83297958 = 0;
      puRam83297958[1] = 0;
      puRam83297958[2] = 0;
      puRam83297958 = puVar1;
    }
    else {
      puRam83297958[1] = puVar1[2];
      puVar1[2] = puRam83297958;
      puRam83297958 = puVar1;
    }
  }
  puRam83297958 = (undefined4 *)0x0;
  uRam83297964 = 0;
  ppuRam83297954 = &lbl_821C250C;
  uRam83297960 = 0x83297958;
  uRam8329795c = 0x83297958;
  return;
}
