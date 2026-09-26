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
extern unsigned int *auStack_28;
extern unsigned int uStack_30;


undefined8 fn_82F3B788(int *param_1,uint param_2,undefined4 param_3,ushort param_4)

{
  undefined8 uVar1;
  ulonglong uStack_30;
  ulonglong auStack_28 [5];
  
  if (param_1[3] == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else if (param_2 < (uint)param_1[0x1b]) {
    if ((param_1[0x1c] == 0) || ((param_1[0x13] & 1U) == 0)) {
      uVar1 = 0xffffffffc00d3a9e;
    }
    else {
      auStack_28[0] = 0;
      uStack_30 = 0;
      uVar1 = (**(code **)(*param_1 + 0x44))(param_1,param_2,auStack_28,&uStack_30);
      if (-1 < (int)uVar1) {
        if ((auStack_28[0] < 0x100000000) && (uStack_30 < 0x100000000)) {
          *(undefined4 *)((int)auStack_28[0] + param_1[0x1c]) = param_3;
          *(ushort *)((int)uStack_30 + param_1[0x1c]) = param_4;
          if ((uint)param_1[0x1a] < (uint)param_4) {
            param_1[0x1a] = (uint)param_4;
          }
          uVar1 = 0;
        }
        else {
          uVar1 = 0xffffffffc00d36bb;
        }
      }
    }
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

