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
extern int fn_8268BEA8();
extern int fn_8278D038();
extern int fn_8278D2E0();
extern int fn_8278D368();


void fn_8278DAD0(int param_1)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xff000000;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 1;
  fn_8278D038(param_1,0xffffffff820155f0,0xffffffffffffffff);
  *(undefined2 *)(param_1 + 0x26) = 0xf0;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 8;
  fn_8278D2E0(param_1,0);
  fn_8278D368(param_1,0);
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xf3;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0xff000000;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfb3d | 0xc0;
  fn_8268BEA8(param_1 + 0x10);
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfeff;
  return;
}

