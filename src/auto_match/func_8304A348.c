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
extern float lbl_8200DFF4;


double fn_8304A348(int param_1)

{
  return (double)(((float)*(ushort *)(*(int *)(param_1 + 8) + 0xd4) *
                   (float)*(uint *)(param_1 + 0x78) * lbl_8200DFF4) /
                 (float)*(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x6c) + 0x20));
}

