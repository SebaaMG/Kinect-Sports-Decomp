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
extern int fn_8265C9E0();


void fn_82886518(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar1 = (undefined4 *)fn_8265C9E0(0x80);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0xffffffff;
      *(undefined8 *)(puVar1 + 2) = 0xffffffffffffffff;
      puVar1[4] = 0xffffffff;
      *(undefined8 *)(puVar1 + 6) = 0xffffffffffffffff;
      puVar1[8] = 0;
      puVar1[0x1d] = 0xffffffff;
      puVar1[0x1e] = 0xffffffff;
    }
    *(undefined4 **)(param_1 + 0x38) = puVar1;
  }
  if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x38) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x10) = param_3;
  }
  return;
}

