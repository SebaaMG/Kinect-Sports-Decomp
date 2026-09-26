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
extern unsigned int *auStack_220;
extern int fn_82631920();
extern int fn_82631AF0();


void fn_82853700(int param_1,int param_2,longlong param_3)

{
  undefined1 auStack_220 [520];
  
  thunk_FUN_82838b18(auStack_220,(ulonglong)*(uint *)(param_2 + 0x14) + param_3,param_1 + 0xa4,
                     *(undefined2 *)(param_2 + 0x1a),*(undefined2 *)(param_2 + 0x1c));
  fn_82631AF0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 0x20));
  fn_82631920(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 0x24));
  return;
}

