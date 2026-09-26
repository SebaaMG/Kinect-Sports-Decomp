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
extern int fn_82A3DC08();
extern int fn_82A3DEC8();


longlong fn_82A3E240(int param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2;
  if ((int)param_2 < 0x101) {
    lVar1 = 0x101 - param_2;
    if ((int)param_3 <= (int)(0x101 - param_2)) {
      lVar1 = param_3;
    }
    lVar1 = fn_82A3DC08(param_1,param_2,lVar1);
    *(int *)(param_1 + 0x2eb8) = (int)lVar1;
    param_3 = (param_2 - lVar1) + param_3;
    if (param_3 < 1) {
      return param_3;
    }
  }
  lVar1 = fn_82A3DEC8(param_1,lVar1,param_3);
  return lVar1;
}

