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
extern int fn_8223A9E0();
extern unsigned int lbl_82195518;


double fn_82239318(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  
  lVar1 = fn_8223A9E0(param_1,0,4);
  lVar2 = fn_8223A9E0(param_1,4,10);
  if (lVar1 == 0) {
    dVar4 = lbl_82195518;
    if (lVar2 == 0) goto LAB_822393b0;
    lVar1 = 0x3f9;
    for (uVar3 = lVar2 << 0x2a; (uVar3 & 0xfff0000000000000) == 0; uVar3 = uVar3 << 1) {
      lVar1 = lVar1 + -1;
    }
    uVar3 = uVar3 & 0xfffffffffffff;
  }
  else {
    lVar1 = lVar1 + 0x3f8;
    uVar3 = lVar2 << 0x2a;
  }
  dVar4 = (double)(lVar1 << 0x34 | uVar3);
LAB_822393b0:
  return (double)(float)dVar4;
}

