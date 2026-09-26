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
extern int fn_82AC88B8();
extern int fn_82ACA698();


void fn_82AE9470(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2 = puVar2 + 1;
    if ((param_2 & 0xffffffff) == (ulonglong)*puVar2) {
      *puVar2 = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 9);
  fn_82AC88B8(param_1,param_2);
  fn_82ACA698(param_1,param_2,1);
  return;
}

