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


longlong fn_827A82C8(int *param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar1 = (ulonglong)(uint)param_1[2];
  if ((*param_1 < 0) && (uVar1 = (ulonglong)(uint)param_1[2] & 0xffffff, uVar1 == 0xffffff)) {
    uVar1 = 0xffffffffffffffff;
  }
  if ((int)uVar1 <= (int)param_2) {
    if (*param_1 < 0) {
      uVar2 = (uint)*(byte *)(param_1 + 2);
    }
    else {
      uVar2 = param_1[8];
    }
    if ((int)param_2 < (int)(uVar2 + (int)uVar1)) {
      return 0;
    }
  }
  return uVar1 - param_2;
}

