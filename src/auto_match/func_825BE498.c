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
extern int fn_825BF428();
extern int fn_8265CA20();
extern int fn_827D9A90();
extern unsigned int lbl_821C8D88;


undefined4 * fn_825BE498(undefined4 *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &lbl_821C8D88;
  iVar2 = param_1[0x84];
  if (iVar2 != 0) {
    iVar1 = param_1[0x85];
    for (; iVar2 != iVar1; iVar2 = iVar2 + 8) {
      if (*(int *)(iVar2 + 4) != 0) {
        fn_822315A0();
      }
    }
    fn_8265CA20(param_1[0x84]);
  }
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  fn_825BF428(param_1 + 0x71);
  if (param_1[0x68] != 0) {
    fn_822315A0();
  }
  if (param_1[0x14] != 0) {
    fn_822315A0();
  }
  if (param_1[0x12] != 0) {
    fn_822315A0();
  }
  if (param_1[0x10] != 0) {
    fn_822315A0();
  }
  fn_827D9A90(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

