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
extern int fn_829BE858();


void fn_829BE910(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x1c);
  param_1[0x6d] = (int)puVar1;
  puVar1[2] = 0;
  *puVar1 = fn_829BE858;
  puVar1[3] = 0;
  if (param_1[0x15] != 0) {
    puVar1[4] = param_1[0x4f];
    if (param_2 == 0) {
      uVar2 = (**(code **)(param_1[1] + 8))
                        (param_1,1,(longlong)param_1[0x1e] * (longlong)param_1[0x1c]);
      puVar1[3] = uVar2;
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)(param_1);
    }
  }
  return;
}

