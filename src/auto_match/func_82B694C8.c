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


uint fn_82B694C8(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x4c) <= param_2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d8f78,0xffffffff820d8fa8,0xbf);
  }
  return *(uint *)((param_2 >> 3 & 0x1ffffffc) + *(int *)(param_1 + 0xc)) >> (param_2 & 0x1f) & 1;
}

