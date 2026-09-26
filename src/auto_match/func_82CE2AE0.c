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
extern int fn_82CE2988();
extern int fn_82CE3440();


longlong fn_82CE2AE0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = (int)param_2;
  param_1[1] = param_5;
  lVar1 = fn_82CE2988(param_1 + 7,param_2,param_3,1);
  if (lVar1 < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0x10e] = 0;
  }
  else {
    param_1[0x10e] = param_4;
    fn_82CE3440(param_1 + 2,param_6,param_7,param_7,param_8);
    param_1 = param_1 + 0xe;
    lVar2 = 0x40;
    do {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      param_1 = param_1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return lVar1;
}

