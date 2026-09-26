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


undefined8 fn_82ACB0F8(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (((*(byte *)(param_1 + 0x10) & 1) == 0) || ((*(byte *)(param_2 + 0x10) & 1) == 0)) {
    while ((uVar1 = *(uint *)((param_2 & 0xfffffffe) + 0x24), (uVar1 & 1) == 0 &&
           (param_2 = (uVar1 & 0xfffffffe) - 0x28, param_2 != 0))) {
      if (param_2 == param_1) {
        return 1;
      }
    }
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x14) & 0x1fff;
  if (uVar1 <= (*(uint *)(param_2 + 0x14) & 0x1fff)) {
    do {
      param_1 = *(uint *)((param_1 & 0xfffffffe) + 0x28);
      if ((((param_1 & 1) != 0) || (param_1 == 0)) || ((*(uint *)(param_1 + 0x14) & 0x1fff) < uVar1)
         ) {
        return 0;
      }
    } while (param_1 != param_2);
  }
  return 1;
}

