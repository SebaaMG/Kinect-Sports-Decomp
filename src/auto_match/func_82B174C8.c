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
extern int fn_82AC6560();


void fn_82B174C8(int param_1,uint param_2,uint param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_82AC6560(param_4,0xc,0x16);
  *puVar1 = 0;
  puVar1[2] = puVar1[2] & 0xf0000000 | (param_3 & 0x3fff) << 0xe | param_2 & 0x3fff;
  puVar1[1] = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 **)(param_1 + 0x10) = puVar1;
  return;
}

