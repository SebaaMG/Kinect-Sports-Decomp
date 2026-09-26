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
extern unsigned int *auStack_30;
extern int fn_82A40238();
extern int fn_82A40830();


undefined4 fn_82A410C0(int param_1,undefined8 param_2)

{
  undefined4 auStack_30 [12];
  
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))(param_1 + 0x2c);
  fn_82A40830(param_1,param_2);
  auStack_30[0] =
       (**(code **)(**(int **)(param_1 + 0xb0) + 0x48))(*(int **)(param_1 + 0xb0),param_2);
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x14))(param_1 + 0x2c);
  fn_82A40238(auStack_30);
  return auStack_30[0];
}

