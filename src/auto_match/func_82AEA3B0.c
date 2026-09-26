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
extern int fn_82AC8CE8();
extern int fn_82AE9DE0();


void fn_82AEA3B0(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  param_1 = param_1 + 1;
  fn_82AE9DE0(param_1,uVar1);
  fn_82AC8CE8(param_1,param_2);
  fn_82AC8CE8(param_1,uVar1);
  uVar1 = uVar1 & 0xfffffffe;
  uVar2 = (uint)param_2 & 0xfffffffe;
  *(undefined4 *)(uVar2 + 0x28) = *(undefined4 *)(uVar1 + 0x28);
  *(uint *)((*(uint *)(uVar1 + 0x28) & 0xfffffffe) + 0x24) = uVar2 + 0x28;
  *(uint *)(uVar2 + 0x24) = uVar1 + 0x28;
  *(uint *)(uVar1 + 0x28) = uVar2;
  return;
}

