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


void fn_8268DD60(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    uVar2 = *param_1;
    pcVar1 = "Allocated";
  }
  else if (param_3 == 1) {
    uVar2 = param_1[1];
    pcVar1 = "Used";
  }
  else {
    if (2 < param_3) {
      return;
    }
    uVar2 = param_1[2];
    pcVar1 = "AllocCount";
  }
  param_2[1] = pcVar1;
  param_2[2] = uVar2;
  *param_2 = 1;
  return;
}

