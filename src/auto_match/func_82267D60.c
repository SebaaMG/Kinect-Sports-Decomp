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


void fn_82267D60(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  param_1[0x13] = 1;
  if ((param_3 < 0x14) || (99 < param_3)) {
    uVar3 = 0;
  }
  puVar2 = (undefined4 *)*param_1;
  param_1[0x16] = uVar3;
  puVar1 = (undefined4 *)*puVar2;
  do {
    if (puVar1 == puVar2) {
LAB_82267de0:
      param_1[0x13] = 0;
      return;
    }
    if (*(int *)(puVar1[2] + 0x40) == param_2) {
      if ((int *)param_1[8] != (int *)0x0) {
        (**(code **)(*(int *)param_1[8] + 8))();
      }
      goto LAB_82267de0;
    }
    puVar1 = (undefined4 *)*puVar1;
    puVar2 = (undefined4 *)*param_1;
  } while( true );
}

