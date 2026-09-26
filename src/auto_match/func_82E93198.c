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
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;


void fn_82E93198(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x7800) = 0;
  uVar1 = lbl_82005730;
  *(undefined4 *)(param_1 + 0x7804) = 0;
  uVar2 = lbl_82005758;
  *(undefined4 *)(param_1 + 0x7820) = 0;
  *(undefined8 *)(param_1 + 0x7850) = uVar1;
  *(undefined4 *)(param_1 + 0x7824) = 0;
  *(undefined8 *)(param_1 + 0x7838) = uVar2;
  *(undefined4 *)(param_1 + 0x7828) = 0;
  *(undefined8 *)(param_1 + 0x7830) = uVar2;
  *(undefined4 *)(param_1 + 0x782c) = 0;
  *(undefined4 *)(param_1 + 0x7840) = 0;
  *(undefined4 *)(param_1 + 0x7844) = 0;
  *(undefined4 *)(param_1 + 0x7808) = 0;
  *(undefined4 *)(param_1 + 0x780c) = 0;
  *(undefined4 *)(param_1 + 0x7810) = 0;
  *(undefined4 *)(param_1 + 0x7848) = 0;
  *(undefined4 *)(param_1 + 0x784c) = 0;
  *(undefined4 *)(param_1 + 0x7814) = 0;
  *(undefined4 *)(param_1 + 0x7818) = 0;
  *(undefined4 *)(param_1 + 0x781c) = 0;
  return;
}

