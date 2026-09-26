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
extern int fn_83033020();


void fn_8300F998(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x50); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if ((*(uint *)(*(int *)(puVar1[2] + 8) + 0x14) & 0xffffff00) == 0x501100) {
      fn_83033020(*(int *)(puVar1[2] + 8),param_2);
    }
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x70); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if ((*(uint *)(*(int *)(puVar1[2] + 8) + 0x14) & 0xffffff00) == 0x501100) {
      fn_83033020(*(int *)(puVar1[2] + 8),param_2);
    }
  }
  return;
}

