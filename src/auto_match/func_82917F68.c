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


ulonglong fn_82917F68(int param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (param_2 == 0) {
    if (*(uint *)(param_1 + 0x18) <= param_3) {
      return 0;
    }
    uVar1 = (ulonglong)*(uint *)(param_3 * 4 + *(int *)(param_1 + 0x14));
  }
  else {
    if (param_3 < *(ushort *)(*(int *)(~param_2 + 0x18) + 10)) {
      uVar1 = (ulonglong)*(uint *)(*(int *)(~param_2 + 0x38) + param_3 * 4);
    }
    else {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return ~uVar1;
}

