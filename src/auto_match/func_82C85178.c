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


void fn_82C85178(short *param_1,longlong param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  *param_1 = (short)param_3[4] * *param_1;
  if ((int)param_2 < 2) {
    return;
  }
  param_2 = param_2 + -1;
  do {
    param_1 = param_1 + 1;
    sVar1 = *param_1;
    if (sVar1 != 0) {
      sVar4 = sVar1 * (short)uVar2;
      if (sVar1 < 1) {
        *param_1 = sVar4 - (short)uVar3;
      }
      else {
        *param_1 = sVar4 + (short)uVar3;
      }
    }
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

