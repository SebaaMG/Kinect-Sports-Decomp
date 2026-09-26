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


undefined8 fn_82F40D58(undefined8 param_1,uint *param_2,int param_3,int param_4,uint param_5)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_2 == (uint *)0x0) {
    return 0xffffffff8000ffff;
  }
  if (param_4 == 0) {
    return uVar1;
  }
  if (6 < *param_2) {
    if (param_3 == 0) {
      return 0xffffffff80070057;
    }
    *param_2 = 2;
  }
  uVar2 = *param_2;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      if ((param_5 & 1) != 0) {
        return 0xffffffff80070057;
      }
      return uVar1;
    }
    if (uVar2 != 3) {
      if (uVar2 == 4) {
        uVar2 = 8;
      }
      else if (uVar2 == 5) {
        uVar2 = 2;
      }
      else {
        if (uVar2 != 6) {
          return uVar1;
        }
        uVar2 = 0x10;
      }
      goto LAB_82f40df4;
    }
  }
  uVar2 = 4;
LAB_82f40df4:
  if (param_5 < uVar2) {
    return 0xffffffffc00d36b1;
  }
  return uVar1;
}

