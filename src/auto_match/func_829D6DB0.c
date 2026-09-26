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
extern int fn_82A1DDC0();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_829D6DB0(int param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  
  uStack0000001c = param_2;
  fn_82A1DDC0((ulonglong)*(uint *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 4),
                    &stack0x0000001c,4);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}

