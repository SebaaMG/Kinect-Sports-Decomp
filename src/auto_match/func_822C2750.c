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
extern int fn_822B5CE8();
extern int fn_822C16B8();
extern int fn_82359C18();
extern int fn_823DF780();
extern int fn_823E2028();
extern int fn_8251FA58();
extern int fn_82575DF0();
extern int fn_8265CA20();
extern unsigned int lbl_821ACF5C;


void fn_822C2750(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x7a];
  *param_1 = &lbl_821ACF5C;
  if (iVar1 != 0) {
    fn_8251FA58(*(undefined4 *)(iVar1 + 0x52c));
    fn_82359C18(iVar1 + 0x510);
    fn_8265CA20(iVar1);
  }
  if ((param_1[0x9d] != 0) && (param_1[0x9d] != 0)) {
    fn_82575DF0(*(undefined4 *)(*(int *)(param_1[5] + 0x4c) + 0x93c));
    param_1[0x9d] = 0;
  }
  fn_822C16B8(param_1 + 0x70);
  fn_823E2028(param_1 + 0x6c);
  fn_823DF780(param_1 + 0x68);
  fn_822B5CE8(param_1);
  return;
}

