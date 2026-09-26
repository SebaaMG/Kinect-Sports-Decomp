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
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_83296960;
extern unsigned int lbl_83296AE0;
extern unsigned int lbl_83296BA8;
extern unsigned int lbl_83296BAC;
extern unsigned int lbl_83296BB0;
extern unsigned int lbl_83296BB4;
extern unsigned int lbl_83296BB8;
extern unsigned int lbl_83296BBC;
extern unsigned int lbl_83296BD0;


void fn_82530620(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lbl_83296BAC = 0;
  lbl_83296AE0 = &lbl_83296960;
  lbl_83296BB0 = 1;
  lbl_83296BB4 = 1;
  lbl_83296BB8 = 1;
  lbl_83296BA8 = 1;
  lbl_83296BBC = 1;
  if (lbl_8326B430 / lbl_8326B434 != 1) {
    lbl_83296BA8 = 3;
  }
  puVar1 = (undefined4 *)&lbl_83296BD0;
  lVar2 = 2;
  do {
    puVar1 = puVar1 + 0x2c;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

