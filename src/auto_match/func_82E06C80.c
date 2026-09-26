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


longlong fn_82E06C80(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_2 + 1);
  if (6 < uVar1 - 1) {
    return 0;
  }
  if (uVar1 == 2) {
    return (ulonglong)*param_2 + (ulonglong)*(uint *)(param_1 + 0x2c);
  }
  if (uVar1 == 3) {
    return (ulonglong)*param_2 + (ulonglong)*(uint *)(param_1 + 0x20);
  }
  if ((uVar1 != 4) && (uVar1 != 5)) {
    if ((uVar1 != 6) && (uVar1 == 1)) {
      return (ulonglong)*param_2 + (ulonglong)*(uint *)(param_1 + 0x38);
    }
    return (ulonglong)*param_2 + (ulonglong)*(uint *)(param_1 + 8);
  }
  return (ulonglong)*param_2 + (ulonglong)*(uint *)(param_1 + 0x14);
}

