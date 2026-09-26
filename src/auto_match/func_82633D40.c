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


void fn_82633D40(char param_1,char param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
                  int param_6)

{
  uint uVar1;
  
  if (param_1 != '\0') {
    return;
  }
  if (param_2 != '\0') {
    return;
  }
  uVar1 = *param_5;
  if ((uVar1 & 0x8000) == 0) {
    return;
  }
  *param_5 = uVar1 & 0xffffffc0 | *(uint *)((uVar1 & 0x3f) * 4 + param_6) & 0x3f;
  return;
}

