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


void fn_830051E0(double param_1,int param_2,int param_3,undefined8 param_4,char param_5)

{
  int *piStack_20;
  
  if (param_3 < 0x40001) {
    if (param_3 == 0x40000) {
      *(float *)(*(int *)(param_2 + 4) + 0x10) = (float)param_1;
      piStack_20 = (int *)(*(int *)(param_2 + 4) + 0x20);
    }
    else if (param_3 == 0x10000) {
      *(float *)(*(int *)(param_2 + 4) + 4) = (float)param_1;
      piStack_20 = (int *)(*(int *)(param_2 + 4) + 0x14);
    }
    else if (param_3 == 0x20000) {
      *(float *)(*(int *)(param_2 + 4) + 0xc) = (float)param_1;
      piStack_20 = (int *)(*(int *)(param_2 + 4) + 0x18);
    }
  }
  else if (param_3 == 0x80000) {
    *(float *)(*(int *)(param_2 + 4) + 8) = (float)param_1;
    piStack_20 = (int *)(*(int *)(param_2 + 4) + 0x1c);
  }
  if ((param_5 != '\0') && (*piStack_20 != 0)) {
    (**(code **)(*(int *)(param_2 + -0x1c) + 0x98))(param_2 + -0x1c,3);
    *piStack_20 = 0;
  }
  (**(code **)(*(int *)(param_2 + -0x1c) + 0x50))(param_2 + -0x1c);
  return;
}

