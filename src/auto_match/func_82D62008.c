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


short * fn_82D62008(undefined8 param_1,short *param_2,int *param_3,undefined8 param_4)

{
  longlong lVar1;
  short *psVar2;
  
  lVar1 = 3;
  psVar2 = param_2;
  do {
    if (*psVar2 != -1) {
      (**(code **)(*param_3 + 0x14))(param_3,*psVar2,param_4);
      *psVar2 = -1;
    }
    lVar1 = lVar1 + -1;
    psVar2 = psVar2 + 1;
  } while (lVar1 != 0);
  return param_2 + 0x10;
}

