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


ulonglong fn_82CAB3D0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong param_5,longlong param_6,ulonglong param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_6;
  if ((int)param_6 <= (int)param_1) {
    lVar1 = param_1;
    param_1 = param_6;
  }
  lVar2 = param_3;
  if (((int)param_1 <= (int)param_3) && (lVar2 = param_1, (int)lVar1 < (int)param_3)) {
    lVar1 = param_3;
  }
  lVar3 = param_5;
  if (((int)lVar2 <= (int)param_5) && (lVar3 = lVar2, (int)lVar1 < (int)param_5)) {
    lVar1 = param_5;
  }
  lVar2 = param_2;
  if (((int)lVar3 <= (int)param_2) && (lVar2 = lVar3, (int)lVar1 < (int)param_2)) {
    lVar1 = param_2;
  }
  lVar3 = param_4;
  if (((int)lVar2 <= (int)param_4) && (lVar3 = lVar2, (int)lVar1 < (int)param_4)) {
    lVar1 = param_4;
  }
  return ((~(param_7 ^ lVar1 - lVar3) & 0xffffffff) >> 0x1f) +
         (ulonglong)(param_7 <= (ulonglong)(lVar1 - lVar3)) & 1;
}

