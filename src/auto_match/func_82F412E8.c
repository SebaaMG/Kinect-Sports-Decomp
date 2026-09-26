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
extern unsigned int *auStack_50;
extern int fn_82E4FE40();
extern int fn_82E50BE8();


longlong fn_82F412E8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ushort auStack_50 [40];
  
  auStack_50[0] = 0;
  lVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3,param_2,0,auStack_50);
  if (-1 < lVar1) {
    lVar2 = fn_82E50BE8((ulonglong)auStack_50[0] << 1,0,0,0,0);
    if (lVar2 == 0) {
      lVar1 = -0x7ff8fff2;
    }
    else {
      lVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3,param_2,lVar2,auStack_50);
      if (-1 < lVar1) {
        lVar1 = (**(code **)(*param_1 + 0x48))(param_1,lVar2,param_3,param_4,param_5,param_6);
      }
      fn_82E4FE40(lVar2);
    }
  }
  return lVar1;
}

