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
extern unsigned int *auStack_4030;


longlong fn_826E9D40(int *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_4030 [16432];
  
  lVar3 = 0;
  do {
    if ((int)param_3 == 0) {
      return lVar3;
    }
    lVar4 = 0x4000;
    if ((int)param_3 < 0x4001) {
      lVar4 = param_3;
    }
    lVar1 = (**(code **)(*param_2 + 0x28))(param_2,auStack_4030,lVar4);
    lVar2 = 0;
    if (0 < lVar1) {
      lVar2 = (**(code **)(*param_1 + 0x24))(param_1,auStack_4030);
    }
    lVar3 = lVar2 + lVar3;
    param_3 = param_3 - lVar2;
  } while ((int)lVar4 <= (int)lVar2);
  return lVar3;
}

