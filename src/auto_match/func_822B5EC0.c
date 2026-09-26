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
extern int fn_822C18B8();
extern int fn_8251FA58();
extern int fn_82552B50();
extern int fn_8265CA20();


int * fn_822B5EC0(int *param_1)

{
  int iVar1;
  
  fn_82552B50(param_1 + 1,1);
  if (*param_1 != 0) {
    fn_8251FA58();
    *param_1 = 0;
  }
  fn_822C18B8(param_1 + 0x15);
  iVar1 = param_1[0xf];
  if (iVar1 != 0) {
    for (; iVar1 != param_1[0x10]; iVar1 = iVar1 + 8) {
    }
    fn_8265CA20();
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar1 = param_1[0xb];
  if (iVar1 != 0) {
    for (; iVar1 != param_1[0xc]; iVar1 = iVar1 + 0xc) {
    }
    fn_8265CA20();
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  fn_8265CA20(param_1);
  return param_1;
}

