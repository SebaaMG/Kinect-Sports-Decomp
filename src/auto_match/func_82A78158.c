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
extern int fn_82A77750();


void fn_82A78158(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_82A77750();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = 0;
    puVar1[2] = *(undefined4 *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x28) == 0) {
      *(undefined4 **)(param_1 + 0x24) = puVar1;
    }
    else {
      *(undefined4 **)(*(int *)(param_1 + 0x28) + 4) = puVar1;
    }
    *(undefined4 **)(param_1 + 0x28) = puVar1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  return;
}

