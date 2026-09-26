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
extern int fn_82A1DD38();


longlong fn_8267A310(int param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xc);
  uVar1 = (ulonglong)*(uint *)(*(int *)(param_1 + 8) + 8);
  if (uVar1 < (uVar2 + param_3 & 0xffffffff)) {
    param_3 = uVar1 - uVar2;
  }
  if (0 < (int)param_3) {
    fn_82A1DD38(param_2,*(uint *)(*(int *)(param_1 + 8) + 4) + uVar2,param_3);
    *(int *)(param_1 + 0xc) = (int)param_3 + *(int *)(param_1 + 0xc);
  }
  return param_3;
}

