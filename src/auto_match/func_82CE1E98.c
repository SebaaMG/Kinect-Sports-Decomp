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
extern unsigned int *auStack_1a0;
extern int fn_82CE08A0();
extern int fn_82CE28C0();
extern int iRam8317e6c8;
extern unsigned int lbl_8317E6C4;


uint fn_82CE1E98(void)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_1a0 [400];
  
  if ((lbl_8317E6C4 == (undefined *)0x0) || (iRam8317e6c8 == 0)) {
    uVar1 = 0x57;
  }
  else {
    uVar1 = fn_82CE08A0(2,auStack_1a0);
    if (uVar1 == 0) {
      iVar2 = fn_82CE28C0(0xffffffff8323a8f0,lbl_8317E6C4,iRam8317e6c8);
      uVar1 = iVar2 >> 0x1f & 0x65b;
    }
  }
  return uVar1;
}

