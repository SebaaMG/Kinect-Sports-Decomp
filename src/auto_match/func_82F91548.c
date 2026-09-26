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
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;


void fn_82F91548(uint param_1,undefined4 param_2)

{
  int *piVar1;
  uint uStack00000014;
  undefined4 uStack0000001c;
  
  piVar1 = *(int **)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(*(undefined4 *)(param_1 + 4),param_1 + 8);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1,(ulonglong)uStack00000014 + 8);
  }
  return;
}

