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


bool fn_829D4970(int param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x9c90);
  if (0x13 < uVar1) {
    puVar2 = (uint *)(param_1 + 0x9c94);
    fn_82F68CC0(*puVar2 * 0x7d4 + param_1,param_2,0x7d4);
    *puVar2 = (*puVar2 + 1) % 0x14;
  }
  else {
    *(uint *)(param_1 + 0x9c90) = uVar1 + 1;
    fn_82F68CC0((((*(int *)(param_1 + 0x9c94) + uVar1 + 1) - 1) % 0x14) * 0x7d4 + param_1,param_2,
                 0x7d4);
  }
  return 0x13 >= uVar1;
}

