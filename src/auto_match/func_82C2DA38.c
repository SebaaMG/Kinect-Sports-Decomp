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
extern int fn_82C2B878();
extern int fn_82C2BC00();
extern int fn_82C2C1E8();
extern int fn_82C2C240();
extern int fn_82C2D3F8();
extern int fn_82C2D948();


void fn_82C2DA38(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = fn_82C2B878();
  if ((((-1 < iVar1) && (iVar1 = fn_82C2D3F8(param_1), -1 < iVar1)) &&
      (iVar1 = fn_82C2D948(param_1), -1 < iVar1)) &&
     ((iVar1 = fn_82C2BC00(param_1), -1 < iVar1 && (iVar1 = fn_82C2C1E8(param_1), -1 < iVar1))))
  {
    fn_82C2C240(param_1);
  }
  return;
}

