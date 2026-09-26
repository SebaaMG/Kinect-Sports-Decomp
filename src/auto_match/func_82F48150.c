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
extern unsigned int *auStack_30;


longlong fn_82F48150(int *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                      ulonglong *param_5)

{
  longlong lVar1;
  int iVar2;
  ushort auStack_30 [24];
  
  if (param_5 == (ulonglong *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    *param_5 = 0;
    if (param_2 < (uint)param_1[9]) {
      auStack_30[0] = 0;
      lVar1 = (**(code **)(*(int *)param_1[5] + 0x38))((int *)param_1[5],param_3,param_4,auStack_30)
      ;
      if (-1 < lVar1) {
        if ((ulonglong)auStack_30[0] < (ulonglong)*(ushort *)(param_1 + 6)) {
          *param_5 = (longlong)param_1[7] * (longlong)(int)param_2 + (ulonglong)auStack_30[0] * 4 &
                     0xffffffff;
          iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
          if (iVar2 != 0) {
            *param_5 = *param_5 + 4;
          }
        }
        else {
          lVar1 = -0x7fff0001;
        }
      }
    }
    else {
      lVar1 = -0x3ff2c563;
    }
  }
  return lVar1;
}

