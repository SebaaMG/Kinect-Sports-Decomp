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


ulonglong fn_82FAA150(undefined8 param_1,undefined4 *param_2)

{
  int *piVar2;
  ulonglong uVar1;
  
  if (*(int *)(param_2[1] + 0x40) != 0) {
    return (ulonglong)*(uint *)(*(int *)(param_2[1] + 0x40) + 0x60);
  }
  piVar2 = (int *)(**(code **)(*(int *)*param_2 + 8))();
  uVar1 = (**(code **)(*piVar2 + 0x20))();
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = (**(code **)(*(int *)piVar2[3] + 0x20))();
  }
  return uVar1;
}

