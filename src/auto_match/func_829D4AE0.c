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
extern int fn_82F68CC0();


bool fn_829D4AE0(int param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x6f40);
  if (0x13 < uVar1) {
    fn_82F68CC0(*(int *)(param_1 + 0x6f50) * 0x590 + param_1,param_2,0x590);
    *(uint *)(param_1 + 0x6f50) = (*(int *)(param_1 + 0x6f50) + 1U) % 0x14;
  }
  else {
    *(uint *)(param_1 + 0x6f40) = uVar1 + 1;
    fn_82F68CC0((((*(int *)(param_1 + 0x6f50) + uVar1 + 1) - 1) % 0x14) * 0x590 + param_1,param_2,
                 0x590);
  }
  return 0x13 >= uVar1;
}

