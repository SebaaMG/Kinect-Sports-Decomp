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
extern int fn_82B841E8();


uint fn_82AC6CD0(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = *(uint *)(param_2 + 0x1c);
  puVar3 = (uint *)(param_2 + 0x1c);
  if ((((uVar2 & 1) != 0) || (uVar2 == 0)) || ((*(uint *)(uVar2 + 8) & 0x3f80) != 0x3f00)) {
    uVar2 = fn_82B841E8(param_1,param_2,0,0x7e,0,0);
    uVar1 = uVar2 & 0xfffffffe;
    *(uint *)(uVar1 + 0x28) = *puVar3;
    *(uint *)((*puVar3 & 0xfffffffe) + 0x24) = uVar1 + 0x28;
    *(uint *)(uVar1 + 0x24) = (uint)puVar3 | 1;
    *puVar3 = uVar1;
  }
  *(uint *)(uVar2 + 0x14) = *(uint *)(uVar2 + 0x14) | 0x10000;
  return uVar2;
}

