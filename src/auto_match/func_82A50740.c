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
extern int fn_82A50350();
extern int fn_82F68CC0();


void fn_82A50740(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  (**(code **)(*(int *)(*(int *)(param_1 + 0x30) + 0x2c) + 8))(*(int *)(param_1 + 0x30) + 0x2c);
  iVar1 = fn_82A50350(param_1,param_2);
  iVar1 = *(int *)(iVar1 + 8);
  fn_82F68CC0(param_5,*(undefined4 *)(iVar1 + 0x14),
               ((longlong)*(int *)(iVar1 + 8) * (longlong)*(int *)(iVar1 + 4) & 0x3fffffffU) << 2);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x30) + 0x2c) + 0x14))(*(int *)(param_1 + 0x30) + 0x2c);
  return;
}

