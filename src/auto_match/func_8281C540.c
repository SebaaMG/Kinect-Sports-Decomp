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


undefined8 fn_8281C540(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar2 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 0x58);
    *(undefined4 **)(param_1 + 0x20) = puVar2;
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) {
      return 1;
    }
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x20) + 0x14);
    *(undefined4 **)(param_1 + 0x20) = puVar2;
    if (1 < ((int)puVar2 + (-0x58 - *(int *)(*(int *)(param_1 + 0xc) + 0x1c))) / 0x14) {
      return 0;
    }
  }
  uVar1 = *puVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return 1;
}

