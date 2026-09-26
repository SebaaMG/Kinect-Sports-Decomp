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
extern int fn_83065F58();
extern unsigned int lbl_8217E8BC;


int * fn_83066558(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    lVar2 = (**(code **)(*(int *)param_1[3] + 4))((int *)param_1[3],param_1[5]);
    if ((int)lVar2 <= param_1[5]) {
      return (int *)0x0;
    }
    fn_83065F58(param_1,lVar2 - (ulonglong)(uint)param_1[5]);
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    *param_1 = *piVar1;
  }
  else {
    *param_1 = *piVar1;
  }
  param_1[5] = param_1[5] + 1;
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar1[3] = 0;
  *piVar1 = (int)&lbl_8217E8BC;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[0xb] = 0;
  piVar1[0xc] = 0;
  piVar1[0xd] = 0;
  piVar1[0xe] = 0;
  piVar1[0xf] = 0;
  piVar1[0x10] = 0;
  piVar1[0x11] = 0;
  piVar1[0x12] = 0;
  piVar1[0x13] = 0;
  piVar1[0x15] = 0;
  piVar1[0x16] = 0;
  piVar1[0x17] = 0;
  piVar1[0x18] = 0;
  piVar1[0x1a] = 0;
  piVar1[0x1c] = 0;
  piVar1[0x1d] = 0;
  return piVar1;
}

