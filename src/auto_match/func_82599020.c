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
extern unsigned int *auStack_20;
extern int fn_82522ED8();
extern int fn_82598E80();
extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82BFE460();
extern int fn_82BFE530();
extern unsigned int lbl_83296E18;


void fn_82599020(void)

{
  int iVar1;
  ulonglong uVar2;
  uint auStack_20 [2];
  
  uVar2 = 0;
  fn_82A1BB18();
  fn_8259A230();
  do {
    if (uVar2 != 0) {
      fn_82522ED8(uVar2);
    }
    fn_82A1BB18();
    iVar1 = fn_8259A230();
    auStack_20[0] = 0;
    uVar2 = fn_82BFE530((&lbl_83296E18)[iVar1],auStack_20);
    uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)auStack_20[0];
    if (uVar2 != 0) {
      sync(1);
      fn_82598E80(uVar2);
    }
    fn_82A1BB18();
    iVar1 = fn_8259A230();
    if ((&lbl_83296E18)[iVar1] == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = fn_82BFE460();
    }
  } while (iVar1 == 0);
  if (uVar2 != 0) {
    fn_82522ED8(uVar2);
  }
  return;
}

