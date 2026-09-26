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
extern int fn_82FF7FB8();
extern unsigned int lbl_831BC680;


void fn_82FA76F0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = lbl_831BC680;
  puVar3 = (undefined4 *)0x0;
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    if ((puVar2[3] & 0x40000000) == 0) {
      puVar1 = (undefined4 *)*puVar2;
      fn_82FF7FB8(0xffffffff831bc680,puVar2,puVar3);
    }
    else {
      puVar1 = (undefined4 *)*puVar2;
      puVar3 = puVar2;
    }
  }
  return;
}

