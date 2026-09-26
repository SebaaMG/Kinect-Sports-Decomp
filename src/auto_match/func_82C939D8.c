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
extern int fn_82F68CC0();


void fn_82C939D8(int param_1,longlong param_2,ulonglong param_3,longlong param_4,ulonglong param_5
                  ,uint param_6,uint param_7,int param_8)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = param_6 & 3;
  param_2 = (longlong)((int)param_7 >> 2) * (longlong)(int)param_3 + (longlong)((int)param_6 >> 2) +
            param_2;
  param_7 = param_7 & 3;
  if ((uVar1 == 0) && (param_7 == 0)) {
    lVar2 = 0x10;
    do {
      fn_82F68CC0(param_4,param_2,0x10);
      lVar2 = lVar2 + -1;
      param_4 = param_4 + param_5;
      param_2 = param_2 + param_3;
    } while (lVar2 != 0);
  }
  else if (param_8 == 1) {
    (**(code **)(param_1 + 0xc60))
              (param_1,param_2,param_3,param_4,param_5,uVar1,param_7,
               *(undefined4 *)(param_1 + 0x1cc));
  }
  else {
    (**(code **)(param_1 + 0xc6c))
              (param_2,param_3,param_4,param_5,uVar1,param_7,*(undefined4 *)(param_1 + 0xf78));
    (**(code **)(param_1 + 0xc6c))
              (param_2 + 8,param_3,param_4 + 8,param_5,uVar1,param_7,
               *(undefined4 *)(param_1 + 0xf78));
    param_2 = (param_3 & 0x1fffffff) * 8 + param_2;
    param_4 = (param_5 & 0x1fffffff) * 8 + param_4;
    (**(code **)(param_1 + 0xc6c))
              (param_2,param_3,param_4,param_5,uVar1,param_7,*(undefined4 *)(param_1 + 0xf78));
    (**(code **)(param_1 + 0xc6c))
              (param_2 + 8,param_3,param_4 + 8,param_5,uVar1,param_7,
               *(undefined4 *)(param_1 + 0xf78));
  }
  return;
}

