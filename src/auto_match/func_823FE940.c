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
extern unsigned int *auStack_90;
extern int fn_82F68CC0();
extern unsigned int stack0x00000070;
extern unsigned int uStack00000050;
extern unsigned int uStack00000058;
extern unsigned int uStack00000060;
extern unsigned int uStack00000068;
extern unsigned int uStack_69;


void fn_823FE940(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  undefined1 in_stack_00000097;
  undefined1 auStack_90 [39];
  undefined1 uStack_69;
  
  uStack_69 = in_stack_00000097;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  uStack00000060 = param_8;
  uStack00000068 = param_9;
  fn_82F68CC0(auStack_90,&stack0x00000070,0x20);
  (**(code **)(param_2 + 4))
            (param_1,*(undefined4 *)(param_2 + 8),param_3,param_4,param_5,param_6,param_7,param_8,
             param_9);
  return;
}

