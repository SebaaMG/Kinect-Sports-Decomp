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
extern int fn_82AB15D0();


void fn_82AA0750(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820d3000,0x19b);
  }
  if (*(uint *)(param_1 + 0x44) <= param_2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d2fb8,0xffffffff820d3000,0x19b);
  }
  if (*(uint *)(param_1 + 0x4c) <= *(uint *)(*(int *)(param_1 + 0x50) + param_2 * 8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d2f60,0xffffffff820d3000,0x19b);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4) = param_3;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x50) + param_2 * 8);
  uVar2 = uVar1 >> 3 & 0x1ffffffc;
  *(uint *)(uVar2 + *(int *)(param_1 + 0xc)) =
       1 << (uVar1 & 0x1f) | *(uint *)(uVar2 + *(int *)(param_1 + 0xc));
  return;
}

