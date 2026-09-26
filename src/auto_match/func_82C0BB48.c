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
extern int fn_8265C990();
extern int fn_8265CA20();


undefined8 fn_82C0BB48(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x2c),0x208c800e);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      fn_8265CA20(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(puVar1,3);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return 0;
}

