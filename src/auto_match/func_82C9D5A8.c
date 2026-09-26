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


void fn_82C9D5A8(int param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,int param_6,int param_7)

{
  longlong lVar1;
  int iVar3;
  longlong lVar2;
  longlong lVar4;
  
  lVar1 = 8;
  lVar4 = (param_3 & 0x1fffffff) * 8 + param_2;
  iVar3 = 4;
  if (param_6 != 0) {
    lVar1 = 0xc;
    iVar3 = 0;
  }
  if (param_7 == 0) {
    (**(code **)(param_1 + 0x3e38))(lVar4,param_3,param_4,4);
    lVar4 = lVar4 + 4;
  }
  else {
    lVar1 = lVar1 + -4;
  }
  lVar2 = (longlong)iVar3 * (longlong)(int)param_3 + param_2 + 3;
  if (param_7 == 0) {
    param_5 = param_5 + -1;
    if (0 < param_5) {
      lVar2 = lVar2 - lVar4;
      do {
        (**(code **)(param_1 + 0x3e38))(lVar4,param_3,param_4,8);
        (**(code **)(param_1 + 0x3e3c))(lVar2 + lVar4,param_3,param_4,lVar1);
        param_5 = param_5 + -1;
        lVar4 = lVar4 + 8;
      } while (param_5 != 0);
    }
    (**(code **)(param_1 + 0x3e38))(lVar4,param_3,param_4,4);
  }
  else {
    param_5 = param_5 + -1;
    if (0 < param_5) {
      do {
        (**(code **)(param_1 + 0x3e3c))(lVar2,param_3,param_4,lVar1);
        param_5 = param_5 + -1;
        lVar2 = lVar2 + 8;
      } while (param_5 != 0);
    }
  }
  return;
}

