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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))


ulonglong fn_82E22910(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,
                       int param_6,int param_7,int param_8)

{
  int in_stack_00000054;
  int in_stack_0000005c;
  
  return (((ulonglong)
           CONCAT11(*(byte *)(param_2 + in_stack_00000054) ^ *(byte *)(param_2 + in_stack_0000005c),
                    *(undefined1 *)(param_2 + param_7)) ^ (ulonglong)*(byte *)(param_2 + param_8))
          << 8 ^ (ulonglong)*(byte *)(param_2 + param_5) ^ (ulonglong)*(byte *)(param_2 + param_6))
         << 8 ^ (ulonglong)*(byte *)(param_2 + param_3) ^ (ulonglong)*(byte *)(param_2 + param_4);
}

