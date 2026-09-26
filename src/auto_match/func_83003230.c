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
extern int fn_83001CB8();


void fn_83003230(int param_1,int param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  if (((*(byte *)(param_1 + 0x3e) & 0x80) == 0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xe8))();
    return;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    param_3[1] = 0;
    *param_3 = 0xffffffff;
    *(undefined1 *)(param_3 + 3) = 0;
  }
  else {
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0xc + 0xc);
    param_3[1] = *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0xc + 0x10);
    uVar1 = fn_83001CB8(param_1,param_2,param_4);
    *(undefined1 *)(param_3 + 3) = uVar1;
  }
  param_3[2] = *(undefined4 *)(param_1 + 0xc);
  return;
}

