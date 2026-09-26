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
extern int fn_8267BE38();
extern int fn_8268BA10();
extern int fn_8269A608();


void fn_826FC250(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined1 param_7)

{
  uint *puVar1;
  uint uVar2;
  
  param_1[1] = param_2;
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  puVar1 = (uint *)param_1[5];
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = (uint)((ulonglong)uVar2 - 1);
    if ((longlong)((ulonglong)uVar2 - 1) < 1) {
      fn_8269A608(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  param_1[5] = param_3;
  param_1[2] = param_6;
  param_1[4] = param_4;
  *param_1 = 0;
  fn_8268BA10(param_1 + 3,param_5);
  *(undefined1 *)(param_1 + 6) = param_7;
  param_1[0x10] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return;
}

