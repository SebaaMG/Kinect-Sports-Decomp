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
extern int fn_82A1BFA8();
extern unsigned int uStack00000014;
extern unsigned int uStack_10;


undefined8 fn_82F90B28(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack00000014;
  uint uStack_10;
  
  uStack_10 = 0;
  uStack00000014 = param_1;
  while( true ) {
    if (3 < uStack_10) {
      return 0;
    }
    iVar1 = fn_82A1BFA8(uStack_10);
    if (iVar1 == 2) break;
    uStack_10 = uStack_10 + 1;
  }
  return 1;
}

