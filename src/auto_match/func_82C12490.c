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
extern int fn_82C122F8();


undefined8 fn_82C12490(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  char acStack_20 [8];
  
  *param_2 = 0;
  acStack_20[0] = '\0';
  if (((*(short *)(param_1 + 0x4c) != 0) &&
      (uVar1 = fn_82C122F8(param_1,acStack_20,*(undefined8 *)(param_1 + 0x40)), (int)uVar1 == 0))
     && (acStack_20[0] != '\0')) {
    if (acStack_20[0] == *(char *)(param_1 + 0x10)) {
      return uVar1;
    }
    *param_2 = 1;
    *(char *)(param_1 + 0x60) = acStack_20[0];
    return uVar1;
  }
  return 0;
}

