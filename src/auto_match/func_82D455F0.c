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
extern int fn_82D45088();


void fn_82D455F0(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulonglong uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(param_2 * 2 + *(int *)(param_1 + 0x1c));
  uVar1 = (ulonglong)*(ushort *)((param_2 + 2) * 2 + *(int *)(param_1 + 0x1c));
  fn_82D45088(param_1,(ulonglong)*puVar2 * 3,(ulonglong)puVar2[1] * 3,uVar1 * 3,uVar1,param_4,
                    param_5,param_6);
  return;
}

