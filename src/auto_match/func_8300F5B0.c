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
extern int fn_82FF5DA8();
extern int fn_83037AA0();
extern int fn_83037C10();
extern unsigned int lbl_831BC768;
extern unsigned int uRam83264320;


void fn_8300F5B0(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar1 = uRam83264320;
  uVar2 = fn_83037AA0();
  trapWord(6,uVar2,0);
  iVar3 = fn_83037C10(param_1 + 0x20,(ulonglong)uVar1 / (uVar2 & 0xffffffff));
  if ((iVar3 == 1) &&
     (iVar3 = fn_82FF5DA8(param_1 + 0x50,0x20,0xffffffffffffffff,lbl_831BC768), iVar3 == 1)) {
    fn_82FF5DA8(param_1 + 0x70,0x20,0xffffffffffffffff,lbl_831BC768);
  }
  return;
}

