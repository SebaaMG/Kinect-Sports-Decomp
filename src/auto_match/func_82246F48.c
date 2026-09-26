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
extern int fn_822315A0();
extern int fn_82511928();
extern int fn_82513A80();
extern int fn_82517E78();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int lbl_82197950;
extern unsigned int lbl_82197990;
extern unsigned int lbl_83297810;


void fn_82246F48(undefined4 *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iStack_20;
  int iStack_1c;
  
  uVar1 = param_1[4];
  uVar2 = (ulonglong)lbl_83297810;
  *param_1 = &lbl_82197950;
  param_1[0x1a] = &lbl_82197990;
  if (uVar2 == 0) {
    uVar2 = fn_82511928();
  }
  fn_82513A80(&iStack_20,uVar2,uVar1);
  if (iStack_20 != 0) {
    *(undefined1 *)(iStack_20 + 0x50) = 1;
    *(undefined4 *)(iStack_20 + 0x38) = 0;
    *(undefined1 *)(iStack_20 + 0x3c) = 1;
    *(undefined4 *)(iStack_20 + 0x40) = 0x21;
  }
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  fn_82517E78(param_1);
  return;
}

