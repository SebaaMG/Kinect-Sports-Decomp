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


void fn_82811298(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  param_1[4] = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  uVar1 = *param_2;
  if (uVar1 == 0) goto LAB_828112fc;
  if (uVar1 == 1) {
    uVar2 = 0x404;
LAB_828112ec:
    param_1[5] = uVar2;
    param_1[1] = 0xffffffff;
  }
  else {
    if (uVar1 < 3) {
      uVar2 = 4;
      goto LAB_828112ec;
    }
    if (uVar1 == 3) goto LAB_828112fc;
    if (4 < uVar1) {
      if (uVar1 != 5) {
        return;
      }
      goto LAB_828112fc;
    }
  }
  uVar2 = 1;
LAB_828112fc:
  *param_1 = uVar2;
  return;
}

