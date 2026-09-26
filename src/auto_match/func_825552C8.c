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
extern int fn_82BFEDC8();
extern int fn_82BFEDE8();


ulonglong fn_825552C8(int param_1)

{
  ulonglong uVar1;
  int aiStack_20 [4];
  
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (fn_82BFEDE8(*(int *)(param_1 + 0x18),aiStack_20), aiStack_20[0] == 3)) {
    uVar1 = fn_82BFEDC8(*(undefined4 *)(param_1 + 0x18));
    return (uVar1 & 0xffffffff) >> 0x1f ^ 1;
  }
  return 0;
}

