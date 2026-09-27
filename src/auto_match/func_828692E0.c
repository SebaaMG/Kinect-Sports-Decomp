extern unsigned int *puRam83211754;
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
extern unsigned int *auStack_30;
extern int fn_82811080();
extern int fn_82811400();
extern unsigned int lbl_8202107C;


void fn_828692E0(void)

{
  undefined8 uVar1;
  undefined1 auStack_30 [32];

  if (puRam83211754 == (undefined4 *)0x0) {
    uVar1 = fn_82811400(auStack_30,4);
    puRam83211754 = (undefined4 *)fn_82811080(0xffffffff832116f8,4,uVar1);
    if (puRam83211754 == (undefined4 *)0x0) {
      puRam83211754 = (undefined4 *)0x0;
    }
    else {
      *puRam83211754 = &lbl_8202107C;
    }
  }
  return;
}
