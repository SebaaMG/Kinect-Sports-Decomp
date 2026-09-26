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
extern unsigned int stack0x00000040;
extern unsigned int stack0x00000066;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;
extern unsigned int uStack00000058;
extern unsigned int uStack00000066;


void fn_823FE6F0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined2 param_8)

{
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined2 uStack00000066;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000074;
  code *pcStack_20;
  
  pcStack_20 = (code *)(*(ulonglong *)(param_1 + 8) >> 0x20);
  uStack00000040 = param_4;
  uStack00000048 = param_5;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  uStack00000066 = param_8;
  (*pcStack_20)((ulonglong)*(uint *)(param_1 + 0x10) + (*(ulonglong *)(param_1 + 8) & 0xffffffff),
                param_2,param_3,&stack0x00000040,&stack0x00000066,in_stack_0000006c,
                in_stack_00000074);
  return;
}

