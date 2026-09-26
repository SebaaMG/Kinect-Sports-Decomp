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
extern int fn_8265CA20();


void fn_82F62E30(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x2c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(0,param_1,puVar1[1]);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  while (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
    fn_8265CA20();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = 0;
  while (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
    fn_8265CA20();
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

