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


longlong fn_8279A860(uint *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      code *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_3 - param_2;
  if (0 < param_3 - param_2) {
    do {
      lVar2 = (longlong)((int)lVar3 >> 1);
      iVar1 = (*param_5)((lVar2 + param_2) * 0x30 + (ulonglong)*param_1,param_4);
      if (iVar1 != 0) {
        param_2 = lVar2 + param_2 + 1;
        lVar2 = (lVar3 - lVar2) + -1;
      }
      lVar3 = lVar2;
    } while (0 < (int)lVar2);
  }
  return param_2;
}

