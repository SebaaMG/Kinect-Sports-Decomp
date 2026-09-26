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
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_822DC2E0(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uStack_20;
  uint uStack_1c;
  
  uStack_1c = param_1[0xb];
  uStack_20 = uStack_1c;
  if (*param_1 != 0) {
    puVar2 = (undefined8 *)
             (**(code **)((*param_1 & 0xfffffffe) + 4))(&uStack_20,param_1 + 2,param_1[10]);
    uStack_1c = (uint)*puVar2;
    uStack_20 = (uint)((ulonglong)*puVar2 >> 0x20);
  }
  uVar1 = param_1[0xb];
  if (((uStack_20 == uVar1) && (uStack_1c == uVar1)) && (param_1[9] == uVar1)) {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  param_1[9] = uStack_20;
  param_1[8] = param_1[10];
  param_1[10] = uStack_1c;
  return;
}

