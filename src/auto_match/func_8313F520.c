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
extern int fn_825266F8();
extern int fn_8265CA20();
extern unsigned int lbl_832967A8;


void fn_8313F520(void)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = 3;
  puVar2 = &lbl_832967A8;
  do {
    fn_825266F8(puVar2 + -0x59);
    fn_8265CA20(puVar2[-0x58]);
    fn_825266F8(puVar2 + -0x5d);
    fn_8265CA20(puVar2[-0x5c]);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + -0x5c;
  } while (-1 < lVar1);
  return;
}

