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
extern int fn_82AA0750();
extern int fn_82AB15D0();


void fn_82AA0840(int param_1,uint param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  if (*(uint *)(param_1 + 0x48) <= param_2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d30a0,0xffffffff820d3000,0x22d);
  }
  if (*(uint *)(param_2 * 0xc + *(int *)(param_1 + 0x54) + 8) <= param_3) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d3058,0xffffffff820d3000,0x22d);
  }
  puVar3 = (uint *)(param_2 * 0xc + *(int *)(param_1 + 0x54));
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  fn_82AA0750(param_1,(longlong)(int)uVar2 * (longlong)(int)param_3 + (ulonglong)uVar1,param_4);
  return;
}

