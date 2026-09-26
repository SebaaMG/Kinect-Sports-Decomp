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
extern int fn_83052288();
extern int iRam8326504c;
extern int iRam83265050;


void fn_8304F0A8(int param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (iRam83265050 - iRam8326504c >> 2 != 0) {
    iVar2 = 0;
    do {
      fn_83052288(*(int *)(iVar2 + iRam8326504c),*(int *)(iVar2 + iRam8326504c) == param_1,
                        param_2);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 < (uint)(iRam83265050 - iRam8326504c >> 2));
  }
  return;
}

