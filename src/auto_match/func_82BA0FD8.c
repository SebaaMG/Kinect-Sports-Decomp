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
extern int fn_82B7BD28();


uint * fn_82BA0FD8(int param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar1 = param_1 + 0x1fU >> 5;
  puVar2 = (undefined4 *)fn_82B7BD28(param_2,(uVar1 + 3) * 4);
  *puVar2 = (int)param_2;
  uVar4 = 0;
  puVar2[2] = param_1;
  puVar2[1] = uVar1;
  if (uVar1 != 0) {
    puVar3 = puVar2 + 2;
    do {
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
    } while (uVar4 < (uint)puVar2[1]);
  }
  return puVar2 + 1;
}

