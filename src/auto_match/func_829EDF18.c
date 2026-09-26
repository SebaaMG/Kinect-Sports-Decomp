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
extern int fn_829EDB80();
extern int fn_82F68CC0();


void fn_829EDF18(int param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 8) != 0) && (*(short *)(param_1 + 0x14) != 0)) {
    uVar1 = (ulonglong)**(ushort **)(param_1 + 0x2c);
  }
  fn_82F68CC0(*(int *)(param_1 + 8),param_2,uVar1 << 2);
  fn_829EDB80(param_1,param_3);
  return;
}

