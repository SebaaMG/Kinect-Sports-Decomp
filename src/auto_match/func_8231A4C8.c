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
extern int fn_82230300();
extern int fn_82359C18();
extern unsigned int lbl_821AF1C8;
extern unsigned int lbl_821AF948;
extern unsigned int lbl_821C7FB8;


void fn_8231A4C8(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[0xa5];
  *param_1 = &lbl_821AF948;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    param_1[0xa5] = 0;
  }
  fn_82359C18(param_1 + 0xbc);
  puVar2 = param_1 + 0xa4;
  lVar1 = 0xc;
  param_1[0xba] = &lbl_821C7FB8;
  do {
    puVar2 = puVar2 + -0xc;
    fn_82230300(puVar2,1,0);
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  *param_1 = &lbl_821AF1C8;
  return;
}

