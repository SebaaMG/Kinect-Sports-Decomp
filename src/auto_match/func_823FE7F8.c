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
extern unsigned int *auStack_88;
extern int fn_82F68CC0();
extern unsigned int stack0x00000068;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;
extern unsigned int uStack00000058;
extern unsigned int uStack00000060;
extern unsigned int uStack_6c;


void fn_823FE7F8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined4 in_stack_00000084;
  undefined1 auStack_88 [28];
  undefined4 uStack_6c;
  
  uStack_6c = in_stack_00000084;
  uStack00000040 = param_4;
  uStack00000048 = param_5;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  uStack00000060 = param_8;
  fn_82F68CC0(auStack_88,&stack0x00000068,0x18);
  (**(code **)(param_1 + 4))
            (*(undefined4 *)(param_1 + 8),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

