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
extern int fn_82A5ED20();


undefined8
fn_82BD90C0(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = fn_82A5ED20();
  if (-1 < (int)uVar1) {
    uVar2 = 0xffffffff88970001;
    if ((*(short *)(*param_3 + 2) != 4) || (*(short *)(*param_5 + 2) != 4)) {
      uVar1 = uVar2;
    }
    if (-1 < (int)uVar1) {
      if (param_3[1] != param_5[1]) {
        uVar1 = uVar2;
      }
      if ((-1 < (int)uVar1) &&
         ((*(int *)(*param_3 + 4) != 0x3efd || (*(int *)(*param_5 + 4) != 0x3efd)))) {
        uVar1 = uVar2;
      }
    }
  }
  return uVar1;
}

