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
extern unsigned int *auStack_20;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


void fn_82E6FC00(int param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uStack00000024;
  undefined4 auStack_20 [4];
  
  uStack00000024 = param_3;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))();
  if (-1 < iVar1) {
    auStack_20[0] = 0;
    uStack00000024 =
         uStack00000024 << 0x18 |
         (uStack00000024 & 0xff00) << 8 | uStack00000024 >> 8 & 0xff00 | uStack00000024 >> 0x18;
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x30))
              (*(int **)(param_1 + 0x2c),&stack0x00000024,4,auStack_20);
  }
  return;
}

