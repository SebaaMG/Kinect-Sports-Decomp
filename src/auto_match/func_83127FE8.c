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
extern int fn_826933E8();
extern unsigned int lbl_83156A70;
extern unsigned int lbl_83156A94;
extern unsigned int lbl_83156A98;


void fn_83127FE8(void)

{
  ulonglong uVar1;
  undefined **ppuVar2;
  longlong lVar3;
  
  uVar1 = fn_826933E8();
  uVar1 = uVar1 & 0xffffffff;
  ppuVar2 = &lbl_83156A70;
  lVar3 = 8;
  do {
    uVar1 = (uVar1 & 0x7ffff) << 0xd ^ uVar1;
    uVar1 = uVar1 >> 0x11 ^ uVar1;
    uVar1 = (uVar1 & 0x7ffffff) << 5 ^ uVar1;
    ppuVar2 = ppuVar2 + 1;
    *ppuVar2 = (undefined *)uVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lbl_83156A98 = 7;
  lbl_83156A94 = 0x587c4;
  return;
}

