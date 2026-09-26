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


ulonglong fn_83066FC8(int *param_1,uint param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*param_1 != 0) && (0 < (int)param_2)) {
    if ((int)param_3 == -1) {
      param_3 = (ulonglong)(uint)param_1[4];
    }
    uVar1 = (param_3 + (uint)param_1[1]) - 1 & ~(param_3 - 1);
    lVar2 = uVar1 + param_2;
    if ((lVar2 - 1U & 0xffffffff) <= (ulonglong)(uint)param_1[2]) {
      param_1[1] = (int)lVar2;
      return uVar1;
    }
  }
  return 0;
}

