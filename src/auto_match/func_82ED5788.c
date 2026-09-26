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


void fn_82ED5788(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  *(undefined2 *)(param_1 + 0x4aba) = 0;
  *(undefined4 *)(param_1 + 0x4ad0) = 0;
  *(undefined4 *)(param_1 + 0x4acc) = 0;
  lVar3 = 10;
  *(undefined4 *)(param_1 + 0x4abc) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x4ad0);
  *(undefined4 *)(param_1 + 0x4ab4) = 0;
  *(undefined2 *)(param_1 + 0x4ab8) = 0;
  *(undefined4 *)(param_1 + 0x4aac) = 0;
  *(undefined4 *)(param_1 + 0x4ac0) = 0;
  *(undefined4 *)(param_1 + 0x4ab0) = 0;
  *(undefined4 *)(param_1 + 0x4ac4) = 0;
  *(undefined4 *)(param_1 + 0x4ac8) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x4aa8);
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

