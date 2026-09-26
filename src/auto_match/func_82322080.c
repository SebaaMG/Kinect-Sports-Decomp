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
extern int fn_82331DB8();


ulonglong fn_82322080(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_82331DB8(param_1 + 0x10);
  iVar2 = fn_82331DB8(param_1 + 0x40,param_2);
  if ((iVar1 != 0) || (iVar2 != 0)) {
    if (param_3 == 0) {
      return -(ulonglong)(param_4 == 0) & 3;
    }
    if (param_3 == 1) {
      return (-(ulonglong)(param_4 != 0) << 0x20 | -(ulonglong)(param_4 != 0) & 0xfffffffd) + 5;
    }
    if (param_3 < 3) {
      return (-(ulonglong)(param_4 != 0) << 0x20 | -(ulonglong)(param_4 != 0) & 0xfffffffd) + 4;
    }
    if (param_3 == 3) {
      return 6;
    }
  }
  return 7;
}

