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
extern int fn_8265C990();
extern int fn_82E25B78();
extern int fn_82E33098();


void fn_82E245F8(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 0x476f6f64)) {
    *param_1 = 0x46726565;
    if ((int *)param_1[0x41] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x41] + 0x40))();
    }
    if ((int *)param_1[0x41] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x41] + 0x44))();
    }
    if (param_1[0x16] != 0) {
      fn_82E33098();
    }
    param_1[0x16] = 0;
    if (param_1[1] != 0) {
      fn_82E25B78();
    }
    param_1[1] = 0;
    if ((int *)param_1[0x41] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x41] + 8))();
      param_1[0x41] = 0;
    }
    if ((int *)param_1[0x42] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x42] + 8))();
      param_1[0x42] = 0;
    }
    if ((int *)param_1[0x43] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x43] + 8))();
      param_1[0x43] = 0;
    }
    if ((int *)param_1[0x40] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x40] + 8))();
      param_1[0x40] = 0;
    }
    if (param_1[4] != 0) {
      fn_8265C990(param_1[4],0x208c804d);
    }
    param_1[4] = 0;
    if (param_1[0x32] != 0) {
      fn_8265C990(param_1[0x32],0x208c804d);
    }
    param_1[0x32] = 0;
    if (param_1[0x35] != 0) {
      fn_8265C990(param_1[0x35],0x208c804d);
    }
    param_1[0x35] = 0;
  }
  return;
}

