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


void fn_82D63A48(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  short *psVar2;
  
  psVar2 = (short *)(param_1 + 3);
  lVar1 = 3;
  do {
    if (*psVar2 != -1) {
      (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],*psVar2,param_2);
    }
    lVar1 = lVar1 + -1;
    psVar2 = psVar2 + 1;
  } while (lVar1 != 0);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}

