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


void fn_82DAF780(int param_1,int param_2)

{
  *(undefined4 *)((uint)*(ushort *)(param_2 + 0xa8) * 4 + *(int *)(param_1 + 0x48)) =
       *(undefined4 *)(*(int *)(param_1 + 0x4c) * 4 + *(int *)(param_1 + 0x48) + -4);
  *(ushort *)(*(int *)((uint)*(ushort *)(param_2 + 0xa8) * 4 + *(int *)(param_1 + 0x48)) + 0xa8) =
       *(ushort *)(param_2 + 0xa8);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
  *(undefined4 *)(param_2 + 0xcc) = 0;
  *(undefined2 *)(param_2 + 0xa8) = 0xffff;
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0x3f | 0x40;
  return;
}

