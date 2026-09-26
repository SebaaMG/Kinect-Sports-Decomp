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
extern int fn_82B47068();


uint fn_82B478C8(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = fn_82AC6560(param_1,0x7c,5);
  *(uint *)(uVar2 + 0x14) = uVar2 - 0x14 | 1;
  *(uint *)(uVar2 + 0x10) = uVar2 + 0x14 | 1;
  *(uint *)(uVar2 + 0x18) = uVar2 + 0x1c | 1;
  *(uint *)(uVar2 + 0x1c) = uVar2 - 0xc | 1;
  *(uint *)(uVar2 + 0x20) = uVar2 + 0x24 | 1;
  *(uint *)(uVar2 + 0x24) = uVar2 - 4 | 1;
  puVar1 = (uint *)(uVar2 & 0xfffffffe);
  *(uint *)(uVar2 + 0x30) = *(uint *)(uVar2 + 0x30) | 0x80000;
  *(uint *)(uVar2 + 0x44) = *(uint *)(uVar2 + 0x44) & 0xf0000000 | 1;
  *(int *)(uVar2 + 0x74) = (int)param_2;
  *puVar1 = *param_1;
  *(uint **)(*param_1 & 0xfffffffe) = puVar1;
  puVar1[1] = (uint)param_1 | 1;
  *param_1 = (uint)(puVar1 + 1);
  if (param_1[0xba] != 0) {
    fn_82B47068(param_1,uVar2,param_2);
  }
  return uVar2;
}

