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
extern int fn_8265C990();
extern int fn_82A85FD0();
extern unsigned int lbl_832234E4;


undefined8 fn_82A86110(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = lbl_832234E4;
  if (lbl_832234E4 == 0) {
    uVar3 = 0xffffffff80004005;
  }
  else {
    bVar1 = lbl_832234E4 != 0;
    lbl_832234E4 = 0;
    if (bVar1) {
      fn_82A85FD0(iVar2);
      fn_8265C990(iVar2,0x20980000);
    }
    uVar3 = 0;
  }
  return uVar3;
}

