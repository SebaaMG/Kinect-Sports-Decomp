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


undefined8 fn_82FA7BC8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = 0;
  while( true ) {
    iVar1 = iVar3;
    if (iVar1 == 0) {
      return 2;
    }
    if (iVar1 == param_2) break;
    iVar3 = *(int *)(iVar1 + 0x3c);
    iVar2 = iVar1;
  }
  if (iVar1 == 0) {
    return 2;
  }
  if (iVar1 == *param_1) {
    *param_1 = *(int *)(iVar1 + 0x3c);
  }
  else {
    *(int *)(iVar2 + 0x3c) = *(int *)(iVar1 + 0x3c);
  }
  if (iVar1 == param_1[1]) {
    param_1[1] = iVar2;
  }
  param_1[2] = param_1[2] + -1;
  return 1;
}

