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


undefined8 fn_82AD1590(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((*(uint *)(param_1 + 8) >> 5 & 1) == 0) {
    return 0;
  }
  for (puVar1 = *(uint **)(param_1 + 4); (puVar1 != (uint *)0x0 && ((*puVar1 & 0xe000000) == 0));
      puVar1 = (uint *)puVar1[2]) {
  }
  uVar2 = *puVar1 >> 0x11 & 0xff;
  if ((uVar2 < 0x20) || (uVar3 = 1, 0x25 < uVar2)) {
    uVar3 = 0;
  }
  return uVar3;
}

