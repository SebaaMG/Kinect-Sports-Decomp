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


longlong fn_82CFB7E0(int param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (0 < (int)param_3) {
    do {
      lVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x14))
                        (*(int **)(param_1 + 8),lVar2 + param_2,param_3 - lVar2);
      lVar2 = lVar1 + lVar2;
      if ((int)lVar1 == 0) {
        return lVar2;
      }
    } while ((int)lVar2 < (int)param_3);
  }
  return param_3;
}

