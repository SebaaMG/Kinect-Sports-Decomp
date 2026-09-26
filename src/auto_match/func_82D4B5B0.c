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
extern int fn_82D41870();
extern unsigned int lbl_821362A4;
extern unsigned int lbl_821362B0;
extern unsigned int lbl_821362C4;
extern unsigned int lbl_821362D0;
extern unsigned int lbl_821362E4;


undefined4 * fn_82D4B5B0(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  fn_82D41870();
  *param_1 = &lbl_821362D0;
  param_1[4] = &lbl_821362E4;
  param_1[2] = &lbl_821362C4;
  param_1[3] = &lbl_821362B0;
  param_1[5] = &lbl_821362A4;
  param_1[8] = 2;
  puVar1 = param_1 + 0xc;
  lVar2 = 0x20;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0xffffffff;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0xc] = 0;
  return param_1;
}

