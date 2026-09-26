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
extern int fn_8265CA20();
extern int fn_82FA8F70();
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216CC80;
extern unsigned int lbl_8216CC88;
extern unsigned int lbl_8216CCA0;


undefined4 * fn_82FABFD0(undefined4 *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -4;
  *puVar1 = &lbl_8216CCA0;
  param_1[-3] = &lbl_8216CC88;
  *param_1 = &lbl_8216CC80;
  param_1[2] = &lbl_8216CC7C;
  fn_82FA8F70();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(puVar1);
  }
  return puVar1;
}

