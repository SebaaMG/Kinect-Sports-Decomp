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
extern int fn_828E9FF8();


undefined8 fn_8224BE90(undefined8 param_1,int param_2,uint param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  while( true ) {
    cVar1 = fn_828E9FF8(param_1,8);
    if (cVar1 == '\0') break;
    if (param_3 <= uVar3) {
      uVar2 = 1;
    }
    else {
      *(char *)(uVar3 + param_2) = cVar1;
      uVar3 = uVar3 + 1;
    }
  }
  if (param_3 <= uVar3) {
    if (param_4 != '\0') {
      if (param_3 != 0) {
        *(undefined1 *)(param_2 + param_3 + -1) = 0;
      }
      uVar2 = 1;
    }
  }
  else {
    *(undefined1 *)(uVar3 + param_2) = 0;
  }
  return uVar2;
}

