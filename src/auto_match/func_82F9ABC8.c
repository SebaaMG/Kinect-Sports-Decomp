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


undefined8 fn_82F9ABC8(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if ((param_1[5] & 0xfffffffc) != 0) {
    piVar2 = param_1 + 0x44;
    do {
      if (*piVar2 != 0) {
        (**(code **)(*param_2 + 8))(param_2);
        *piVar2 = 0;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < (uint)param_1[5] >> 2);
  }
  if (param_1[0x1d] != 0) {
    (**(code **)(*param_2 + 8))(param_2);
    param_1[0x1d] = 0;
  }
  (**(code **)*param_1)(param_1,1);
  (**(code **)(*param_2 + 8))(param_2,param_1);
  return 1;
}

