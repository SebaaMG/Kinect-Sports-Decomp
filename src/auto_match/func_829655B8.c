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


undefined8 fn_829655B8(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 != 0xffffffff) {
    do {
      puVar1 = *(uint **)(param_2 * 4 + *(int *)(param_1 + 0x14));
      if (((*puVar1 & 0x20) != 0) ||
         ((puVar1[0xe] != 0xffffffff &&
          ((**(uint **)(puVar1[0xe] * 4 + *(int *)(param_1 + 0x14)) & 0x20) != 0)))) {
        return 1;
      }
      param_2 = puVar1[2];
    } while (param_2 != 0xffffffff);
  }
  return 0;
}

