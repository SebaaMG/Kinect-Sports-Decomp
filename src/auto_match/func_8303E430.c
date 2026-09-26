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
extern int fn_82F69148();


void fn_8303E430(int param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 4);
  if (uVar2 != *(uint *)(param_1 + 8)) {
    do {
      if (*(int *)uVar2 == param_2) {
        uVar1 = (ulonglong)*(uint *)(param_1 + 8) - 8;
        if ((uVar2 & 0xffffffff) < (uVar1 & 0xffffffff)) {
          fn_82F69148(uVar2,uVar2 + 8,
                       ((((uVar1 - uVar2) - 1 & 0xffffffff) >> 3) + 1) * 8 & 0xfffffff8);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
      }
      else {
        uVar2 = uVar2 + 8;
      }
    } while ((uVar2 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 8));
  }
  return;
}

