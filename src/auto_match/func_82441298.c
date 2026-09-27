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
extern int fn_824BF8A8();
extern unsigned int uStack_10;
extern unsigned int uStack_c;


void fn_82441298(uint *param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  struct { undefined4 first; undefined4 second; } stack_pair_10;

  
  if (param_1[5] == 0) {
    if (((param_1[6] == 0) || (param_1[7] != 0)) || (bVar1 = true, (*param_1 & 0x100) != 0)) {
      bVar1 = false;
    }
    if (((*param_1 & 0x80) == 0) && (!bVar1)) {
      return;
    }
    stack_pair_10.second = 7;
    param_1[5] = 1;
  }
  else {
    if ((param_1[6] == 0) && ((*param_1 & 0x100) != 0)) {
      param_1[6] = 1;
    }
    if ((param_1[7] == 0) || (param_1[6] != 0)) {
      if (((*param_1 & 0x100) == 0) && (param_1[7] == 0)) {
        return;
      }
      stack_pair_10.second = 8;
    }
    else {
      stack_pair_10.second = 9;
    }
    param_1[5] = 0;
  }
  stack_pair_10.first = param_2;
  fn_824BF8A8(param_3,&stack_pair_10.first);
  return;
}

