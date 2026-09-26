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
extern int fn_82A5A1A8();


undefined4 * fn_82A41B80(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  lVar2 = 2;
  puVar1 = param_1;
  do {
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    *puVar1 = 0x7fffffff;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  fn_82A5A1A8(param_1 + 5);
  return param_1;
}

