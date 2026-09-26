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


void fn_826C31F0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = puVar1[2] - 1;
    puVar1[2] = uVar2;
    if ((uVar2 & 0x70000000) != 0x10000000) {
      puVar1[2] = uVar2 & 0x8fffffff | 0x10000000;
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = puVar1[2] - 1;
    puVar1[2] = uVar2;
    if ((uVar2 & 0x70000000) != 0x10000000) {
      puVar1[2] = uVar2 & 0x8fffffff | 0x10000000;
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}

