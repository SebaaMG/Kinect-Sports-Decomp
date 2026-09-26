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
extern unsigned int *auStack_10;


uint fn_82BD62B8(undefined4 *param_1)

{
  int iVar1;
  uint auStack_10;
  
  iVar1 = XamUserGetDeviceContext(*param_1,1,&auStack_10);
  if (iVar1 < 0) {
    auStack_10 = 0;
  }
  else {
    auStack_10 = auStack_10 & 0xf0000000;
  }
  return auStack_10;
}

