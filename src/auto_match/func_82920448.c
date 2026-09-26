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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1F2B8();
extern int iRam8321457c;


void fn_82920448(void)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (iRam8321457c == 0) {
    iRam8321457c = 1;
    bVar1 = false;
    uVar2 = fn_8265C940(0,0x24810000);
    uVar3 = fn_8265C940(0,0x24810000);
    if ((((uVar2 & 0xffffffff) == 0) || ((uVar3 & 0xffffffff) == 0)) ||
       ((uVar2 & 0xffffffff) == (uVar3 & 0xffffffff))) {
      bVar1 = true;
    }
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8265C990(uVar2,0x24810000);
    }
    if (((uVar3 & 0xffffffff) != 0) && ((uVar3 & 0xffffffff) != (uVar2 & 0xffffffff))) {
      fn_8265C990(uVar3,0x24810000);
    }
    fn_8265C990(0,0x24810000);
    if (bVar1) {
      fn_82A1F2B8(0xffffffff8202e5c0);
      fn_82A1F2B8(0xffffffff8202e560);
      fn_82A1F2B8(0xffffffff8202e508);
      fn_82A1F2B8(0xffffffff8202e4d4);
    }
  }
  return;
}

