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
extern int fn_8252DAB8();
extern int fn_8265C9E0();
extern unsigned int lbl_821C8BE0;
extern unsigned int lbl_821C8BF0;
extern unsigned int lbl_821C8C18;
extern unsigned int lbl_821C8C3C;
extern unsigned int lbl_821C8C58;


undefined4 * fn_825BC9F8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  fn_8252DAB8();
  *param_1 = &lbl_821C8C58;
  puVar1 = (undefined4 *)fn_8265C9E0(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &lbl_821C8BE0;
  }
  param_1[0x6b] = puVar1;
  puVar1 = (undefined4 *)fn_8265C9E0(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &lbl_821C8BF0;
  }
  param_1[0x6c] = puVar1;
  puVar1 = (undefined4 *)fn_8265C9E0(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &lbl_821C8C18;
  }
  param_1[0x6a] = puVar1;
  puVar1 = (undefined4 *)fn_8265C9E0(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &lbl_821C8C3C;
  }
  param_1[0x6d] = puVar1;
  *(undefined2 *)(param_1 + 4) = 1;
  return param_1;
}

