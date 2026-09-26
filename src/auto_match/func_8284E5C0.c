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


ulonglong fn_8284E5C0(int param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (((ulonglong)*(uint *)(param_1 + 8) * 0xc + (ulonglong)*(uint *)(param_1 + 0x10)) * 5 +
           param_3 & 0x3fffffff) * 4 + 0x4f & 0xfffffff0;
  if (0 < (int)param_3) {
    do {
      if (*param_2 != 0) {
        lVar1 = fn_8284E5C0(*param_2,0,0);
        uVar2 = lVar1 + uVar2;
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return uVar2;
}

