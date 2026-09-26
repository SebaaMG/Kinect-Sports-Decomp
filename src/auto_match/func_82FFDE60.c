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
extern int fn_82FA5060();


undefined8
fn_82FFDE60(undefined4 *param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  param_1[7] = (int)param_4;
  param_1[3] = (int)param_2;
  uVar4 = 1;
  param_1[5] = 0;
  param_1[4] = param_3;
  if ((param_2 & 0xffffffff) == 0) {
    param_1[6] = 0;
  }
  else {
    piVar1 = (int *)fn_82FA5060(param_4,(param_2 + (param_2 & 0x3fffffff) * 4 & 0x1fffffff) <<
                                              3);
    param_1[6] = piVar1;
    if (piVar1 != (int *)0x0) {
      uVar2 = 0;
      param_1[2] = piVar1;
      piVar3 = piVar1;
      if (param_1[3] != 0) {
        do {
          piVar1 = piVar3 + 10;
          uVar2 = uVar2 + 1;
          *piVar3 = (int)piVar1;
          piVar3 = piVar1;
        } while (uVar2 < (uint)param_1[3]);
      }
      piVar1[-10] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      return 1;
    }
    param_1[3] = 0;
    uVar4 = 0x34;
    param_1[4] = 0;
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return uVar4;
}

