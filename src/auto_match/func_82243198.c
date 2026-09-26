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
extern int fn_822442F0();
extern int fn_82517E78();
extern unsigned int lbl_82197448;
extern unsigned int lbl_82197488;
extern unsigned int lbl_8329759C;


void fn_82243198(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = lbl_8329759C;
  *param_1 = &lbl_82197448;
  param_1[0x1a] = &lbl_82197488;
  if (iVar1 == 0) {
    iVar1 = fn_822442F0();
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  fn_82517E78(param_1);
  return;
}

